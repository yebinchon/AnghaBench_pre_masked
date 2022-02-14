
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_pci {scalar_t__ pci_ps; scalar_t__ ps_wake_refcount; int ps_lock; int ps_timer; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*) ;
 struct ath10k_pci* FUNC_3 (struct ath10k*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct ath10k *VAR_0)
{
 struct ath10k_pci *VAR_1 = FUNC_3(VAR_0);
 unsigned long VAR_2;

 if (VAR_1->pci_ps == 0) {
  FUNC_2(VAR_0);
  return;
 }

 FUNC_4(&VAR_1->ps_timer);

 FUNC_5(&VAR_1->ps_lock, VAR_2);
 FUNC_0(VAR_1->ps_wake_refcount > 0);
 FUNC_1(VAR_0);
 FUNC_6(&VAR_1->ps_lock, VAR_2);
}

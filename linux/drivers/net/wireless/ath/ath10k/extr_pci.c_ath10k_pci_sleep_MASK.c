
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_pci {scalar_t__ pci_ps; scalar_t__ ps_wake_refcount; int ps_lock; int ps_timer; int ps_awake; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*,int ,char*,scalar_t__,int ) ;
 struct ath10k_pci* FUNC_2 (struct ath10k*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct ath10k *VAR_3)
{
 struct ath10k_pci *VAR_4 = FUNC_2(VAR_3);
 unsigned long VAR_5;

 if (VAR_4->pci_ps == 0)
  return;

 FUNC_5(&VAR_4->ps_lock, VAR_5);

 FUNC_1(VAR_3, VAR_0, "pci ps sleep refcount %lu awake %d\n",
     VAR_4->ps_wake_refcount, VAR_4->ps_awake);

 if (FUNC_0(VAR_4->ps_wake_refcount == 0))
  goto skip;

 VAR_4->ps_wake_refcount--;

 FUNC_3(&VAR_4->ps_timer, VAR_2 +
    FUNC_4(VAR_1));

skip:
 FUNC_6(&VAR_4->ps_lock, VAR_5);
}

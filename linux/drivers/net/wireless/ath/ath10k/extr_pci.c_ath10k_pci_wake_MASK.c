
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_pci {scalar_t__ pci_ps; scalar_t__ ps_wake_refcount; int ps_awake; int ps_lock; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,int ,char*,scalar_t__,int) ;
 struct ath10k_pci* FUNC_3 (struct ath10k*) ;
 int FUNC_4 (struct ath10k*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct ath10k *VAR_1)
{
 struct ath10k_pci *VAR_2 = FUNC_3(VAR_1);
 unsigned long VAR_3;
 int VAR_4 = 0;

 if (VAR_2->pci_ps == 0)
  return VAR_4;

 FUNC_5(&VAR_2->ps_lock, VAR_3);

 FUNC_2(VAR_1, VAR_0, "pci ps wake refcount %lu awake %d\n",
     VAR_2->ps_wake_refcount, VAR_2->ps_awake);




 if (!VAR_2->ps_awake) {
  FUNC_1(VAR_1);

  VAR_4 = FUNC_4(VAR_1);
  if (VAR_4 == 0)
   VAR_2->ps_awake = 1;
 }

 if (VAR_4 == 0) {
  VAR_2->ps_wake_refcount++;
  FUNC_0(VAR_2->ps_wake_refcount == 0);
 }

 FUNC_6(&VAR_2->ps_lock, VAR_3);

 return VAR_4;
}

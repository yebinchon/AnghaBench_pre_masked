
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_pci {int ps_awake; int ps_lock; scalar_t__ mem; scalar_t__ pci_ps; } ;
struct ath10k {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct ath10k_pci* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct ath10k *VAR_3)
{
 struct ath10k_pci *VAR_4 = FUNC_0(VAR_3);
 unsigned long VAR_5;
 int VAR_6 = 0;

 if (VAR_4->pci_ps)
  return VAR_6;

 FUNC_3(&VAR_4->ps_lock, VAR_5);

 if (!VAR_4->ps_awake) {
  FUNC_2(VAR_2,
     VAR_4->mem + VAR_0 +
     VAR_1);

  VAR_6 = FUNC_1(VAR_3);
  if (VAR_6 == 0)
   VAR_4->ps_awake = 1;
 }

 FUNC_4(&VAR_4->ps_lock, VAR_5);

 return VAR_6;
}

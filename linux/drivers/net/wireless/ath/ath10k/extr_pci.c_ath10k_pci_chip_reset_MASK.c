
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_pci {int (* pci_hard_reset ) (struct ath10k*) ;} ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct ath10k_pci* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*) ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_1)
{
 struct ath10k_pci *VAR_2 = FUNC_1(VAR_1);

 if (FUNC_0(!VAR_2->pci_hard_reset))
  return -VAR_0;

 return VAR_2->pci_hard_reset(VAR_1);
}

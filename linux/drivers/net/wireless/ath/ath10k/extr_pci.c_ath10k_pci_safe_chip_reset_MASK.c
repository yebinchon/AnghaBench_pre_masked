
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_pci {int (* pci_soft_reset ) (struct ath10k*) ;} ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 struct ath10k_pci* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*) ;

__attribute__((used)) static int FUNC_2(struct ath10k *VAR_1)
{
 struct ath10k_pci *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2->pci_soft_reset)
  return -VAR_0;

 return VAR_2->pci_soft_reset(VAR_1);
}

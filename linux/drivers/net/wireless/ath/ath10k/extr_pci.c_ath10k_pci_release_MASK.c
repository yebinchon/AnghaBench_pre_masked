
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ath10k_pci {int mem; struct pci_dev* pdev; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 struct ath10k_pci* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*,int ) ;

__attribute__((used)) static void FUNC_5(struct ath10k *VAR_1)
{
 struct ath10k_pci *VAR_2 = FUNC_0(VAR_1);
 struct pci_dev *VAR_3 = VAR_2->pdev;

 FUNC_3(VAR_3, VAR_2->mem);
 FUNC_4(VAR_3, VAR_0);
 FUNC_1(VAR_3);
 FUNC_2(VAR_3);
}

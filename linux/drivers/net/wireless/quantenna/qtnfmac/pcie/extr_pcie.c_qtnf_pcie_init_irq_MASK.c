
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qtnf_pcie_bus_priv {int msi_enabled; struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct qtnf_pcie_bus_priv *VAR_0, bool VAR_1)
{
 struct pci_dev *VAR_2 = VAR_0->pdev;


 VAR_0->msi_enabled = 0;


 if (VAR_1) {
  if (!FUNC_0(VAR_2)) {
   FUNC_2("enabled MSI interrupt\n");
   VAR_0->msi_enabled = 1;
  } else {
   FUNC_3("failed to enable MSI interrupts");
  }
 }

 if (!VAR_0->msi_enabled) {
  FUNC_3("legacy PCIE interrupts enabled\n");
  FUNC_1(VAR_2, 1);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qtnf_pcie_bus_priv {struct pci_dev* pdev; } ;
struct qtnf_bus {int fw_work; } ;
struct pci_dev {int dev; } ;


 struct qtnf_pcie_bus_priv* FUNC_0 (struct qtnf_bus*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct qtnf_bus *VAR_0)
{
 struct qtnf_pcie_bus_priv *VAR_1 = FUNC_0(VAR_0);
 struct pci_dev *VAR_2 = VAR_1->pdev;

 FUNC_1(&VAR_2->dev);
 FUNC_2(&VAR_0->fw_work);
}

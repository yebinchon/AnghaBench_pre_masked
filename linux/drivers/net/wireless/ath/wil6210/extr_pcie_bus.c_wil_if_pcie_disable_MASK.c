
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_priv {struct pci_dev* pdev; } ;
struct pci_dev {int irq; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct wil6210_priv*,int ) ;
 int FUNC_3 (struct wil6210_priv*,char*) ;

__attribute__((used)) static int FUNC_4(struct wil6210_priv *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;

 FUNC_3(VAR_0, "if_pcie_disable\n");

 FUNC_0(VAR_1);

 FUNC_2(VAR_0, VAR_1->irq);

 FUNC_1(VAR_1);


 return 0;
}

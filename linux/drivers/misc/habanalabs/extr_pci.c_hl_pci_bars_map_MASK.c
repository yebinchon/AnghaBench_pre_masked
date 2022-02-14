
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct hl_device {scalar_t__* pcie_bar; int dev; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct pci_dev*,int) ;
 scalar_t__ FUNC_3 (struct pci_dev*,int) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;

int FUNC_6(struct hl_device *VAR_2, const char * const VAR_3[3],
   bool VAR_4[3])
{
 struct pci_dev *VAR_5 = VAR_2->pdev;
 int VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_5(VAR_5, VAR_1);
 if (VAR_6) {
  FUNC_0(VAR_2->dev, "Cannot obtain PCI resources\n");
  return VAR_6;
 }

 for (VAR_7 = 0 ; VAR_7 < 3 ; VAR_7++) {
  VAR_8 = VAR_7 * 2;
  VAR_2->pcie_bar[VAR_8] = VAR_4[VAR_7] ?
    FUNC_3(VAR_5, VAR_8) :
    FUNC_2(VAR_5, VAR_8);
  if (!VAR_2->pcie_bar[VAR_8]) {
   FUNC_0(VAR_2->dev, "pci_ioremap%s_bar failed for %s\n",
     VAR_4[VAR_7] ? "_wc" : "", VAR_3[VAR_7]);
   VAR_6 = -VAR_0;
   goto err;
  }
 }

 return 0;

err:
 for (VAR_7 = 2 ; VAR_7 >= 0 ; VAR_7--) {
  VAR_8 = VAR_7 * 2;
  if (VAR_2->pcie_bar[VAR_8])
   FUNC_1(VAR_2->pcie_bar[VAR_8]);
 }

 FUNC_4(VAR_5);

 return VAR_6;
}

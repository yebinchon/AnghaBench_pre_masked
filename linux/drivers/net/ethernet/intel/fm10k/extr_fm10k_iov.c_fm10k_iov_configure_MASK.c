
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct pci_dev*,int) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (struct pci_dev*) ;
 scalar_t__ FUNC_6 (struct pci_dev*) ;

int FUNC_7(struct pci_dev *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_5(VAR_0);
 int VAR_3 = 0;

 if (VAR_2 && FUNC_6(VAR_0)) {
  FUNC_0(&VAR_0->dev,
   "Cannot modify SR-IOV while VFs are assigned\n");
  VAR_1 = VAR_2;
 } else {
  FUNC_3(VAR_0);
  FUNC_2(VAR_0);
 }


 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;


 if (VAR_1 && VAR_1 != VAR_2) {
  VAR_3 = FUNC_4(VAR_0, VAR_1);
  if (VAR_3) {
   FUNC_0(&VAR_0->dev,
    "Enable PCI SR-IOV failed: %d\n", VAR_3);
   return VAR_3;
  }
 }

 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2) {
  FUNC_1(&VAR_1->dev,
   "beiscsi_enable_pci - enable device failed\n");
  return VAR_2;
 }

 VAR_2 = FUNC_6(VAR_1, VAR_0);
 if (VAR_2) {
  FUNC_1(&VAR_1->dev,
    "beiscsi_enable_pci - request region failed\n");
  goto pci_dev_disable;
 }

 FUNC_7(VAR_1);
 VAR_2 = FUNC_2(&VAR_1->dev, FUNC_0(64));
 if (VAR_2) {
  VAR_2 = FUNC_2(&VAR_1->dev, FUNC_0(32));
  if (VAR_2) {
   FUNC_1(&VAR_1->dev, "Could not set PCI DMA Mask\n");
   goto pci_region_release;
  }
 }
 return 0;

pci_region_release:
 FUNC_5(VAR_1);
pci_dev_disable:
 FUNC_3(VAR_1);

 return VAR_2;
}

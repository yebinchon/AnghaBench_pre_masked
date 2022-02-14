
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_2__ {int dev; struct pci_dev* pdev; } ;
struct idt_ntb_dev {int cfgspc; TYPE_1__ ntb; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int ) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct pci_dev*,struct idt_ntb_dev*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*,int,int ) ;
 int * FUNC_16 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_17(struct idt_ntb_dev *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_1->ntb.pdev;
 int VAR_3;


 VAR_3 = FUNC_11(VAR_2, FUNC_0(64));
 if (VAR_3 != 0) {
  VAR_3 = FUNC_11(VAR_2, FUNC_0(32));
  if (VAR_3 != 0) {
   FUNC_2(&VAR_2->dev, "Failed to set DMA bit mask\n");
   return VAR_3;
  }
  FUNC_3(&VAR_2->dev, "Cannot set DMA highmem bit mask\n");
 }
 VAR_3 = FUNC_10(VAR_2, FUNC_0(64));
 if (VAR_3 != 0) {
  VAR_3 = FUNC_10(VAR_2, FUNC_0(32));
  if (VAR_3 != 0) {
   FUNC_2(&VAR_2->dev,
    "Failed to set consistent DMA bit mask\n");
   return VAR_3;
  }
  FUNC_3(&VAR_2->dev,
   "Cannot set consistent DMA highmem bit mask\n");
 }
 VAR_3 = FUNC_4(&VAR_1->ntb.dev,
        FUNC_5(&VAR_2->dev));
 if (VAR_3 != 0) {
  FUNC_2(&VAR_2->dev, "Failed to set NTB device DMA bit mask\n");
  return VAR_3;
 }





 VAR_3 = FUNC_9(VAR_2);
 if (VAR_3 != 0)
  FUNC_3(&VAR_2->dev, "PCIe AER capability disabled\n");
 else
  FUNC_6(VAR_2);


 VAR_3 = FUNC_14(VAR_2);
 if (VAR_3 != 0) {
  FUNC_2(&VAR_2->dev, "Failed to enable PCIe device\n");
  goto err_disable_aer;
 }





 FUNC_13(VAR_2);


 VAR_3 = FUNC_15(VAR_2, 1, VAR_0);
 if (VAR_3 != 0) {
  FUNC_2(&VAR_2->dev, "Failed to request resources\n");
  goto err_clear_master;
 }


 VAR_1->cfgspc = FUNC_16(VAR_2)[0];


 FUNC_12(VAR_2, VAR_1);

 FUNC_1(&VAR_2->dev, "NT-function PCIe interface initialized");

 return 0;

err_clear_master:
 FUNC_7(VAR_2);
err_disable_aer:
 (void)FUNC_8(VAR_2);

 return VAR_3;
}

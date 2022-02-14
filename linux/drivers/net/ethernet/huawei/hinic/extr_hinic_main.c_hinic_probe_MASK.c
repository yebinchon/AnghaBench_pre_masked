
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct pci_dev*,int ) ;
 int FUNC_10 (struct pci_dev*,int ) ;
 int FUNC_11 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_12(struct pci_dev *VAR_1,
         const struct pci_device_id *VAR_2)
{
 int VAR_3 = FUNC_6(VAR_1);

 if (VAR_3) {
  FUNC_1(&VAR_1->dev, "Failed to enable PCI device\n");
  return VAR_3;
 }

 VAR_3 = FUNC_8(VAR_1, VAR_0);
 if (VAR_3) {
  FUNC_1(&VAR_1->dev, "Failed to request PCI regions\n");
  goto err_pci_regions;
 }

 FUNC_11(VAR_1);

 VAR_3 = FUNC_10(VAR_1, FUNC_0(64));
 if (VAR_3) {
  FUNC_3(&VAR_1->dev, "Couldn't set 64-bit DMA mask\n");
  VAR_3 = FUNC_10(VAR_1, FUNC_0(32));
  if (VAR_3) {
   FUNC_1(&VAR_1->dev, "Failed to set DMA mask\n");
   goto err_dma_mask;
  }
 }

 VAR_3 = FUNC_9(VAR_1, FUNC_0(64));
 if (VAR_3) {
  FUNC_3(&VAR_1->dev,
    "Couldn't set 64-bit consistent DMA mask\n");
  VAR_3 = FUNC_9(VAR_1, FUNC_0(32));
  if (VAR_3) {
   FUNC_1(&VAR_1->dev,
    "Failed to set consistent DMA mask\n");
   goto err_dma_consistent_mask;
  }
 }

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3) {
  FUNC_1(&VAR_1->dev, "Failed to initialize NIC device\n");
  goto err_nic_dev_init;
 }

 FUNC_2(&VAR_1->dev, "HiNIC driver - probed\n");
 return 0;

err_nic_dev_init:
err_dma_consistent_mask:
err_dma_mask:
 FUNC_7(VAR_1);

err_pci_regions:
 FUNC_5(VAR_1);
 return VAR_3;
}

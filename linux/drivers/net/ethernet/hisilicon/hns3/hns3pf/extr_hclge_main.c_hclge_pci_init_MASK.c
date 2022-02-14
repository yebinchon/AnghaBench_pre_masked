
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hclge_hw {int io_base; } ;
struct hclge_dev {int num_req_vfs; struct hclge_hw hw; struct pci_dev* pdev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,int,int ) ;

__attribute__((used)) static int FUNC_12(struct hclge_dev *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pdev;
 struct hclge_hw *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_6(VAR_3);
 if (VAR_5) {
  FUNC_1(&VAR_3->dev, "failed to enable PCI device\n");
  return VAR_5;
 }

 VAR_5 = FUNC_3(&VAR_3->dev, FUNC_0(64));
 if (VAR_5) {
  VAR_5 = FUNC_3(&VAR_3->dev, FUNC_0(32));
  if (VAR_5) {
   FUNC_1(&VAR_3->dev,
    "can't set consistent PCI DMA");
   goto err_disable_device;
  }
  FUNC_2(&VAR_3->dev, "set DMA mask to 32 bits\n");
 }

 VAR_5 = FUNC_8(VAR_3, VAR_1);
 if (VAR_5) {
  FUNC_1(&VAR_3->dev, "PCI request regions failed %d\n", VAR_5);
  goto err_disable_device;
 }

 FUNC_9(VAR_3);
 VAR_4 = &VAR_2->hw;
 VAR_4->io_base = FUNC_11(VAR_3, 2, 0);
 if (!VAR_4->io_base) {
  FUNC_1(&VAR_3->dev, "Can't map configuration register space\n");
  VAR_5 = -VAR_0;
  goto err_clr_master;
 }

 VAR_2->num_req_vfs = FUNC_10(VAR_3);

 return 0;
err_clr_master:
 FUNC_4(VAR_3);
 FUNC_7(VAR_3);
err_disable_device:
 FUNC_5(VAR_3);

 return VAR_5;
}

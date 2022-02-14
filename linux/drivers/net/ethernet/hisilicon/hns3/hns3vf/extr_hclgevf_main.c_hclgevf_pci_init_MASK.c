
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hclgevf_hw {int io_base; struct hclgevf_dev* hdev; } ;
struct hclgevf_dev {struct hclgevf_hw hw; struct pci_dev* pdev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int,int ) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_10(struct hclgevf_dev *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pdev;
 struct hclgevf_hw *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5) {
  FUNC_1(&VAR_3->dev, "failed to enable PCI device\n");
  return VAR_5;
 }

 VAR_5 = FUNC_2(&VAR_3->dev, FUNC_0(64));
 if (VAR_5) {
  FUNC_1(&VAR_3->dev, "can't set consistent PCI DMA, exiting");
  goto err_disable_device;
 }

 VAR_5 = FUNC_8(VAR_3, VAR_1);
 if (VAR_5) {
  FUNC_1(&VAR_3->dev, "PCI request regions failed %d\n", VAR_5);
  goto err_disable_device;
 }

 FUNC_9(VAR_3);
 VAR_4 = &VAR_2->hw;
 VAR_4->hdev = VAR_2;
 VAR_4->io_base = FUNC_6(VAR_3, 2, 0);
 if (!VAR_4->io_base) {
  FUNC_1(&VAR_3->dev, "can't map configuration register space\n");
  VAR_5 = -VAR_0;
  goto err_clr_master;
 }

 return 0;

err_clr_master:
 FUNC_3(VAR_3);
 FUNC_7(VAR_3);
err_disable_device:
 FUNC_4(VAR_3);

 return VAR_5;
}

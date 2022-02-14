
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_adapter {void* hw_addr0; void* hw_addr1; struct pci_dev* pdev; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 void* FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int) ;
 int FUNC_6 (struct pci_dev*,int,int ) ;
 unsigned long FUNC_7 (struct pci_dev*,int) ;
 unsigned long FUNC_8 (struct pci_dev*,int) ;
 int FUNC_9 (struct pci_dev*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_10(struct vmxnet3_adapter *VAR_2)
{
 int VAR_3;
 unsigned long VAR_4, VAR_5;
 struct pci_dev *VAR_6 = VAR_2->pdev;

 VAR_3 = FUNC_4(VAR_6);
 if (VAR_3) {
  FUNC_0(&VAR_6->dev, "Failed to enable adapter: error %d\n", VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_6(VAR_6, (1 << 2) - 1,
        VAR_1);
 if (VAR_3) {
  FUNC_0(&VAR_6->dev,
   "Failed to request region for adapter: error %d\n", VAR_3);
  goto err_enable_device;
 }

 FUNC_9(VAR_6);

 VAR_4 = FUNC_8(VAR_6, 0);
 VAR_5 = FUNC_7(VAR_6, 0);
 VAR_2->hw_addr0 = FUNC_1(VAR_4, VAR_5);
 if (!VAR_2->hw_addr0) {
  FUNC_0(&VAR_6->dev, "Failed to map bar0\n");
  VAR_3 = -VAR_0;
  goto err_ioremap;
 }

 VAR_4 = FUNC_8(VAR_6, 1);
 VAR_5 = FUNC_7(VAR_6, 1);
 VAR_2->hw_addr1 = FUNC_1(VAR_4, VAR_5);
 if (!VAR_2->hw_addr1) {
  FUNC_0(&VAR_6->dev, "Failed to map bar1\n");
  VAR_3 = -VAR_0;
  goto err_bar1;
 }
 return 0;

err_bar1:
 FUNC_2(VAR_2->hw_addr0);
err_ioremap:
 FUNC_5(VAR_6, (1 << 2) - 1);
err_enable_device:
 FUNC_3(VAR_6);
 return VAR_3;
}

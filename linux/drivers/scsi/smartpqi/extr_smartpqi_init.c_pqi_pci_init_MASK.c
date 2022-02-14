
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_9__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u64 ;
struct pqi_ctrl_registers {int dummy; } ;
struct pqi_ctrl_info {TYPE_1__* pci_dev; TYPE_9__* registers; int * pqi_registers; TYPE_9__* iomem_base; } ;
typedef int dma_addr_t ;
struct TYPE_11__ {int pqi_registers; } ;
struct TYPE_10__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ) ;
 TYPE_9__* FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,struct pqi_ctrl_info*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_12(struct pqi_ctrl_info *VAR_3)
{
 int VAR_4;
 u64 VAR_5;

 VAR_4 = FUNC_5(VAR_3->pci_dev);
 if (VAR_4) {
  FUNC_1(&VAR_3->pci_dev->dev,
   "failed to enable PCI device\n");
  return VAR_4;
 }

 if (sizeof(dma_addr_t) > 4)
  VAR_5 = FUNC_0(64);
 else
  VAR_5 = FUNC_0(32);

 VAR_4 = FUNC_2(&VAR_3->pci_dev->dev, VAR_5);
 if (VAR_4) {
  FUNC_1(&VAR_3->pci_dev->dev, "failed to set DMA mask\n");
  goto disable_device;
 }

 VAR_4 = FUNC_7(VAR_3->pci_dev, VAR_0);
 if (VAR_4) {
  FUNC_1(&VAR_3->pci_dev->dev,
   "failed to obtain PCI resources\n");
  goto disable_device;
 }

 VAR_3->iomem_base = FUNC_3(FUNC_8(
  VAR_3->pci_dev, 0),
  sizeof(struct pqi_ctrl_registers));
 if (!VAR_3->iomem_base) {
  FUNC_1(&VAR_3->pci_dev->dev,
   "failed to map memory for controller registers\n");
  VAR_4 = -VAR_1;
  goto release_regions;
 }




 VAR_4 = FUNC_11(VAR_3->pci_dev,
  0x6);
 if (VAR_4) {
  FUNC_1(&VAR_3->pci_dev->dev,
   "failed to set PCIe completion timeout\n");
  goto release_regions;
 }


 FUNC_10(VAR_3->pci_dev);

 VAR_3->registers = VAR_3->iomem_base;
 VAR_3->pqi_registers = &VAR_3->registers->pqi_registers;

 FUNC_9(VAR_3->pci_dev, VAR_3);

 return 0;

release_regions:
 FUNC_6(VAR_3->pci_dev);
disable_device:
 FUNC_4(VAR_3->pci_dev);

 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct ef4_nic {struct pci_dev* pci_dev; scalar_t__ membase_phys; int membase; int net_dev; TYPE_1__* type; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int max_dma_mask; unsigned int (* mem_map_size ) (struct ef4_nic*) ;int mem_bar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (scalar_t__,unsigned int) ;
 int FUNC_2 (struct ef4_nic*,int ,int ,char*,...) ;
 int FUNC_3 (struct ef4_nic*,int ,int ,char*,...) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int) ;
 int FUNC_7 (struct pci_dev*,int,char*) ;
 scalar_t__ FUNC_8 (struct pci_dev*,int) ;
 int FUNC_9 (struct pci_dev*) ;
 int VAR_2 ;
 unsigned int FUNC_10 (struct ef4_nic*) ;

__attribute__((used)) static int FUNC_11(struct ef4_nic *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_3->pci_dev;
 dma_addr_t VAR_5 = VAR_3->type->max_dma_mask;
 unsigned int VAR_6 = VAR_3->type->mem_map_size(VAR_3);
 int VAR_7, VAR_8;

 FUNC_2(VAR_3, VAR_2, VAR_3->net_dev, "initialising I/O\n");

 VAR_8 = VAR_3->type->mem_bar;

 VAR_7 = FUNC_5(VAR_4);
 if (VAR_7) {
  FUNC_3(VAR_3, VAR_2, VAR_3->net_dev,
     "failed to enable PCI device\n");
  goto fail1;
 }

 FUNC_9(VAR_4);





 while (VAR_5 > 0x7fffffffUL) {
  VAR_7 = FUNC_0(&VAR_4->dev, VAR_5);
  if (VAR_7 == 0)
   break;
  VAR_5 >>= 1;
 }
 if (VAR_7) {
  FUNC_3(VAR_3, VAR_2, VAR_3->net_dev,
     "could not find a suitable DMA mask\n");
  goto fail2;
 }
 FUNC_2(VAR_3, VAR_2, VAR_3->net_dev,
    "using DMA mask %llx\n", (unsigned long long) VAR_5);

 VAR_3->membase_phys = FUNC_8(VAR_3->pci_dev, VAR_8);
 VAR_7 = FUNC_7(VAR_4, VAR_8, "sfc");
 if (VAR_7) {
  FUNC_3(VAR_3, VAR_2, VAR_3->net_dev,
     "request for memory BAR failed\n");
  VAR_7 = -VAR_0;
  goto fail3;
 }
 VAR_3->membase = FUNC_1(VAR_3->membase_phys, VAR_6);
 if (!VAR_3->membase) {
  FUNC_3(VAR_3, VAR_2, VAR_3->net_dev,
     "could not map memory BAR at %llx+%x\n",
     (unsigned long long)VAR_3->membase_phys, VAR_6);
  VAR_7 = -VAR_1;
  goto fail4;
 }
 FUNC_2(VAR_3, VAR_2, VAR_3->net_dev,
    "memory BAR at %llx+%x (virtual %p)\n",
    (unsigned long long)VAR_3->membase_phys, VAR_6,
    VAR_3->membase);

 return 0;

 fail4:
 FUNC_6(VAR_3->pci_dev, VAR_8);
 fail3:
 VAR_3->membase_phys = 0;
 fail2:
 FUNC_4(VAR_3->pci_dev);
 fail1:
 return VAR_7;
}

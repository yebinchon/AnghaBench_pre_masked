
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_host_bridge {int dummy; } ;
struct TYPE_2__ {char* name; int flags; scalar_t__ end; scalar_t__ start; } ;
struct iproc_pcie {int map_irq; TYPE_1__ mem; int base_addr; int base; int type; struct device* dev; } ;
struct device {int dummy; } ;
struct bcma_device {scalar_t__* addr_s; int addr; int io_addr; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct bcma_device*,struct iproc_pcie*) ;
 int FUNC_2 (struct device*,char*) ;
 struct pci_host_bridge* FUNC_3 (struct device*,int) ;
 int VAR_4 ;
 int FUNC_4 (struct iproc_pcie*,int *) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 struct iproc_pcie* FUNC_7 (struct pci_host_bridge*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct bcma_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct iproc_pcie *VAR_8;
 FUNC_0(VAR_5);
 struct pci_host_bridge *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(VAR_7, sizeof(*VAR_8));
 if (!VAR_9)
  return -VAR_0;

 VAR_8 = FUNC_7(VAR_9);

 VAR_8->dev = VAR_7;

 VAR_8->type = VAR_2;
 VAR_8->base = VAR_6->io_addr;
 if (!VAR_8->base) {
  FUNC_2(VAR_7, "no controller registers\n");
  return -VAR_0;
 }

 VAR_8->base_addr = VAR_6->addr;

 VAR_8->mem.start = VAR_6->addr_s[0];
 VAR_8->mem.end = VAR_6->addr_s[0] + VAR_3 - 1;
 VAR_8->mem.name = "PCIe MEM space";
 VAR_8->mem.flags = VAR_1;
 FUNC_5(&VAR_5, &VAR_8->mem);

 VAR_8->map_irq = VAR_4;

 VAR_10 = FUNC_4(VAR_8, &VAR_5);
 if (VAR_10) {
  FUNC_2(VAR_7, "PCIe controller setup failed\n");
  FUNC_6(&VAR_5);
  return VAR_10;
 }

 FUNC_1(VAR_6, VAR_8);
 return 0;
}

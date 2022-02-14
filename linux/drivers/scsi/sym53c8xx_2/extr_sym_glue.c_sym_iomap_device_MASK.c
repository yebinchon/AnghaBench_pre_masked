
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {void* ramaddr; void* ioaddr; } ;
struct TYPE_4__ {int features; } ;
struct sym_device {int ram_base; TYPE_2__ s; int mmio_base; TYPE_1__ chip; struct pci_dev* pdev; } ;
struct pci_dev {int dev; TYPE_3__* resource; int bus; } ;
struct pci_bus_region {int start; } ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 void* FUNC_2 (struct pci_dev*,int,int ) ;
 int FUNC_3 (struct pci_dev*,int) ;
 int FUNC_4 (int ,struct pci_bus_region*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(struct sym_device *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pdev;
 struct pci_bus_region VAR_4;
 int VAR_5 = 2;

 FUNC_4(VAR_3->bus, &VAR_4, &VAR_3->resource[1]);
 VAR_2->mmio_base = VAR_4.start;

 if (VAR_2->chip.features & VAR_1) {




  if (!VAR_3->resource[VAR_5].flags)
   VAR_5++;
  FUNC_4(VAR_3->bus, &VAR_4,
     &VAR_3->resource[VAR_5]);
  VAR_2->ram_base = VAR_4.start;
 }






 if (!VAR_2->s.ioaddr)
  VAR_2->s.ioaddr = FUNC_2(VAR_3, 0,
      FUNC_3(VAR_3, 0));
 if (!VAR_2->s.ioaddr) {
  FUNC_0(&VAR_3->dev, "could not map registers; giving up.\n");
  return -VAR_0;
 }
 if (VAR_2->ram_base) {
  VAR_2->s.ramaddr = FUNC_2(VAR_3, VAR_5,
      FUNC_3(VAR_3, VAR_5));
  if (!VAR_2->s.ramaddr) {
   FUNC_1(&VAR_3->dev,
    "could not map SRAM; continuing anyway.\n");
   VAR_2->ram_base = 0;
  }
 }

 return 0;
}

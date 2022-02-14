
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct octeon_device {TYPE_2__* pci_dev; TYPE_1__* mmio; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ start; int hw_addr; scalar_t__ done; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static inline void FUNC_3(struct octeon_device *VAR_0, int VAR_1)
{
 FUNC_0(&VAR_0->pci_dev->dev, "Freeing PCI mapped regions for Bar%d\n",
  VAR_1);

 if (VAR_0->mmio[VAR_1].done)
  FUNC_1(VAR_0->mmio[VAR_1].hw_addr);

 if (VAR_0->mmio[VAR_1].start)
  FUNC_2(VAR_0->pci_dev, VAR_1 * 2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_epf {TYPE_1__* bar; TYPE_2__* epc; } ;
struct device {int dummy; } ;
typedef enum pci_barno { ____Placeholder_pci_barno } pci_barno ;
struct TYPE_6__ {struct device* parent; } ;
struct TYPE_5__ {TYPE_3__ dev; } ;
struct TYPE_4__ {scalar_t__ flags; scalar_t__ barno; int size; int phys_addr; } ;


 int FUNC_0 (struct device*,int ,void*,int ) ;

void FUNC_1(struct pci_epf *VAR_0, void *VAR_1, enum pci_barno VAR_2)
{
 struct device *VAR_3 = VAR_0->epc->dev.parent;

 if (!VAR_1)
  return;

 FUNC_0(VAR_3, VAR_0->bar[VAR_2].size, VAR_1,
     VAR_0->bar[VAR_2].phys_addr);

 VAR_0->bar[VAR_2].phys_addr = 0;
 VAR_0->bar[VAR_2].size = 0;
 VAR_0->bar[VAR_2].barno = 0;
 VAR_0->bar[VAR_2].flags = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_bus {scalar_t__ number; } ;
struct TYPE_3__ {scalar_t__ secondary_bus; scalar_t__ subordinate_bus; } ;
struct TYPE_4__ {TYPE_1__ conf; } ;
struct mvebu_pcie_port {int devfn; TYPE_2__ bridge; } ;
struct mvebu_pcie {int nports; struct mvebu_pcie_port* ports; } ;



__attribute__((used)) static struct mvebu_pcie_port *FUNC_0(struct mvebu_pcie *VAR_0,
          struct pci_bus *VAR_1,
          int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->nports; VAR_3++) {
  struct mvebu_pcie_port *VAR_4 = &VAR_0->ports[VAR_3];

  if (VAR_1->number == 0 && VAR_4->devfn == VAR_2)
   return VAR_4;
  if (VAR_1->number != 0 &&
      VAR_1->number >= VAR_4->bridge.conf.secondary_bus &&
      VAR_1->number <= VAR_4->bridge.conf.subordinate_bus)
   return VAR_4;
 }

 return ((void*)0);
}

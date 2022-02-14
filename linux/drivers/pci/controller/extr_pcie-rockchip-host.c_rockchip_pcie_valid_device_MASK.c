
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_pcie {scalar_t__ root_bus_nr; } ;
struct pci_bus {scalar_t__ number; scalar_t__ primary; } ;



__attribute__((used)) static int FUNC_0(struct rockchip_pcie *VAR_0,
          struct pci_bus *VAR_1, int VAR_2)
{

 if (VAR_1->number == VAR_0->root_bus_nr && VAR_2 > 0)
  return 0;





 if (VAR_1->primary == VAR_0->root_bus_nr && VAR_2 > 0)
  return 0;

 return 1;
}

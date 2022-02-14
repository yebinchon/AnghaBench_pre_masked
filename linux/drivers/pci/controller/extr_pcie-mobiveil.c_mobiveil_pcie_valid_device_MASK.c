
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {scalar_t__ number; scalar_t__ primary; struct mobiveil_pcie* sysdata; } ;
struct mobiveil_pcie {scalar_t__ root_bus_nr; } ;


 scalar_t__ FUNC_0 (unsigned int) ;

__attribute__((used)) static bool FUNC_1(struct pci_bus *VAR_0, unsigned int VAR_1)
{
 struct mobiveil_pcie *VAR_2 = VAR_0->sysdata;


 if ((VAR_0->number == VAR_2->root_bus_nr) && (VAR_1 > 0))
  return 0;





 if ((VAR_0->primary == VAR_2->root_bus_nr) && (FUNC_0(VAR_1) > 0))
  return 0;

 return 1;
}

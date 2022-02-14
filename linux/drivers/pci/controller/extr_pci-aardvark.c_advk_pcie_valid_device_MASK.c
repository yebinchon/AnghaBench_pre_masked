
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {scalar_t__ number; } ;
struct advk_pcie {scalar_t__ root_bus_nr; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(struct advk_pcie *VAR_0, struct pci_bus *VAR_1,
      int VAR_2)
{
 if ((VAR_1->number == VAR_0->root_bus_nr) && FUNC_0(VAR_2) != 0)
  return 0;

 return 1;
}

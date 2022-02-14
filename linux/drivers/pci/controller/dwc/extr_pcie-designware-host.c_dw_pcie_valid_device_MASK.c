
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_port {scalar_t__ root_bus_nr; } ;
struct pci_bus {scalar_t__ number; } ;
struct dw_pcie {int dummy; } ;


 int FUNC_0 (struct dw_pcie*) ;
 struct dw_pcie* FUNC_1 (struct pcie_port*) ;

__attribute__((used)) static int FUNC_2(struct pcie_port *VAR_0, struct pci_bus *VAR_1,
    int VAR_2)
{
 struct dw_pcie *VAR_3 = FUNC_1(VAR_0);


 if (VAR_1->number != VAR_0->root_bus_nr) {
  if (!FUNC_0(VAR_3))
   return 0;
 }


 if (VAR_1->number == VAR_0->root_bus_nr && VAR_2 > 0)
  return 0;

 return 1;
}

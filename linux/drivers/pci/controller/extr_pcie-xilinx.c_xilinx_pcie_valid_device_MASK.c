
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilinx_pcie_port {scalar_t__ root_busno; } ;
struct pci_bus {scalar_t__ number; struct xilinx_pcie_port* sysdata; } ;


 int FUNC_0 (struct xilinx_pcie_port*) ;

__attribute__((used)) static bool FUNC_1(struct pci_bus *VAR_0, unsigned int VAR_1)
{
 struct xilinx_pcie_port *VAR_2 = VAR_0->sysdata;


 if (VAR_0->number != VAR_2->root_busno)
  if (!FUNC_0(VAR_2))
   return 0;


 if (VAR_0->number == VAR_2->root_busno && VAR_1 > 0)
  return 0;

 return 1;
}

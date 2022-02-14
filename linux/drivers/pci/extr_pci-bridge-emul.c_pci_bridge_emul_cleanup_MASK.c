
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bridge_emul {int pci_regs_behavior; int pcie_cap_regs_behavior; scalar_t__ has_pcie; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct pci_bridge_emul *VAR_0)
{
 if (VAR_0->has_pcie)
  FUNC_0(VAR_0->pcie_cap_regs_behavior);
 FUNC_0(VAR_0->pci_regs_behavior);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_bridge_emul_conf {int memlimit; int membase; int command; } ;
struct mvebu_pcie_window {int base; int size; int remap; } ;
struct TYPE_2__ {struct pci_bridge_emul_conf conf; } ;
struct mvebu_pcie_port {int memwin; int mem_attr; int mem_target; TYPE_1__ bridge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mvebu_pcie_port*,int ,int ,struct mvebu_pcie_window*,int *) ;

__attribute__((used)) static void FUNC_1(struct mvebu_pcie_port *VAR_2)
{
 struct mvebu_pcie_window VAR_3 = {.remap = VAR_0};
 struct pci_bridge_emul_conf *VAR_4 = &VAR_2->bridge.conf;


 if (VAR_4->memlimit < VAR_4->membase ||
     !(VAR_4->command & VAR_1)) {
  FUNC_0(VAR_2, VAR_2->mem_target, VAR_2->mem_attr,
          &VAR_3, &VAR_2->memwin);
  return;
 }







 VAR_3.base = ((VAR_4->membase & 0xFFF0) << 16);
 VAR_3.size = (((VAR_4->memlimit & 0xFFF0) << 16) | 0xFFFFF) -
         VAR_3.base + 1;

 FUNC_0(VAR_2, VAR_2->mem_target, VAR_2->mem_attr, &VAR_3,
         &VAR_2->memwin);
}

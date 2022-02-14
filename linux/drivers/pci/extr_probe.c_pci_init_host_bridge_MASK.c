
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_host_bridge {int native_aer; int native_pcie_hotplug; int native_shpc_hotplug; int native_pme; int native_ltr; int dma_ranges; int windows; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct pci_host_bridge *VAR_0)
{
 FUNC_0(&VAR_0->windows);
 FUNC_0(&VAR_0->dma_ranges);







 VAR_0->native_aer = 1;
 VAR_0->native_pcie_hotplug = 1;
 VAR_0->native_shpc_hotplug = 1;
 VAR_0->native_pme = 1;
 VAR_0->native_ltr = 1;
}

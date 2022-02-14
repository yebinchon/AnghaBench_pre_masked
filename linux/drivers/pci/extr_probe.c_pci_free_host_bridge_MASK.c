
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_host_bridge {int dma_ranges; int windows; } ;


 int FUNC_0 (struct pci_host_bridge*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct pci_host_bridge *VAR_0)
{
 FUNC_1(&VAR_0->windows);
 FUNC_1(&VAR_0->dma_ranges);

 FUNC_0(VAR_0);
}

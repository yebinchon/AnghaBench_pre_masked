
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_host_bridge {void (* release_fn ) (struct pci_host_bridge*) ;void* release_data; } ;



void FUNC_0(struct pci_host_bridge *VAR_0,
     void (*VAR_1)(struct pci_host_bridge *),
     void *VAR_2)
{
 VAR_0->release_fn = VAR_1;
 VAR_0->release_data = VAR_2;
}

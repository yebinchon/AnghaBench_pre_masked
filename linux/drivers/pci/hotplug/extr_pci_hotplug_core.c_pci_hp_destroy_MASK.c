
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_slot {int * hotplug; } ;
struct hotplug_slot {struct pci_slot* pci_slot; } ;


 int FUNC_0 (struct pci_slot*) ;

void FUNC_1(struct hotplug_slot *VAR_0)
{
 struct pci_slot *VAR_1 = VAR_0->pci_slot;

 VAR_0->pci_slot = ((void*)0);
 VAR_1->hotplug = ((void*)0);
 FUNC_0(VAR_1);
}

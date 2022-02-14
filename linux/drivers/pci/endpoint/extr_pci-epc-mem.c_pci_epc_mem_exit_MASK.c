
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_epc_mem {struct pci_epc_mem* bitmap; } ;
struct pci_epc {struct pci_epc_mem* mem; } ;


 int FUNC_0 (struct pci_epc_mem*) ;

void FUNC_1(struct pci_epc *VAR_0)
{
 struct pci_epc_mem *VAR_1 = VAR_0->mem;

 VAR_0->mem = ((void*)0);
 FUNC_0(VAR_1->bitmap);
 FUNC_0(VAR_1);
}

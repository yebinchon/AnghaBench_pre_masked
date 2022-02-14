
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_epc {TYPE_1__* mem; } ;
struct dw_pcie_ep {int msi_mem; int msi_mem_phys; struct pci_epc* epc; } ;
struct TYPE_2__ {int page_size; } ;


 int FUNC_0 (struct pci_epc*) ;
 int FUNC_1 (struct pci_epc*,int ,int ,int ) ;

void FUNC_2(struct dw_pcie_ep *VAR_0)
{
 struct pci_epc *VAR_1 = VAR_0->epc;

 FUNC_1(VAR_1, VAR_0->msi_mem_phys, VAR_0->msi_mem,
         VAR_1->mem->page_size);

 FUNC_0(VAR_1);
}

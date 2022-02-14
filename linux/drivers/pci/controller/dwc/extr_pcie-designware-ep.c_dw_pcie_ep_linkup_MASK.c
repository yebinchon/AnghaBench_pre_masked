
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_epc {int dummy; } ;
struct dw_pcie_ep {struct pci_epc* epc; } ;


 int FUNC_0 (struct pci_epc*) ;

void FUNC_1(struct dw_pcie_ep *VAR_0)
{
 struct pci_epc *VAR_1 = VAR_0->epc;

 FUNC_0(VAR_1);
}

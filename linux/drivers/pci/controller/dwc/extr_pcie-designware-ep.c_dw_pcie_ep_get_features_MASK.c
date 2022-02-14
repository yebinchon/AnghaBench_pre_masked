
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_epc_features {int dummy; } ;
struct pci_epc {int dummy; } ;
struct dw_pcie_ep {TYPE_1__* ops; } ;
struct TYPE_2__ {struct pci_epc_features const* (* get_features ) (struct dw_pcie_ep*) ;} ;


 struct dw_pcie_ep* FUNC_0 (struct pci_epc*) ;
 struct pci_epc_features const* FUNC_1 (struct dw_pcie_ep*) ;

__attribute__((used)) static const struct pci_epc_features*
FUNC_2(struct pci_epc *VAR_0, u8 VAR_1)
{
 struct dw_pcie_ep *VAR_2 = FUNC_0(VAR_0);

 if (!VAR_2->ops->get_features)
  return ((void*)0);

 return VAR_2->ops->get_features(VAR_2);
}

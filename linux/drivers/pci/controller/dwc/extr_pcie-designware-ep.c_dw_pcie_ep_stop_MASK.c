
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_epc {int dummy; } ;
struct dw_pcie_ep {int dummy; } ;
struct dw_pcie {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* stop_link ) (struct dw_pcie*) ;} ;


 struct dw_pcie_ep* FUNC_0 (struct pci_epc*) ;
 int FUNC_1 (struct dw_pcie*) ;
 struct dw_pcie* FUNC_2 (struct dw_pcie_ep*) ;

__attribute__((used)) static void FUNC_3(struct pci_epc *VAR_0)
{
 struct dw_pcie_ep *VAR_1 = FUNC_0(VAR_0);
 struct dw_pcie *VAR_2 = FUNC_2(VAR_1);

 if (!VAR_2->ops->stop_link)
  return;

 VAR_2->ops->stop_link(VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_epc {int dummy; } ;
struct dw_pcie_ep {int dummy; } ;
struct dw_pcie {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* start_link ) (struct dw_pcie*) ;} ;


 int VAR_0 ;
 struct dw_pcie_ep* FUNC_0 (struct pci_epc*) ;
 int FUNC_1 (struct dw_pcie*) ;
 struct dw_pcie* FUNC_2 (struct dw_pcie_ep*) ;

__attribute__((used)) static int FUNC_3(struct pci_epc *VAR_1)
{
 struct dw_pcie_ep *VAR_2 = FUNC_0(VAR_1);
 struct dw_pcie *VAR_3 = FUNC_2(VAR_2);

 if (!VAR_3->ops->start_link)
  return -VAR_0;

 return VAR_3->ops->start_link(VAR_3);
}

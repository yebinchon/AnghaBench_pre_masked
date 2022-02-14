
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pci_epc {int dummy; } ;
struct dw_pcie_ep {TYPE_1__* ops; } ;
typedef enum pci_epc_irq_type { ____Placeholder_pci_epc_irq_type } pci_epc_irq_type ;
struct TYPE_2__ {int (* raise_irq ) (struct dw_pcie_ep*,int ,int,int ) ;} ;


 int VAR_0 ;
 struct dw_pcie_ep* FUNC_0 (struct pci_epc*) ;
 int FUNC_1 (struct dw_pcie_ep*,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct pci_epc *VAR_1, u8 VAR_2,
    enum pci_epc_irq_type VAR_3, u16 VAR_4)
{
 struct dw_pcie_ep *VAR_5 = FUNC_0(VAR_1);

 if (!VAR_5->ops->raise_irq)
  return -VAR_0;

 return VAR_5->ops->raise_irq(VAR_5, VAR_2, VAR_3, VAR_4);
}

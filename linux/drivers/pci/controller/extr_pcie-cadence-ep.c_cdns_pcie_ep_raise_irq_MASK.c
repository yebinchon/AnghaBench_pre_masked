
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pci_epc {int dummy; } ;
struct cdns_pcie_ep {int dummy; } ;
typedef enum pci_epc_irq_type { ____Placeholder_pci_epc_irq_type } pci_epc_irq_type ;


 int VAR_0 ;


 int FUNC_0 (struct cdns_pcie_ep*,int ,int ) ;
 int FUNC_1 (struct cdns_pcie_ep*,int ,int ) ;
 struct cdns_pcie_ep* FUNC_2 (struct pci_epc*) ;

__attribute__((used)) static int FUNC_3(struct pci_epc *VAR_1, u8 VAR_2,
      enum pci_epc_irq_type VAR_3,
      u16 VAR_4)
{
 struct cdns_pcie_ep *VAR_5 = FUNC_2(VAR_1);

 switch (VAR_3) {
 case 129:
  return FUNC_0(VAR_5, VAR_2, 0);

 case 128:
  return FUNC_1(VAR_5, VAR_2, VAR_4);

 default:
  break;
 }

 return -VAR_0;
}

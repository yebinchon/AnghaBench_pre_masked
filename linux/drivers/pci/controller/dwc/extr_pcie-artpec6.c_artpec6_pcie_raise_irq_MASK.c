
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dw_pcie_ep {int dummy; } ;
struct dw_pcie {int dev; } ;
typedef enum pci_epc_irq_type { ____Placeholder_pci_epc_irq_type } pci_epc_irq_type ;


 int VAR_0 ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dw_pcie_ep*,int ,int ) ;
 struct dw_pcie* FUNC_2 (struct dw_pcie_ep*) ;

__attribute__((used)) static int FUNC_3(struct dw_pcie_ep *VAR_1, u8 VAR_2,
      enum pci_epc_irq_type VAR_3, u16 VAR_4)
{
 struct dw_pcie *VAR_5 = FUNC_2(VAR_1);

 switch (VAR_3) {
 case 129:
  FUNC_0(VAR_5->dev, "EP cannot trigger legacy IRQs\n");
  return -VAR_0;
 case 128:
  return FUNC_1(VAR_1, VAR_2, VAR_4);
 default:
  FUNC_0(VAR_5->dev, "UNKNOWN IRQ type\n");
 }

 return 0;
}

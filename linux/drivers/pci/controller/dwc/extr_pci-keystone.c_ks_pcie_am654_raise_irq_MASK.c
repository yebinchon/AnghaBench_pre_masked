
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct keystone_pcie {int dummy; } ;
struct dw_pcie_ep {int dummy; } ;
struct dw_pcie {int dev; } ;
typedef enum pci_epc_irq_type { ____Placeholder_pci_epc_irq_type } pci_epc_irq_type ;


 int VAR_0 ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dw_pcie_ep*,int ,int ) ;
 int FUNC_2 (struct keystone_pcie*) ;
 struct dw_pcie* FUNC_3 (struct dw_pcie_ep*) ;
 struct keystone_pcie* FUNC_4 (struct dw_pcie*) ;

__attribute__((used)) static int FUNC_5(struct dw_pcie_ep *VAR_1, u8 VAR_2,
       enum pci_epc_irq_type VAR_3,
       u16 VAR_4)
{
 struct dw_pcie *VAR_5 = FUNC_3(VAR_1);
 struct keystone_pcie *VAR_6 = FUNC_4(VAR_5);

 switch (VAR_3) {
 case 129:
  FUNC_2(VAR_6);
  break;
 case 128:
  FUNC_1(VAR_1, VAR_2, VAR_4);
  break;
 default:
  FUNC_0(VAR_5->dev, "UNKNOWN IRQ type\n");
  return -VAR_0;
 }

 return 0;
}

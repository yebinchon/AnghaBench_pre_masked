
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dw_pcie_ep {int dummy; } ;
struct dw_pcie {int dev; } ;
struct dra7xx_pcie {int dummy; } ;
typedef enum pci_epc_irq_type { ____Placeholder_pci_epc_irq_type } pci_epc_irq_type ;




 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dra7xx_pcie*) ;
 int FUNC_2 (struct dra7xx_pcie*,int ) ;
 struct dra7xx_pcie* FUNC_3 (struct dw_pcie*) ;
 struct dw_pcie* FUNC_4 (struct dw_pcie_ep*) ;

__attribute__((used)) static int FUNC_5(struct dw_pcie_ep *VAR_0, u8 VAR_1,
     enum pci_epc_irq_type VAR_2, u16 VAR_3)
{
 struct dw_pcie *VAR_4 = FUNC_4(VAR_0);
 struct dra7xx_pcie *VAR_5 = FUNC_3(VAR_4);

 switch (VAR_2) {
 case 129:
  FUNC_1(VAR_5);
  break;
 case 128:
  FUNC_2(VAR_5, VAR_3);
  break;
 default:
  FUNC_0(VAR_4->dev, "UNKNOWN IRQ type\n");
 }

 return 0;
}

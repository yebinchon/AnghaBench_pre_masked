
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct pci_epc {int dummy; } ;
struct dw_pcie_ep {int dummy; } ;
struct dw_pcie {int dev; } ;
typedef int phys_addr_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dw_pcie_ep*,int ,int ,size_t) ;
 struct dw_pcie_ep* FUNC_2 (struct pci_epc*) ;
 struct dw_pcie* FUNC_3 (struct dw_pcie_ep*) ;

__attribute__((used)) static int FUNC_4(struct pci_epc *VAR_0, u8 VAR_1,
          phys_addr_t VAR_2,
          u64 VAR_3, size_t VAR_4)
{
 int VAR_5;
 struct dw_pcie_ep *VAR_6 = FUNC_2(VAR_0);
 struct dw_pcie *VAR_7 = FUNC_3(VAR_6);

 VAR_5 = FUNC_1(VAR_6, VAR_2, VAR_3, VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_7->dev, "Failed to enable address\n");
  return VAR_5;
 }

 return 0;
}

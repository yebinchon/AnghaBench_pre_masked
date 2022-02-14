
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_epc {int dummy; } ;
struct dw_pcie_ep {int ob_window_map; } ;
struct dw_pcie {int dummy; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct dw_pcie*,int ,int ) ;
 int FUNC_2 (struct dw_pcie_ep*,int ,int *) ;
 struct dw_pcie_ep* FUNC_3 (struct pci_epc*) ;
 struct dw_pcie* FUNC_4 (struct dw_pcie_ep*) ;

__attribute__((used)) static void FUNC_5(struct pci_epc *VAR_1, u8 VAR_2,
      phys_addr_t VAR_3)
{
 int VAR_4;
 u32 VAR_5;
 struct dw_pcie_ep *VAR_6 = FUNC_3(VAR_1);
 struct dw_pcie *VAR_7 = FUNC_4(VAR_6);

 VAR_4 = FUNC_2(VAR_6, VAR_3, &VAR_5);
 if (VAR_4 < 0)
  return;

 FUNC_1(VAR_7, VAR_5, VAR_0);
 FUNC_0(VAR_5, VAR_6->ob_window_map);
}

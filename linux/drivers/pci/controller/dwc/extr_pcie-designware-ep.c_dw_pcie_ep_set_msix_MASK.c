
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct pci_epc {int dummy; } ;
struct dw_pcie_ep {scalar_t__ msix_cap; } ;
struct dw_pcie {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct dw_pcie*) ;
 int FUNC_1 (struct dw_pcie*) ;
 scalar_t__ FUNC_2 (struct dw_pcie*,scalar_t__) ;
 int FUNC_3 (struct dw_pcie*,scalar_t__,scalar_t__) ;
 struct dw_pcie_ep* FUNC_4 (struct pci_epc*) ;
 struct dw_pcie* FUNC_5 (struct dw_pcie_ep*) ;

__attribute__((used)) static int FUNC_6(struct pci_epc *VAR_3, u8 VAR_4, u16 VAR_5)
{
 struct dw_pcie_ep *VAR_6 = FUNC_4(VAR_3);
 struct dw_pcie *VAR_7 = FUNC_5(VAR_6);
 u32 VAR_8, VAR_9;

 if (!VAR_6->msix_cap)
  return -VAR_0;

 VAR_9 = VAR_6->msix_cap + VAR_1;
 VAR_8 = FUNC_2(VAR_7, VAR_9);
 VAR_8 &= ~VAR_2;
 VAR_8 |= VAR_5;
 FUNC_1(VAR_7);
 FUNC_3(VAR_7, VAR_9, VAR_8);
 FUNC_0(VAR_7);

 return 0;
}

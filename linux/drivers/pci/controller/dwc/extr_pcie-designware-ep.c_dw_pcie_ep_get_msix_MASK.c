
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_epc {int dummy; } ;
struct dw_pcie_ep {int msix_cap; } ;
struct dw_pcie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dw_pcie*,int) ;
 struct dw_pcie_ep* FUNC_1 (struct pci_epc*) ;
 struct dw_pcie* FUNC_2 (struct dw_pcie_ep*) ;

__attribute__((used)) static int FUNC_3(struct pci_epc *VAR_4, u8 VAR_5)
{
 struct dw_pcie_ep *VAR_6 = FUNC_1(VAR_4);
 struct dw_pcie *VAR_7 = FUNC_2(VAR_6);
 u32 VAR_8, VAR_9;

 if (!VAR_6->msix_cap)
  return -VAR_0;

 VAR_9 = VAR_6->msix_cap + VAR_1;
 VAR_8 = FUNC_0(VAR_7, VAR_9);
 if (!(VAR_8 & VAR_2))
  return -VAR_0;

 VAR_8 &= VAR_3;

 return VAR_8;
}

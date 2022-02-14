
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct pci_epc {TYPE_1__* mem; } ;
struct dw_pcie_ep {int msi_cap; int msi_mem_phys; scalar_t__ msi_mem; struct pci_epc* epc; } ;
struct dw_pcie {int dummy; } ;
struct TYPE_2__ {int page_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pci_epc*,int,int ,int,int) ;
 int FUNC_1 (struct pci_epc*,int,int ) ;
 int FUNC_2 (struct dw_pcie*,int) ;
 int FUNC_3 (struct dw_pcie*,int) ;
 struct dw_pcie* FUNC_4 (struct dw_pcie_ep*) ;
 int FUNC_5 (int,scalar_t__) ;

int FUNC_6(struct dw_pcie_ep *VAR_7, u8 VAR_8,
        u8 VAR_9)
{
 struct dw_pcie *VAR_10 = FUNC_4(VAR_7);
 struct pci_epc *VAR_11 = VAR_7->epc;
 unsigned int VAR_12;
 u16 VAR_13, VAR_14;
 u32 VAR_15, VAR_16, VAR_17;
 u64 VAR_18;
 bool VAR_19;
 int VAR_20;

 if (!VAR_7->msi_cap)
  return -VAR_0;


 VAR_17 = VAR_7->msi_cap + VAR_5;
 VAR_13 = FUNC_3(VAR_10, VAR_17);
 VAR_19 = !!(VAR_13 & VAR_6);
 VAR_17 = VAR_7->msi_cap + VAR_2;
 VAR_15 = FUNC_2(VAR_10, VAR_17);
 if (VAR_19) {
  VAR_17 = VAR_7->msi_cap + VAR_1;
  VAR_16 = FUNC_2(VAR_10, VAR_17);
  VAR_17 = VAR_7->msi_cap + VAR_4;
  VAR_14 = FUNC_3(VAR_10, VAR_17);
 } else {
  VAR_16 = 0;
  VAR_17 = VAR_7->msi_cap + VAR_3;
  VAR_14 = FUNC_3(VAR_10, VAR_17);
 }
 VAR_12 = VAR_15 & (VAR_11->mem->page_size - 1);
 VAR_18 = ((u64)VAR_16) << 32 |
   (VAR_15 & ~VAR_12);
 VAR_20 = FUNC_0(VAR_11, VAR_8, VAR_7->msi_mem_phys, VAR_18,
      VAR_11->mem->page_size);
 if (VAR_20)
  return VAR_20;

 FUNC_5(VAR_14 | (VAR_9 - 1), VAR_7->msi_mem + VAR_12);

 FUNC_1(VAR_11, VAR_8, VAR_7->msi_mem_phys);

 return 0;
}

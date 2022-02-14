
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct pci_epf_bar {int barno; size_t size; int flags; int phys_addr; } ;
struct pci_epc {int dummy; } ;
struct dw_pcie_ep {int dummy; } ;
struct dw_pcie {int dummy; } ;
typedef enum pci_barno { ____Placeholder_pci_barno } pci_barno ;
typedef enum dw_pcie_as_type { ____Placeholder_dw_pcie_as_type } dw_pcie_as_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dw_pcie*) ;
 int FUNC_1 (struct dw_pcie*) ;
 int FUNC_2 (struct dw_pcie_ep*,int,int ,int) ;
 int FUNC_3 (struct dw_pcie*,scalar_t__,int) ;
 int FUNC_4 (struct dw_pcie*,scalar_t__,int ) ;
 struct dw_pcie_ep* FUNC_5 (struct pci_epc*) ;
 int FUNC_6 (size_t) ;
 struct dw_pcie* FUNC_7 (struct dw_pcie_ep*) ;
 int FUNC_8 (size_t) ;

__attribute__((used)) static int FUNC_9(struct pci_epc *VAR_5, u8 VAR_6,
         struct pci_epf_bar *VAR_7)
{
 int VAR_8;
 struct dw_pcie_ep *VAR_9 = FUNC_5(VAR_5);
 struct dw_pcie *VAR_10 = FUNC_7(VAR_9);
 enum pci_barno VAR_11 = VAR_7->barno;
 size_t VAR_12 = VAR_7->size;
 int VAR_13 = VAR_7->flags;
 enum dw_pcie_as_type VAR_14;
 u32 VAR_15 = VAR_2 + (4 * VAR_11);

 if (!(VAR_13 & VAR_4))
  VAR_14 = VAR_1;
 else
  VAR_14 = VAR_0;

 VAR_8 = FUNC_2(VAR_9, VAR_11, VAR_7->phys_addr, VAR_14);
 if (VAR_8)
  return VAR_8;

 FUNC_1(VAR_10);

 FUNC_4(VAR_10, VAR_15, FUNC_6(VAR_12 - 1));
 FUNC_3(VAR_10, VAR_15, VAR_13);

 if (VAR_13 & VAR_3) {
  FUNC_4(VAR_10, VAR_15 + 4, FUNC_8(VAR_12 - 1));
  FUNC_3(VAR_10, VAR_15 + 4, 0);
 }

 FUNC_0(VAR_10);

 return 0;
}

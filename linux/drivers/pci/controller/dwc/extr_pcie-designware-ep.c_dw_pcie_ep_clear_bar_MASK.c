
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_epf_bar {int barno; int flags; } ;
struct pci_epc {int dummy; } ;
struct dw_pcie_ep {int ib_window_map; int * bar_to_atu; } ;
struct dw_pcie {int dummy; } ;
typedef enum pci_barno { ____Placeholder_pci_barno } pci_barno ;


 int VAR_0 ;
 int FUNC_0 (struct dw_pcie*,int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct dw_pcie*,int ,int ) ;
 struct dw_pcie_ep* FUNC_3 (struct pci_epc*) ;
 struct dw_pcie* FUNC_4 (struct dw_pcie_ep*) ;

__attribute__((used)) static void FUNC_5(struct pci_epc *VAR_1, u8 VAR_2,
     struct pci_epf_bar *VAR_3)
{
 struct dw_pcie_ep *VAR_4 = FUNC_3(VAR_1);
 struct dw_pcie *VAR_5 = FUNC_4(VAR_4);
 enum pci_barno VAR_6 = VAR_3->barno;
 u32 VAR_7 = VAR_4->bar_to_atu[VAR_6];

 FUNC_0(VAR_5, VAR_6, VAR_3->flags);

 FUNC_2(VAR_5, VAR_7, VAR_0);
 FUNC_1(VAR_7, VAR_4->ib_window_map);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_epf_bar {int barno; } ;
struct pci_epc {int dummy; } ;
struct cdns_pcie {int dummy; } ;
struct cdns_pcie_ep {struct cdns_pcie pcie; } ;
typedef enum pci_barno { ____Placeholder_pci_barno } pci_barno ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct cdns_pcie*,int) ;
 int FUNC_8 (struct cdns_pcie*,int,int) ;
 struct cdns_pcie_ep* FUNC_9 (struct pci_epc*) ;

__attribute__((used)) static void FUNC_10(struct pci_epc *VAR_2, u8 VAR_3,
       struct pci_epf_bar *VAR_4)
{
 struct cdns_pcie_ep *VAR_5 = FUNC_9(VAR_2);
 struct cdns_pcie *VAR_6 = &VAR_5->pcie;
 enum pci_barno VAR_7 = VAR_4->barno;
 u32 VAR_8, VAR_9, VAR_10, VAR_11;

 if (VAR_7 < VAR_0) {
  VAR_8 = FUNC_2(VAR_3);
  VAR_10 = VAR_7;
 } else {
  VAR_8 = FUNC_3(VAR_3);
  VAR_10 = VAR_7 - VAR_0;
 }

 VAR_11 = VAR_1;
 VAR_9 = FUNC_7(VAR_6, VAR_8);
 VAR_9 &= ~(FUNC_4(VAR_10) |
   FUNC_6(VAR_10));
 VAR_9 |= FUNC_5(VAR_10, VAR_11);
 FUNC_8(VAR_6, VAR_8, VAR_9);

 FUNC_8(VAR_6, FUNC_0(VAR_3, VAR_7), 0);
 FUNC_8(VAR_6, FUNC_1(VAR_3, VAR_7), 0);
}

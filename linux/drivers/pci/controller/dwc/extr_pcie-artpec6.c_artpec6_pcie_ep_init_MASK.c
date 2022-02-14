
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_pcie_ep {int dummy; } ;
struct dw_pcie {int dummy; } ;
struct artpec6_pcie {int dummy; } ;
typedef enum pci_barno { ____Placeholder_pci_barno } pci_barno ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct artpec6_pcie*) ;
 int FUNC_1 (struct artpec6_pcie*) ;
 int FUNC_2 (struct artpec6_pcie*) ;
 int FUNC_3 (struct artpec6_pcie*) ;
 int FUNC_4 (struct artpec6_pcie*) ;
 int FUNC_5 (struct dw_pcie*,int) ;
 struct artpec6_pcie* FUNC_6 (struct dw_pcie*) ;
 struct dw_pcie* FUNC_7 (struct dw_pcie_ep*) ;

__attribute__((used)) static void FUNC_8(struct dw_pcie_ep *VAR_2)
{
 struct dw_pcie *VAR_3 = FUNC_7(VAR_2);
 struct artpec6_pcie *VAR_4 = FUNC_6(VAR_3);
 enum pci_barno VAR_5;

 FUNC_0(VAR_4);
 FUNC_2(VAR_4);
 FUNC_1(VAR_4);
 FUNC_4(VAR_4);
 FUNC_3(VAR_4);

 for (VAR_5 = VAR_0; VAR_5 <= VAR_1; VAR_5++)
  FUNC_5(VAR_3, VAR_5);
}

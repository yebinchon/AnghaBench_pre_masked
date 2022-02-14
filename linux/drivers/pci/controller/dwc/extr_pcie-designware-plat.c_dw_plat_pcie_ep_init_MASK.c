
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_pcie_ep {int dummy; } ;
struct dw_pcie {int dummy; } ;
typedef enum pci_barno { ____Placeholder_pci_barno } pci_barno ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dw_pcie*,int) ;
 struct dw_pcie* FUNC_1 (struct dw_pcie_ep*) ;

__attribute__((used)) static void FUNC_2(struct dw_pcie_ep *VAR_2)
{
 struct dw_pcie *VAR_3 = FUNC_1(VAR_2);
 enum pci_barno VAR_4;

 for (VAR_4 = VAR_0; VAR_4 <= VAR_1; VAR_4++)
  FUNC_0(VAR_3, VAR_4);
}

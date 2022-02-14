
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spear13xx_pcie {struct pcie_app_reg* app_base; struct dw_pcie* pci; } ;
struct pcie_port {int dummy; } ;
struct pcie_app_reg {int int_mask; } ;
struct dw_pcie {struct pcie_port pp; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct pcie_port*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static void FUNC_4(struct spear13xx_pcie *VAR_2)
{
 struct dw_pcie *VAR_3 = VAR_2->pci;
 struct pcie_port *VAR_4 = &VAR_3->pp;
 struct pcie_app_reg *VAR_5 = VAR_2->app_base;


 if (FUNC_0(VAR_0)) {
  FUNC_1(VAR_4);
  FUNC_3(FUNC_2(&VAR_5->int_mask) |
    VAR_1, &VAR_5->int_mask);
 }
}

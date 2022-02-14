
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spear13xx_pcie {struct pcie_app_reg* app_base; } ;
struct pcie_app_reg {int app_status_1; } ;
struct dw_pcie {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct spear13xx_pcie* FUNC_1 (struct dw_pcie*) ;

__attribute__((used)) static int FUNC_2(struct dw_pcie *VAR_1)
{
 struct spear13xx_pcie *VAR_2 = FUNC_1(VAR_1);
 struct pcie_app_reg *VAR_3 = VAR_2->app_base;

 if (FUNC_0(&VAR_3->app_status_1) & VAR_0)
  return 1;

 return 0;
}

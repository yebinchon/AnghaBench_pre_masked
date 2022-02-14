
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spear13xx_pcie {struct dw_pcie* pci; struct pcie_app_reg* app_base; } ;
struct pcie_port {int dummy; } ;
struct pcie_app_reg {int int_clr; int int_sts; } ;
struct dw_pcie {struct pcie_port pp; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 unsigned int VAR_2 ;
 int FUNC_2 (struct pcie_port*) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (unsigned int,int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 struct spear13xx_pcie *VAR_5 = VAR_4;
 struct pcie_app_reg *VAR_6 = VAR_5->app_base;
 struct dw_pcie *VAR_7 = VAR_5->pci;
 struct pcie_port *VAR_8 = &VAR_7->pp;
 unsigned int VAR_9;

 VAR_9 = FUNC_3(&VAR_6->int_sts);

 if (VAR_9 & VAR_2) {
  FUNC_0(!FUNC_1(VAR_0));
  FUNC_2(VAR_8);
 }

 FUNC_4(VAR_9, &VAR_6->int_clr);

 return VAR_1;
}

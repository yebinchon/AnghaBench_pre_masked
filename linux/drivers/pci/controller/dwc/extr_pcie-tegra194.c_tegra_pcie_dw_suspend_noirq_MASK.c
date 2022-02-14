
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_pcie_dw {int pci; int msi_ctrl_int; int link_state; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tegra_pcie_dw*) ;
 struct tegra_pcie_dw* FUNC_1 (struct device*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct tegra_pcie_dw*) ;
 int FUNC_4 (struct tegra_pcie_dw*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1)
{
 struct tegra_pcie_dw *VAR_2 = FUNC_1(VAR_1);

 if (!VAR_2->link_state)
  return 0;


 VAR_2->msi_ctrl_int = FUNC_2(&VAR_2->pci,
            VAR_0);
 FUNC_3(VAR_2);
 FUNC_4(VAR_2);

 return FUNC_0(VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_pcie_dw {unsigned int phy_count; int * phys; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct tegra_pcie_dw *VAR_0)
{
 unsigned int VAR_1 = VAR_0->phy_count;

 while (VAR_1--) {
  FUNC_1(VAR_0->phys[VAR_1]);
  FUNC_0(VAR_0->phys[VAR_1]);
 }
}

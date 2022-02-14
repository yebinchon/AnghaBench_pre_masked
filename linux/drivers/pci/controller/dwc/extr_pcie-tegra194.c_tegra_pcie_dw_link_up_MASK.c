
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_pcie_dw {scalar_t__ pcie_cap_base; } ;
struct dw_pcie {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dw_pcie*,scalar_t__) ;
 struct tegra_pcie_dw* FUNC_1 (struct dw_pcie*) ;

__attribute__((used)) static int FUNC_2(struct dw_pcie *VAR_2)
{
 struct tegra_pcie_dw *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4 = FUNC_0(VAR_2, VAR_3->pcie_cap_base + VAR_0);

 return !!(VAR_4 & VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_pcie_soc {int pads_pll_ctl; } ;
struct tegra_pcie {struct tegra_pcie_soc* soc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tegra_pcie*,int ) ;
 int FUNC_1 (struct tegra_pcie*,int,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct tegra_pcie *VAR_5)
{
 const struct tegra_pcie_soc *VAR_6 = VAR_5->soc;
 u32 VAR_7;


 VAR_7 = FUNC_0(VAR_5, VAR_0);
 VAR_7 &= ~(VAR_3 | VAR_2);
 FUNC_1(VAR_5, VAR_7, VAR_0);


 VAR_7 = FUNC_0(VAR_5, VAR_0);
 VAR_7 |= VAR_1;
 FUNC_1(VAR_5, VAR_7, VAR_0);


 VAR_7 = FUNC_0(VAR_5, VAR_6->pads_pll_ctl);
 VAR_7 &= ~VAR_4;
 FUNC_1(VAR_5, VAR_7, VAR_6->pads_pll_ctl);

 FUNC_2(20, 100);

 return 0;
}

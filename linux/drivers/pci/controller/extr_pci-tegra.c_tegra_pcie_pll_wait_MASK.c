
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_pcie_soc {int pads_pll_ctl; } ;
struct tegra_pcie {struct tegra_pcie_soc* soc; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (struct tegra_pcie*,int ) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct tegra_pcie *VAR_3, unsigned long VAR_4)
{
 const struct tegra_pcie_soc *VAR_5 = VAR_3->soc;
 u32 VAR_6;

 VAR_4 = VAR_2 + FUNC_0(VAR_4);

 while (FUNC_2(VAR_2, VAR_4)) {
  VAR_6 = FUNC_1(VAR_3, VAR_5->pads_pll_ctl);
  if (VAR_6 & VAR_1)
   return 0;
 }

 return -VAR_0;
}

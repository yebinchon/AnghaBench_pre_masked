
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_pcie_soc {int tx_ref_sel; int pads_pll_ctl; } ;
struct tegra_pcie {struct tegra_pcie_soc* soc; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct tegra_pcie*,int ) ;
 int FUNC_2 (struct tegra_pcie*,int,int ) ;
 int FUNC_3 (struct tegra_pcie*,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct tegra_pcie *VAR_9)
{
 struct device *VAR_10 = VAR_9->dev;
 const struct tegra_pcie_soc *VAR_11 = VAR_9->soc;
 u32 VAR_12;
 int VAR_13;


 FUNC_2(VAR_9, 0x0, VAR_3);


 VAR_12 = FUNC_1(VAR_9, VAR_0);
 VAR_12 |= VAR_1;
 FUNC_2(VAR_9, VAR_12, VAR_0);





 VAR_12 = FUNC_1(VAR_9, VAR_11->pads_pll_ctl);
 VAR_12 &= ~(VAR_6 | VAR_8);
 VAR_12 |= VAR_5 | VAR_11->tx_ref_sel;
 FUNC_2(VAR_9, VAR_12, VAR_11->pads_pll_ctl);


 VAR_12 = FUNC_1(VAR_9, VAR_11->pads_pll_ctl);
 VAR_12 &= ~VAR_7;
 FUNC_2(VAR_9, VAR_12, VAR_11->pads_pll_ctl);

 FUNC_4(20, 100);


 VAR_12 = FUNC_1(VAR_9, VAR_11->pads_pll_ctl);
 VAR_12 |= VAR_7;
 FUNC_2(VAR_9, VAR_12, VAR_11->pads_pll_ctl);


 VAR_13 = FUNC_3(VAR_9, 500);
 if (VAR_13 < 0) {
  FUNC_0(VAR_10, "PLL failed to lock: %d\n", VAR_13);
  return VAR_13;
 }


 VAR_12 = FUNC_1(VAR_9, VAR_0);
 VAR_12 &= ~VAR_1;
 FUNC_2(VAR_9, VAR_12, VAR_0);


 VAR_12 = FUNC_1(VAR_9, VAR_0);
 VAR_12 |= VAR_4 | VAR_2;
 FUNC_2(VAR_9, VAR_12, VAR_0);

 return 0;
}

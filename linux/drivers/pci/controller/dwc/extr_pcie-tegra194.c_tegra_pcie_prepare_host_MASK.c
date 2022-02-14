
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_pcie_dw {int max_speed; int num_lanes; int core_clk; scalar_t__ update_fc_fixup; scalar_t__ pcie_cap_base; } ;
struct pcie_port {int dummy; } ;
struct dw_pcie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int FUNC_0 (struct tegra_pcie_dw*,int ) ;
 int FUNC_1 (struct tegra_pcie_dw*,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct tegra_pcie_dw*) ;
 int FUNC_4 (struct dw_pcie*,scalar_t__) ;
 int FUNC_5 (struct pcie_port*) ;
 int FUNC_6 (struct dw_pcie*,scalar_t__,int) ;
 int FUNC_7 (struct tegra_pcie_dw*) ;
 int FUNC_8 (int) ;
 struct dw_pcie* FUNC_9 (struct pcie_port*) ;
 struct tegra_pcie_dw* FUNC_10 (struct dw_pcie*) ;
 int FUNC_11 (int,int) ;

__attribute__((used)) static void FUNC_12(struct pcie_port *VAR_32)
{
 struct dw_pcie *VAR_33 = FUNC_9(VAR_32);
 struct tegra_pcie_dw *VAR_34 = FUNC_10(VAR_33);
 u32 VAR_35;

 VAR_35 = FUNC_4(VAR_33, VAR_27);
 VAR_35 &= ~(VAR_17 | VAR_18);
 FUNC_6(VAR_33, VAR_27, VAR_35);

 VAR_35 = FUNC_4(VAR_33, VAR_28);
 VAR_35 |= VAR_7;
 VAR_35 |= VAR_8;
 FUNC_6(VAR_33, VAR_28, VAR_35);

 FUNC_6(VAR_33, VAR_22, 0);


 VAR_35 = FUNC_4(VAR_33, VAR_29);
 VAR_35 &= ~(VAR_19 << VAR_20);
 VAR_35 |= VAR_21 << VAR_20;
 FUNC_6(VAR_33, VAR_29, VAR_35);

 VAR_35 = FUNC_4(VAR_33, VAR_31);
 VAR_35 &= ~VAR_12;
 VAR_35 |= VAR_13;
 FUNC_6(VAR_33, VAR_31, VAR_35);


 VAR_35 = FUNC_4(VAR_33, VAR_30);
 VAR_35 &= ~(VAR_0 << VAR_2);
 VAR_35 |= (VAR_1 <<
  VAR_2);
 FUNC_6(VAR_33, VAR_30, VAR_35);


 if (VAR_34->max_speed && VAR_34->max_speed != -VAR_11) {
  VAR_35 = FUNC_4(VAR_33, VAR_34->pcie_cap_base +
     VAR_23);
  VAR_35 &= ~VAR_25;
  VAR_35 |= VAR_34->max_speed;
  FUNC_6(VAR_33, VAR_34->pcie_cap_base + VAR_23,
       VAR_35);
 }


 VAR_35 = FUNC_4(VAR_33, VAR_34->pcie_cap_base + VAR_23);
 VAR_35 &= ~VAR_24;
 VAR_35 |= (VAR_34->num_lanes << VAR_26);
 FUNC_6(VAR_33, VAR_34->pcie_cap_base + VAR_23, VAR_35);

 FUNC_3(VAR_34);

 FUNC_7(VAR_34);

 VAR_35 = FUNC_4(VAR_33, VAR_14);
 VAR_35 &= ~VAR_15;
 FUNC_6(VAR_33, VAR_14, VAR_35);

 if (VAR_34->update_fc_fixup) {
  VAR_35 = FUNC_4(VAR_33, VAR_10);
  VAR_35 |= 0x1 << VAR_9;
  FUNC_6(VAR_33, VAR_10, VAR_35);
 }

 FUNC_5(VAR_32);

 FUNC_2(VAR_34->core_clk, VAR_16);


 VAR_35 = FUNC_0(VAR_34, VAR_5);
 VAR_35 &= ~VAR_6;
 FUNC_1(VAR_34, VAR_35, VAR_5);

 FUNC_11(100, 200);


 VAR_35 = FUNC_0(VAR_34, VAR_3);
 VAR_35 |= VAR_4;
 FUNC_1(VAR_34, VAR_35, VAR_3);


 VAR_35 = FUNC_0(VAR_34, VAR_5);
 VAR_35 |= VAR_6;
 FUNC_1(VAR_34, VAR_35, VAR_5);

 FUNC_8(100);
}

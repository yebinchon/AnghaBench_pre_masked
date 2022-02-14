
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int rp_ectl_2_r1; int rp_ectl_4_r1; int rp_ectl_5_r1; int rp_ectl_6_r1; int rp_ectl_2_r2; int rp_ectl_4_r2; int rp_ectl_5_r2; int rp_ectl_6_r2; } ;
struct TYPE_6__ {TYPE_2__ regs; } ;
struct tegra_pcie_soc {TYPE_3__ ectl; } ;
struct tegra_pcie_port {scalar_t__ base; TYPE_1__* pcie; } ;
struct TYPE_4__ {struct tegra_pcie_soc* soc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct tegra_pcie_port *VAR_18)
{
 const struct tegra_pcie_soc *VAR_19 = VAR_18->pcie->soc;
 u32 VAR_20;

 VAR_20 = FUNC_0(VAR_18->base + VAR_0);
 VAR_20 &= ~VAR_1;
 VAR_20 |= VAR_19->ectl.regs.rp_ectl_2_r1;
 FUNC_1(VAR_20, VAR_18->base + VAR_0);

 VAR_20 = FUNC_0(VAR_18->base + VAR_4);
 VAR_20 &= ~VAR_5;
 VAR_20 |= VAR_19->ectl.regs.rp_ectl_4_r1 <<
    VAR_6;
 FUNC_1(VAR_20, VAR_18->base + VAR_4);

 VAR_20 = FUNC_0(VAR_18->base + VAR_10);
 VAR_20 &= ~VAR_11;
 VAR_20 |= VAR_19->ectl.regs.rp_ectl_5_r1;
 FUNC_1(VAR_20, VAR_18->base + VAR_10);

 VAR_20 = FUNC_0(VAR_18->base + VAR_14);
 VAR_20 &= ~VAR_15;
 VAR_20 |= VAR_19->ectl.regs.rp_ectl_6_r1;
 FUNC_1(VAR_20, VAR_18->base + VAR_14);

 VAR_20 = FUNC_0(VAR_18->base + VAR_2);
 VAR_20 &= ~VAR_3;
 VAR_20 |= VAR_19->ectl.regs.rp_ectl_2_r2;
 FUNC_1(VAR_20, VAR_18->base + VAR_2);

 VAR_20 = FUNC_0(VAR_18->base + VAR_7);
 VAR_20 &= ~VAR_8;
 VAR_20 |= VAR_19->ectl.regs.rp_ectl_4_r2 <<
    VAR_9;
 FUNC_1(VAR_20, VAR_18->base + VAR_7);

 VAR_20 = FUNC_0(VAR_18->base + VAR_12);
 VAR_20 &= ~VAR_13;
 VAR_20 |= VAR_19->ectl.regs.rp_ectl_5_r2;
 FUNC_1(VAR_20, VAR_18->base + VAR_12);

 VAR_20 = FUNC_0(VAR_18->base + VAR_16);
 VAR_20 &= ~VAR_17;
 VAR_20 |= VAR_19->ectl.regs.rp_ectl_6_r2;
 FUNC_1(VAR_20, VAR_18->base + VAR_16);
}

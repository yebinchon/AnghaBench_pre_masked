
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_pcie_soc {int update_fc_threshold; scalar_t__ update_fc_timer; scalar_t__ raw_violation_fixup; scalar_t__ program_deskew_time; } ;
struct tegra_pcie_port {scalar_t__ base; TYPE_1__* pcie; } ;
struct TYPE_2__ {struct tegra_pcie_soc* soc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct tegra_pcie_port *VAR_13)
{
 const struct tegra_pcie_soc *VAR_14 = VAR_13->pcie->soc;
 u32 VAR_15;






 if (VAR_14->program_deskew_time) {
  VAR_15 = FUNC_0(VAR_13->base + VAR_8);
  VAR_15 &= ~VAR_10;
  VAR_15 |= VAR_9;
  FUNC_1(VAR_15, VAR_13->base + VAR_8);
 }


 if (VAR_14->raw_violation_fixup) {
  VAR_15 = FUNC_0(VAR_13->base + VAR_5);
  VAR_15 &= ~VAR_7;
  VAR_15 |= VAR_6;
  FUNC_1(VAR_15, VAR_13->base + VAR_5);

  VAR_15 = FUNC_0(VAR_13->base + VAR_3);
  VAR_15 |= VAR_4;
  FUNC_1(VAR_15, VAR_13->base + VAR_3);

  VAR_15 = FUNC_0(VAR_13->base + VAR_11);
  VAR_15 &= ~VAR_12;
  VAR_15 |= VAR_14->update_fc_threshold;
  FUNC_1(VAR_15, VAR_13->base + VAR_11);
 }

 if (VAR_14->update_fc_timer) {
  VAR_15 = FUNC_0(VAR_13->base + VAR_11);
  VAR_15 &= ~VAR_12;
  VAR_15 |= VAR_14->update_fc_threshold;
  FUNC_1(VAR_15, VAR_13->base + VAR_11);
 }







 VAR_15 = FUNC_0(VAR_13->base + VAR_2);
 VAR_15 &= ~VAR_0;
 VAR_15 |= VAR_1;
 FUNC_1(VAR_15, VAR_13->base + VAR_2);
}

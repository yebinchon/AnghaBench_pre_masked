
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_pcie_soc {scalar_t__ update_clamp_threshold; } ;
struct tegra_pcie_port {scalar_t__ base; TYPE_1__* pcie; } ;
struct TYPE_2__ {struct tegra_pcie_soc* soc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct tegra_pcie_port *VAR_14)
{
 const struct tegra_pcie_soc *VAR_15 = VAR_14->pcie->soc;
 u32 VAR_16;


 VAR_16 = FUNC_0(VAR_14->base + VAR_7);
 VAR_16 |= VAR_8;
 FUNC_1(VAR_16, VAR_14->base + VAR_7);


 VAR_16 = FUNC_0(VAR_14->base + VAR_9);
 VAR_16 |= VAR_12;
 VAR_16 |= VAR_13;
 FUNC_1(VAR_16, VAR_14->base + VAR_9);





 VAR_16 = FUNC_0(VAR_14->base + VAR_10);
 VAR_16 |= VAR_11;
 FUNC_1(VAR_16, VAR_14->base + VAR_10);

 VAR_16 = FUNC_0(VAR_14->base + VAR_0);
 VAR_16 |= VAR_1;
 VAR_16 |= VAR_4;

 if (VAR_15->update_clamp_threshold) {
  VAR_16 &= ~(VAR_3 |
    VAR_6);
  VAR_16 |= VAR_2 |
   VAR_5;
 }

 FUNC_1(VAR_16, VAR_14->base + VAR_0);
}

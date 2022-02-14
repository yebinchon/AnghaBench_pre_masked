
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xenon_emmc_phy_params {int slow_mode; int znr; int zpr; int nr_tun_times; int tun_step_divider; } ;
struct sdhci_host {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sdhci_host*,struct device_node*,struct xenon_emmc_phy_params*) ;
 scalar_t__ FUNC_1 (struct device_node*,char*) ;
 int FUNC_2 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_3(struct sdhci_host *VAR_7,
      struct device_node *VAR_8,
      struct xenon_emmc_phy_params *VAR_9)
{
 u32 VAR_10;

 VAR_9->slow_mode = 0;
 if (FUNC_1(VAR_8, "marvell,xenon-phy-slow-mode"))
  VAR_9->slow_mode = 1;

 VAR_9->znr = VAR_3;
 if (!FUNC_2(VAR_8, "marvell,xenon-phy-znr", &VAR_10))
  VAR_9->znr = VAR_10 & VAR_4;

 VAR_9->zpr = VAR_5;
 if (!FUNC_2(VAR_8, "marvell,xenon-phy-zpr", &VAR_10))
  VAR_9->zpr = VAR_10 & VAR_6;

 VAR_9->nr_tun_times = VAR_1;
 if (!FUNC_2(VAR_8, "marvell,xenon-phy-nr-success-tun",
      &VAR_10))
  VAR_9->nr_tun_times = VAR_10 & VAR_2;

 VAR_9->tun_step_divider = VAR_0;
 if (!FUNC_2(VAR_8, "marvell,xenon-phy-tun-step-divider",
      &VAR_10))
  VAR_9->tun_step_divider = VAR_10 & 0xFF;

 return FUNC_0(VAR_7, VAR_8, VAR_9);
}

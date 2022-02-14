
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xenon_priv {struct xenon_emmc_phy_params* phy_params; } ;
struct xenon_emmc_phy_params {int tun_step_divider; int nr_tun_times; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {scalar_t__ clock; int mmc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 struct xenon_priv* FUNC_2 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (struct sdhci_host*,int ) ;
 int FUNC_5 (struct sdhci_host*,int,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_8(struct sdhci_host *VAR_8)
{
 struct sdhci_pltfm_host *VAR_9 = FUNC_3(VAR_8);
 struct xenon_priv *VAR_10 = FUNC_2(VAR_9);
 struct xenon_emmc_phy_params *VAR_11 = VAR_10->phy_params;
 u32 VAR_12, VAR_13;
 int VAR_14;

 if (VAR_8->clock <= VAR_1)
  return -VAR_0;

 VAR_14 = FUNC_7(VAR_8);
 if (VAR_14)
  return VAR_14;


 VAR_12 = FUNC_4(VAR_8, VAR_2);
 VAR_13 = VAR_12 / VAR_11->tun_step_divider;
 if (FUNC_6(VAR_13 > VAR_4)) {
  FUNC_0(FUNC_1(VAR_8->mmc),
    "HS200 TUNING_STEP %d is larger than MAX value\n",
    VAR_13);
  VAR_13 = VAR_4;
 }


 VAR_12 = FUNC_4(VAR_8, VAR_3);
 VAR_12 &= ~(VAR_6 <<
   VAR_7);
 VAR_12 |= (VAR_11->nr_tun_times << VAR_7);
 VAR_12 &= ~(VAR_4 << VAR_5);
 VAR_12 |= (VAR_13 << VAR_5);
 FUNC_5(VAR_8, VAR_12, VAR_3);

 return 0;
}

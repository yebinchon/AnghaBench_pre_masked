
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xenon_priv {int sdhc_id; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int preset_enabled; scalar_t__ clock; int quirks2; int flags; } ;
struct mmc_ios {scalar_t__ timing; } ;
struct mmc_host {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct sdhci_host* FUNC_0 (struct mmc_host*) ;
 struct xenon_priv* FUNC_1 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (struct sdhci_host*,int ) ;
 int FUNC_4 (struct mmc_host*,struct mmc_ios*) ;
 int FUNC_5 (struct sdhci_host*,int ,int ) ;
 int FUNC_6 (struct sdhci_host*,struct mmc_ios*) ;
 int FUNC_7 (struct sdhci_host*,int ,int) ;

__attribute__((used)) static void FUNC_8(struct mmc_host *VAR_8, struct mmc_ios *VAR_9)
{
 struct sdhci_host *VAR_10 = FUNC_0(VAR_8);
 struct sdhci_pltfm_host *VAR_11 = FUNC_2(VAR_10);
 struct xenon_priv *VAR_12 = FUNC_1(VAR_11);
 u32 VAR_13;
 if ((VAR_9->timing == VAR_2) ||
     (VAR_9->timing == VAR_1) ||
     (VAR_9->timing == VAR_0)) {
  VAR_10->preset_enabled = 0;
  VAR_10->quirks2 |= VAR_6;
  VAR_10->flags &= ~VAR_5;

  VAR_13 = FUNC_3(VAR_10, VAR_4);
  VAR_13 &= ~VAR_3;
  FUNC_5(VAR_10, VAR_13, VAR_4);
 } else {
  VAR_10->quirks2 &= ~VAR_6;
 }

 FUNC_4(VAR_8, VAR_9);
 FUNC_6(VAR_10, VAR_9);

 if (VAR_10->clock > VAR_7)
  FUNC_7(VAR_10, VAR_12->sdhc_id, 1);
}

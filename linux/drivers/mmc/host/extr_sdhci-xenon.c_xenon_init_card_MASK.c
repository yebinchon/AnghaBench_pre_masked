
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenon_priv {int init_card_type; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int dummy; } ;
struct mmc_host {int dummy; } ;
struct mmc_card {int type; } ;


 struct sdhci_host* FUNC_0 (struct mmc_host*) ;
 struct xenon_priv* FUNC_1 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_2 (struct sdhci_host*) ;

__attribute__((used)) static void FUNC_3(struct mmc_host *VAR_0, struct mmc_card *VAR_1)
{
 struct sdhci_host *VAR_2 = FUNC_0(VAR_0);
 struct sdhci_pltfm_host *VAR_3 = FUNC_2(VAR_2);
 struct xenon_priv *VAR_4 = FUNC_1(VAR_3);


 VAR_4->init_card_type = VAR_1->type;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_omap_host {int dummy; } ;
struct sdhci_host {int dummy; } ;
struct mmc_ios {int power_mode; int timing; int bus_mode; } ;
struct mmc_host {int dummy; } ;


 struct sdhci_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct sdhci_omap_host*,int ) ;
 int FUNC_2 (struct sdhci_omap_host*,int ) ;
 int FUNC_3 (struct sdhci_omap_host*,int ) ;
 struct sdhci_omap_host* FUNC_4 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_5 (struct sdhci_host*) ;
 int FUNC_6 (struct mmc_host*,struct mmc_ios*) ;

__attribute__((used)) static void FUNC_7(struct mmc_host *VAR_0, struct mmc_ios *VAR_1)
{
 struct sdhci_host *VAR_2 = FUNC_0(VAR_0);
 struct sdhci_pltfm_host *VAR_3;
 struct sdhci_omap_host *VAR_4;

 VAR_3 = FUNC_5(VAR_2);
 VAR_4 = FUNC_4(VAR_3);

 FUNC_1(VAR_4, VAR_1->bus_mode);
 FUNC_3(VAR_4, VAR_1->timing);
 FUNC_6(VAR_0, VAR_1);
 FUNC_2(VAR_4, VAR_1->power_mode);
}

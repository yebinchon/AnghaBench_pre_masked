
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_tegra {int last_calib; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int dummy; } ;
struct mmc_request {int dummy; } ;
struct mmc_host {int dummy; } ;
typedef int ktime_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 struct sdhci_host* FUNC_3 (struct mmc_host*) ;
 struct sdhci_tegra* FUNC_4 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_5 (struct sdhci_host*) ;
 int FUNC_6 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_7 (struct sdhci_host*) ;

__attribute__((used)) static void FUNC_8(struct mmc_host *VAR_0, struct mmc_request *VAR_1)
{
 struct sdhci_host *VAR_2 = FUNC_3(VAR_0);
 struct sdhci_pltfm_host *VAR_3 = FUNC_5(VAR_2);
 struct sdhci_tegra *VAR_4 = FUNC_4(VAR_3);
 ktime_t VAR_5 = FUNC_1(FUNC_0(), VAR_4->last_calib);


 if (FUNC_2(VAR_5) > 100) {
  FUNC_7(VAR_2);
  VAR_4->last_calib = FUNC_0();
 }

 FUNC_6(VAR_0, VAR_1);
}

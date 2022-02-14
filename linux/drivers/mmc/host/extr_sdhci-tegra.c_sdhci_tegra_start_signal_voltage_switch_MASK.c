
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_tegra {scalar_t__ pad_calib_required; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int dummy; } ;
struct mmc_ios {int signal_voltage; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sdhci_host* FUNC_0 (struct mmc_host*) ;
 struct sdhci_tegra* FUNC_1 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (struct mmc_host*,struct mmc_ios*) ;
 int FUNC_4 (struct sdhci_host*) ;
 int FUNC_5 (struct sdhci_host*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct mmc_host *VAR_2,
         struct mmc_ios *VAR_3)
{
 struct sdhci_host *VAR_4 = FUNC_0(VAR_2);
 struct sdhci_pltfm_host *VAR_5 = FUNC_2(VAR_4);
 struct sdhci_tegra *VAR_6 = FUNC_1(VAR_5);
 int VAR_7 = 0;

 if (VAR_3->signal_voltage == VAR_1) {
  VAR_7 = FUNC_5(VAR_4, VAR_3->signal_voltage, 1);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_7 = FUNC_3(VAR_2, VAR_3);
 } else if (VAR_3->signal_voltage == VAR_0) {
  VAR_7 = FUNC_3(VAR_2, VAR_3);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_7 = FUNC_5(VAR_4, VAR_3->signal_voltage, 1);
 }

 if (VAR_6->pad_calib_required)
  FUNC_4(VAR_4);

 return VAR_7;
}

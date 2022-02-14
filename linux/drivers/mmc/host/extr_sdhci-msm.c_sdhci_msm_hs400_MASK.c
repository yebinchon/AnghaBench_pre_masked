
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_msm_host {int calibration_done; scalar_t__ tuning_done; } ;
struct sdhci_host {scalar_t__ clock; int mmc; } ;
struct mmc_ios {scalar_t__ enhanced_strobe; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct sdhci_host*) ;
 struct sdhci_msm_host* FUNC_3 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_4 (struct sdhci_host*) ;

__attribute__((used)) static void FUNC_5(struct sdhci_host *VAR_1, struct mmc_ios *VAR_2)
{
 struct sdhci_pltfm_host *VAR_3 = FUNC_4(VAR_1);
 struct sdhci_msm_host *VAR_4 = FUNC_3(VAR_3);
 int VAR_5;

 if (VAR_1->clock > VAR_0 &&
     (VAR_4->tuning_done || VAR_2->enhanced_strobe) &&
     !VAR_4->calibration_done) {
  VAR_5 = FUNC_2(VAR_1);
  if (!VAR_5)
   VAR_4->calibration_done = 1;
  else
   FUNC_1("%s: Failed to calibrate DLL for hs400 mode (%d)\n",
          FUNC_0(VAR_1->mmc), VAR_5);
 }
}

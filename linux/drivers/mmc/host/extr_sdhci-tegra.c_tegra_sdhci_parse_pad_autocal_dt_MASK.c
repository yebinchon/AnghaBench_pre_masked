
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_tegra_autocal_offsets {scalar_t__ pull_down_1v8; scalar_t__ pull_down_hs400; scalar_t__ pull_up_1v8; scalar_t__ pull_up_hs400; scalar_t__ pull_down_sdr104; scalar_t__ pull_up_sdr104; scalar_t__ pull_down_1v8_timeout; scalar_t__ pull_up_1v8_timeout; scalar_t__ pull_down_3v3_timeout; scalar_t__ pull_up_3v3_timeout; scalar_t__ pull_down_3v3; scalar_t__ pull_up_3v3; } ;
struct sdhci_tegra {int * pinctrl_state_1v8_drv; int pinctrl_state_1v8; int * pinctrl_state_3v3_drv; int pinctrl_state_3v3; struct sdhci_tegra_autocal_offsets autocal_offsets; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {TYPE_1__* mmc; } ;
struct TYPE_2__ {int parent; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,scalar_t__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,int ) ;
 struct sdhci_tegra* FUNC_4 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_5 (struct sdhci_host*) ;

__attribute__((used)) static void FUNC_6(struct sdhci_host *VAR_0)
{
 struct sdhci_pltfm_host *VAR_1 = FUNC_5(VAR_0);
 struct sdhci_tegra *VAR_2 = FUNC_4(VAR_1);
 struct sdhci_tegra_autocal_offsets *VAR_3 =
   &VAR_2->autocal_offsets;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0->mmc->parent,
   "nvidia,pad-autocal-pull-up-offset-3v3",
   &VAR_3->pull_up_3v3);
 if (VAR_4)
  VAR_3->pull_up_3v3 = 0;

 VAR_4 = FUNC_1(VAR_0->mmc->parent,
   "nvidia,pad-autocal-pull-down-offset-3v3",
   &VAR_3->pull_down_3v3);
 if (VAR_4)
  VAR_3->pull_down_3v3 = 0;

 VAR_4 = FUNC_1(VAR_0->mmc->parent,
   "nvidia,pad-autocal-pull-up-offset-1v8",
   &VAR_3->pull_up_1v8);
 if (VAR_4)
  VAR_3->pull_up_1v8 = 0;

 VAR_4 = FUNC_1(VAR_0->mmc->parent,
   "nvidia,pad-autocal-pull-down-offset-1v8",
   &VAR_3->pull_down_1v8);
 if (VAR_4)
  VAR_3->pull_down_1v8 = 0;

 VAR_4 = FUNC_1(VAR_0->mmc->parent,
   "nvidia,pad-autocal-pull-up-offset-3v3-timeout",
   &VAR_3->pull_up_3v3_timeout);
 if (VAR_4) {
  if (!FUNC_0(VAR_2->pinctrl_state_3v3) &&
   (VAR_2->pinctrl_state_3v3_drv == ((void*)0)))
   FUNC_3("%s: Missing autocal timeout 3v3-pad drvs\n",
    FUNC_2(VAR_0->mmc));
  VAR_3->pull_up_3v3_timeout = 0;
 }

 VAR_4 = FUNC_1(VAR_0->mmc->parent,
   "nvidia,pad-autocal-pull-down-offset-3v3-timeout",
   &VAR_3->pull_down_3v3_timeout);
 if (VAR_4) {
  if (!FUNC_0(VAR_2->pinctrl_state_3v3) &&
   (VAR_2->pinctrl_state_3v3_drv == ((void*)0)))
   FUNC_3("%s: Missing autocal timeout 3v3-pad drvs\n",
    FUNC_2(VAR_0->mmc));
  VAR_3->pull_down_3v3_timeout = 0;
 }

 VAR_4 = FUNC_1(VAR_0->mmc->parent,
   "nvidia,pad-autocal-pull-up-offset-1v8-timeout",
   &VAR_3->pull_up_1v8_timeout);
 if (VAR_4) {
  if (!FUNC_0(VAR_2->pinctrl_state_1v8) &&
   (VAR_2->pinctrl_state_1v8_drv == ((void*)0)))
   FUNC_3("%s: Missing autocal timeout 1v8-pad drvs\n",
    FUNC_2(VAR_0->mmc));
  VAR_3->pull_up_1v8_timeout = 0;
 }

 VAR_4 = FUNC_1(VAR_0->mmc->parent,
   "nvidia,pad-autocal-pull-down-offset-1v8-timeout",
   &VAR_3->pull_down_1v8_timeout);
 if (VAR_4) {
  if (!FUNC_0(VAR_2->pinctrl_state_1v8) &&
   (VAR_2->pinctrl_state_1v8_drv == ((void*)0)))
   FUNC_3("%s: Missing autocal timeout 1v8-pad drvs\n",
    FUNC_2(VAR_0->mmc));
  VAR_3->pull_down_1v8_timeout = 0;
 }

 VAR_4 = FUNC_1(VAR_0->mmc->parent,
   "nvidia,pad-autocal-pull-up-offset-sdr104",
   &VAR_3->pull_up_sdr104);
 if (VAR_4)
  VAR_3->pull_up_sdr104 = VAR_3->pull_up_1v8;

 VAR_4 = FUNC_1(VAR_0->mmc->parent,
   "nvidia,pad-autocal-pull-down-offset-sdr104",
   &VAR_3->pull_down_sdr104);
 if (VAR_4)
  VAR_3->pull_down_sdr104 = VAR_3->pull_down_1v8;

 VAR_4 = FUNC_1(VAR_0->mmc->parent,
   "nvidia,pad-autocal-pull-up-offset-hs400",
   &VAR_3->pull_up_hs400);
 if (VAR_4)
  VAR_3->pull_up_hs400 = VAR_3->pull_up_1v8;

 VAR_4 = FUNC_1(VAR_0->mmc->parent,
   "nvidia,pad-autocal-pull-down-offset-hs400",
   &VAR_3->pull_down_hs400);
 if (VAR_4)
  VAR_3->pull_down_hs400 = VAR_3->pull_down_1v8;
}

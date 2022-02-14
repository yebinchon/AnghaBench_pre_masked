
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdhci_tegra_autocal_offsets {int pull_up_1v8_timeout; int pull_down_1v8_timeout; int pull_up_3v3_timeout; int pull_down_3v3_timeout; } ;
struct sdhci_tegra {struct pinctrl_state* pinctrl_state_3v3; int pinctrl_sdmmc; struct pinctrl_state* pinctrl_state_1v8; int pad_control_available; struct pinctrl_state* pinctrl_state_3v3_drv; struct pinctrl_state* pinctrl_state_1v8_drv; struct sdhci_tegra_autocal_offsets autocal_offsets; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int mmc; } ;
struct pinctrl_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct pinctrl_state*) ;
 struct sdhci_tegra* FUNC_3 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_4 (struct sdhci_host*) ;
 int FUNC_5 (struct sdhci_host*,int ) ;
 int FUNC_6 (struct sdhci_host*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct sdhci_host *VAR_3, int VAR_4,
       bool VAR_5)
{
 struct sdhci_pltfm_host *VAR_6 = FUNC_4(VAR_3);
 struct sdhci_tegra *VAR_7 = FUNC_3(VAR_6);
 struct sdhci_tegra_autocal_offsets *VAR_8 =
      &VAR_7->autocal_offsets;
 struct pinctrl_state *VAR_9 = ((void*)0);
 int VAR_10 = 0;
 u8 VAR_11 = 0, VAR_12 = 0;
 u32 VAR_13;

 if (!VAR_5) {

  if (VAR_4 == VAR_0) {
   if (VAR_7->pinctrl_state_1v8_drv) {
    VAR_9 =
     VAR_7->pinctrl_state_1v8_drv;
   } else {
    VAR_11 = VAR_8->pull_up_1v8_timeout;
    VAR_12 = VAR_8->pull_down_1v8_timeout;
   }
  } else {
   if (VAR_7->pinctrl_state_3v3_drv) {
    VAR_9 =
     VAR_7->pinctrl_state_3v3_drv;
   } else {
    VAR_11 = VAR_8->pull_up_3v3_timeout;
    VAR_12 = VAR_8->pull_down_3v3_timeout;
   }
  }

  if (VAR_9 != ((void*)0)) {
   VAR_10 = FUNC_2(VAR_7->pinctrl_sdmmc,
       VAR_9);
   if (VAR_10 < 0)
    FUNC_0(FUNC_1(VAR_3->mmc),
     "failed pads drvupdn, ret: %d\n", VAR_10);
  } else if ((VAR_11) || (VAR_12)) {
   VAR_13 = FUNC_5(VAR_3,
     VAR_2);
   VAR_13 &= ~VAR_1;
   VAR_13 |= (VAR_11 << 20) | (VAR_12 << 12);
   FUNC_6(VAR_3, VAR_13,
     VAR_2);
  }

 } else {

  if (!VAR_7->pad_control_available)
   return 0;

  if (VAR_4 == VAR_0) {
   VAR_10 = FUNC_2(VAR_7->pinctrl_sdmmc,
      VAR_7->pinctrl_state_1v8);
   if (VAR_10 < 0)
    FUNC_0(FUNC_1(VAR_3->mmc),
     "setting 1.8V failed, ret: %d\n", VAR_10);
  } else {
   VAR_10 = FUNC_2(VAR_7->pinctrl_sdmmc,
      VAR_7->pinctrl_state_3v3);
   if (VAR_10 < 0)
    FUNC_0(FUNC_1(VAR_3->mmc),
     "setting 3.3V failed, ret: %d\n", VAR_10);
  }
 }

 return VAR_10;
}

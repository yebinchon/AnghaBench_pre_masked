
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sdhci_pltfm_host {int clock; } ;
struct sdhci_host {TYPE_1__* mmc; int quirks2; int quirks; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int pm_caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (struct device*,char*) ;
 scalar_t__ FUNC_2 (struct device*,char*,int*) ;
 struct sdhci_host* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*) ;
 struct sdhci_pltfm_host* FUNC_5 (struct sdhci_host*) ;
 scalar_t__ FUNC_6 (struct device*) ;

void FUNC_7(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct sdhci_host *VAR_9 = FUNC_3(VAR_7);
 struct sdhci_pltfm_host *VAR_10 = FUNC_5(VAR_9);
 u32 VAR_11;

 if (FUNC_0(VAR_8, "sdhci,auto-cmd12"))
  VAR_9->quirks |= VAR_6;

 if (FUNC_0(VAR_8, "sdhci,1-bit-only") ||
     (FUNC_2(VAR_8, "bus-width", &VAR_11) == 0 &&
     VAR_11 == 1))
  VAR_9->quirks |= VAR_4;

 if (FUNC_6(VAR_8))
  VAR_9->quirks |= VAR_5;

 if (FUNC_0(VAR_8, "broken-cd"))
  VAR_9->quirks |= VAR_3;

 if (FUNC_0(VAR_8, "no-1-8-v"))
  VAR_9->quirks2 |= VAR_2;

 FUNC_4(VAR_7);

 FUNC_2(VAR_8, "clock-frequency", &VAR_10->clock);

 if (FUNC_0(VAR_8, "keep-power-in-suspend"))
  VAR_9->mmc->pm_caps |= VAR_0;

 if (FUNC_1(VAR_8, "wakeup-source") ||
     FUNC_1(VAR_8, "enable-sdio-wakeup"))
  VAR_9->mmc->pm_caps |= VAR_1;
}

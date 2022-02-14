
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_pltfm_data {int dummy; } ;
struct sdhci_host {TYPE_1__* mmc; int quirks; int quirks2; } ;
struct sdhci_at91_priv {int restore_needed; struct sdhci_host* hclock; struct sdhci_host* mainck; struct sdhci_host* gck; } ;
struct platform_device {int dev; } ;
struct of_device_id {struct sdhci_pltfm_data* data; } ;
struct TYPE_4__ {int caps; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sdhci_host*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sdhci_host*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (int *,char*) ;
 void* FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 struct of_device_id* FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct sdhci_host*) ;
 int VAR_5 ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct sdhci_host*) ;
 int FUNC_21 (struct platform_device*) ;
 int FUNC_22 (struct platform_device*) ;
 struct sdhci_host* FUNC_23 (struct platform_device*,struct sdhci_pltfm_data const*,int) ;
 struct sdhci_at91_priv* FUNC_24 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_25 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_6)
{
 const struct of_device_id *VAR_7;
 const struct sdhci_pltfm_data *VAR_8;
 struct sdhci_host *VAR_9;
 struct sdhci_pltfm_host *VAR_10;
 struct sdhci_at91_priv *VAR_11;
 int VAR_12;

 VAR_7 = FUNC_8(VAR_5, &VAR_6->dev);
 if (!VAR_7)
  return -VAR_0;
 VAR_8 = VAR_7->data;

 VAR_9 = FUNC_23(VAR_6, VAR_8, sizeof(*VAR_11));
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 VAR_10 = FUNC_25(VAR_9);
 VAR_11 = FUNC_24(VAR_10);

 VAR_11->mainck = FUNC_4(&VAR_6->dev, "baseclk");
 if (FUNC_0(VAR_11->mainck)) {
  FUNC_3(&VAR_6->dev, "failed to get baseclk\n");
  return FUNC_1(VAR_11->mainck);
 }

 VAR_11->hclock = FUNC_4(&VAR_6->dev, "hclock");
 if (FUNC_0(VAR_11->hclock)) {
  FUNC_3(&VAR_6->dev, "failed to get hclock\n");
  return FUNC_1(VAR_11->hclock);
 }

 VAR_11->gck = FUNC_4(&VAR_6->dev, "multclk");
 if (FUNC_0(VAR_11->gck)) {
  FUNC_3(&VAR_6->dev, "failed to get multclk\n");
  return FUNC_1(VAR_11->gck);
 }

 VAR_12 = FUNC_19(&VAR_6->dev);
 if (VAR_12)
  goto sdhci_pltfm_free;

 VAR_11->restore_needed = 0;

 VAR_12 = FUNC_7(VAR_9->mmc);
 if (VAR_12)
  goto clocks_disable_unprepare;

 FUNC_21(VAR_6);

 FUNC_11(&VAR_6->dev);
 FUNC_14(&VAR_6->dev);
 FUNC_10(&VAR_6->dev);
 FUNC_15(&VAR_6->dev, 50);
 FUNC_17(&VAR_6->dev);


 VAR_9->quirks2 = VAR_3;

 VAR_12 = FUNC_18(VAR_9);
 if (VAR_12)
  goto pm_runtime_disable;
 if (FUNC_5(VAR_9->mmc) &&
     FUNC_6(VAR_9->mmc) < 0) {
  VAR_9->mmc->caps |= VAR_1;
  VAR_9->quirks &= ~VAR_4;
 }
 if (VAR_9->mmc->caps & VAR_2)
  FUNC_20(VAR_9);

 FUNC_12(&VAR_6->dev);

 return 0;

pm_runtime_disable:
 FUNC_9(&VAR_6->dev);
 FUNC_16(&VAR_6->dev);
 FUNC_13(&VAR_6->dev);
clocks_disable_unprepare:
 FUNC_2(VAR_11->gck);
 FUNC_2(VAR_11->mainck);
 FUNC_2(VAR_11->hclock);
sdhci_pltfm_free:
 FUNC_22(VAR_6);
 return VAR_12;
}

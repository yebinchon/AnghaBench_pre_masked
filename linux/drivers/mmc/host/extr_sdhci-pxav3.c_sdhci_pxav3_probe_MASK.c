
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_pxa_platdata {int flags; int quirks; int quirks2; int host_caps; int host_caps2; int pm_caps; } ;
struct sdhci_pxa {struct sdhci_host* clk_core; struct sdhci_host* clk_io; } ;
struct sdhci_pltfm_host {struct sdhci_host* clk; } ;
struct sdhci_host {int quirks; int quirks2; TYPE_1__* mmc; } ;
struct device {struct sdhci_pxa_platdata* platform_data; struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int caps; int caps2; int pm_caps; } ;


 scalar_t__ FUNC_0 (struct sdhci_host*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sdhci_host*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct platform_device*,struct sdhci_host*) ;
 int FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (struct sdhci_host*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,int) ;
 void* FUNC_7 (struct device*,char*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (struct device_node*,char*) ;
 struct of_device_id* FUNC_12 (int ,struct device*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct device*) ;
 int FUNC_17 (struct device*) ;
 int FUNC_18 (struct device*) ;
 int FUNC_19 (struct device*) ;
 int FUNC_20 (struct device*,int ) ;
 int FUNC_21 (struct device*) ;
 int FUNC_22 (struct device*,int) ;
 struct sdhci_pxa_platdata* FUNC_23 (struct device*) ;
 int FUNC_24 (struct sdhci_host*) ;
 int FUNC_25 (struct platform_device*) ;
 int FUNC_26 (struct platform_device*) ;
 struct sdhci_host* FUNC_27 (struct platform_device*,int *,int) ;
 struct sdhci_pxa* FUNC_28 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_29 (struct sdhci_host*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_30(struct platform_device *VAR_9)
{
 struct sdhci_pltfm_host *VAR_10;
 struct sdhci_pxa_platdata *VAR_11 = VAR_9->dev.platform_data;
 struct device *VAR_12 = &VAR_9->dev;
 struct device_node *VAR_13 = VAR_9->dev.of_node;
 struct sdhci_host *VAR_14 = ((void*)0);
 struct sdhci_pxa *VAR_15 = ((void*)0);
 const struct of_device_id *VAR_16;
 int VAR_17;

 VAR_14 = FUNC_27(VAR_9, &VAR_8, sizeof(*VAR_15));
 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);

 VAR_10 = FUNC_29(VAR_14);
 VAR_15 = FUNC_28(VAR_10);

 VAR_15->clk_io = FUNC_7(VAR_12, "io");
 if (FUNC_0(VAR_15->clk_io))
  VAR_15->clk_io = FUNC_7(VAR_12, ((void*)0));
 if (FUNC_0(VAR_15->clk_io)) {
  FUNC_5(VAR_12, "failed to get io clock\n");
  VAR_17 = FUNC_1(VAR_15->clk_io);
  goto err_clk_get;
 }
 VAR_10->clk = VAR_15->clk_io;
 FUNC_4(VAR_15->clk_io);

 VAR_15->clk_core = FUNC_7(VAR_12, "core");
 if (!FUNC_0(VAR_15->clk_core))
  FUNC_4(VAR_15->clk_core);


 VAR_14->mmc->caps |= VAR_0;

 if (FUNC_11(VAR_13, "marvell,armada-380-sdhci")) {
  VAR_17 = FUNC_2(VAR_9, VAR_14);
  if (VAR_17 < 0)
   goto err_mbus_win;
  VAR_17 = FUNC_9(VAR_9, FUNC_10());
  if (VAR_17 < 0)
   goto err_mbus_win;
 }

 VAR_16 = FUNC_12(FUNC_13(VAR_7), &VAR_9->dev);
 if (VAR_16) {
  VAR_17 = FUNC_8(VAR_14->mmc);
  if (VAR_17)
   goto err_of_parse;
  FUNC_25(VAR_9);
  VAR_11 = FUNC_23(VAR_12);
  VAR_9->dev.platform_data = VAR_11;
 } else if (VAR_11) {

  if (VAR_11->flags & VAR_5)
   VAR_14->mmc->caps |= VAR_2;


  if (VAR_11->flags & VAR_6)
   VAR_14->mmc->caps |= VAR_1;

  if (VAR_11->quirks)
   VAR_14->quirks |= VAR_11->quirks;
  if (VAR_11->quirks2)
   VAR_14->quirks2 |= VAR_11->quirks2;
  if (VAR_11->host_caps)
   VAR_14->mmc->caps |= VAR_11->host_caps;
  if (VAR_11->host_caps2)
   VAR_14->mmc->caps2 |= VAR_11->host_caps2;
  if (VAR_11->pm_caps)
   VAR_14->mmc->pm_caps |= VAR_11->pm_caps;
 }

 FUNC_16(&VAR_9->dev);
 FUNC_19(&VAR_9->dev);
 FUNC_20(&VAR_9->dev, VAR_4);
 FUNC_21(&VAR_9->dev);
 FUNC_15(&VAR_9->dev);
 FUNC_22(&VAR_9->dev, 1);

 VAR_17 = FUNC_24(VAR_14);
 if (VAR_17)
  goto err_add_host;

 if (VAR_14->mmc->pm_caps & VAR_3)
  FUNC_6(&VAR_9->dev, 1);

 FUNC_17(&VAR_9->dev);

 return 0;

err_add_host:
 FUNC_14(&VAR_9->dev);
 FUNC_18(&VAR_9->dev);
err_of_parse:
err_mbus_win:
 FUNC_3(VAR_15->clk_io);
 FUNC_3(VAR_15->clk_core);
err_clk_get:
 FUNC_26(VAR_9);
 return VAR_17;
}

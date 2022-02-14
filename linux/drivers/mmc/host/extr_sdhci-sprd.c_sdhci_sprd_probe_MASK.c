
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;


struct sdhci_sprd_host {int version; struct sdhci_host* clk_sdio; struct sdhci_host* clk_enable; struct sdhci_host* clk_2x_enable; int flags; scalar_t__ base_rate; struct sdhci_host* pins_default; struct sdhci_host* pinctrl; struct sdhci_host* pins_uhs; } ;
struct TYPE_17__ {int start_signal_voltage_switch; int hs400_enhanced_strobe; int request; } ;
struct sdhci_host {int version; int caps1; int flags; void* caps; TYPE_13__* mmc; TYPE_1__ mmc_host_ops; int dma_mask; } ;
struct TYPE_18__ {int of_node; int * dma_mask; } ;
struct platform_device {TYPE_2__ dev; } ;
struct clk {int version; int caps1; int flags; void* caps; TYPE_13__* mmc; TYPE_1__ mmc_host_ops; int dma_mask; } ;
struct TYPE_16__ {int caps; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct sdhci_host*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct sdhci_host*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct sdhci_sprd_host* FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (struct sdhci_host*) ;
 int FUNC_5 (struct sdhci_host*) ;
 scalar_t__ FUNC_6 (struct sdhci_host*) ;
 int FUNC_7 (struct sdhci_host*) ;
 struct sdhci_host* FUNC_8 (TYPE_2__*,char*) ;
 struct sdhci_host* FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_13__*) ;
 void* FUNC_11 (struct sdhci_host*,char*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*,int) ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (TYPE_2__*,int) ;
 int FUNC_23 (struct sdhci_host*) ;
 int FUNC_24 (struct sdhci_host*) ;
 int FUNC_25 (struct platform_device*) ;
 struct sdhci_host* FUNC_26 (struct platform_device*,int *,int) ;
 void* FUNC_27 (struct sdhci_host*,int ) ;
 int FUNC_28 (struct sdhci_host*,int ) ;
 int FUNC_29 (struct sdhci_host*) ;
 int VAR_13 ;
 int FUNC_30 (struct sdhci_host*) ;
 int VAR_14 ;
 int FUNC_31 (struct sdhci_sprd_host*,int ) ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_32(struct platform_device *VAR_17)
{
 struct sdhci_host *VAR_18;
 struct sdhci_sprd_host *VAR_19;
 struct clk *VAR_20;
 int VAR_21 = 0;

 VAR_18 = FUNC_26(VAR_17, &VAR_14, sizeof(*VAR_19));
 if (FUNC_1(VAR_18))
  return FUNC_2(VAR_18);

 VAR_18->dma_mask = FUNC_0(64);
 VAR_17->dev.dma_mask = &VAR_18->dma_mask;
 VAR_18->mmc_host_ops.request = VAR_15;
 VAR_18->mmc_host_ops.hs400_enhanced_strobe =
  VAR_13;






 VAR_18->mmc_host_ops.start_signal_voltage_switch =
  VAR_16;

 VAR_18->mmc->caps = VAR_3 | VAR_2 |
  VAR_1 | VAR_0;
 VAR_21 = FUNC_10(VAR_18->mmc);
 if (VAR_21)
  goto pltfm_free;

 VAR_19 = FUNC_3(VAR_18);
 FUNC_31(VAR_19, VAR_17->dev.of_node);

 VAR_19->pinctrl = FUNC_9(&VAR_17->dev);
 if (!FUNC_1(VAR_19->pinctrl)) {
  VAR_19->pins_uhs =
   FUNC_11(VAR_19->pinctrl, "state_uhs");
  if (FUNC_1(VAR_19->pins_uhs)) {
   VAR_21 = FUNC_2(VAR_19->pins_uhs);
   goto pltfm_free;
  }

  VAR_19->pins_default =
   FUNC_11(VAR_19->pinctrl, "default");
  if (FUNC_1(VAR_19->pins_default)) {
   VAR_21 = FUNC_2(VAR_19->pins_default);
   goto pltfm_free;
  }
 }

 VAR_20 = FUNC_8(&VAR_17->dev, "sdio");
 if (FUNC_1(VAR_20)) {
  VAR_21 = FUNC_2(VAR_20);
  goto pltfm_free;
 }
 VAR_19->clk_sdio = VAR_20;
 VAR_19->base_rate = FUNC_6(VAR_19->clk_sdio);
 if (!VAR_19->base_rate)
  VAR_19->base_rate = VAR_7;

 VAR_20 = FUNC_8(&VAR_17->dev, "enable");
 if (FUNC_1(VAR_20)) {
  VAR_21 = FUNC_2(VAR_20);
  goto pltfm_free;
 }
 VAR_19->clk_enable = VAR_20;

 VAR_20 = FUNC_8(&VAR_17->dev, "2x_enable");
 if (!FUNC_1(VAR_20))
  VAR_19->clk_2x_enable = VAR_20;

 VAR_21 = FUNC_7(VAR_19->clk_sdio);
 if (VAR_21)
  goto pltfm_free;

 VAR_21 = FUNC_7(VAR_19->clk_enable);
 if (VAR_21)
  goto clk_disable;

 VAR_21 = FUNC_7(VAR_19->clk_2x_enable);
 if (VAR_21)
  goto clk_disable2;

 FUNC_30(VAR_18);
 VAR_18->version = FUNC_28(VAR_18, VAR_6);
 VAR_19->version = ((VAR_18->version & VAR_11) >>
          VAR_12);

 FUNC_14(&VAR_17->dev);
 FUNC_18(&VAR_17->dev);
 FUNC_13(&VAR_17->dev);
 FUNC_19(&VAR_17->dev, 50);
 FUNC_21(&VAR_17->dev);
 FUNC_22(&VAR_17->dev, 1);

 FUNC_24(VAR_18);






 VAR_18->caps = FUNC_27(VAR_18, VAR_4);
 VAR_18->caps1 = FUNC_27(VAR_18, VAR_5);
 VAR_18->caps1 &= ~(VAR_10 | VAR_9 |
    VAR_8);

 VAR_21 = FUNC_29(VAR_18);
 if (VAR_21)
  goto pm_runtime_disable;

 VAR_19->flags = VAR_18->flags;

 VAR_21 = FUNC_4(VAR_18);
 if (VAR_21)
  goto err_cleanup_host;

 FUNC_15(&VAR_17->dev);
 FUNC_16(&VAR_17->dev);

 return 0;

err_cleanup_host:
 FUNC_23(VAR_18);

pm_runtime_disable:
 FUNC_17(&VAR_17->dev);
 FUNC_12(&VAR_17->dev);
 FUNC_20(&VAR_17->dev);

 FUNC_5(VAR_19->clk_2x_enable);

clk_disable2:
 FUNC_5(VAR_19->clk_enable);

clk_disable:
 FUNC_5(VAR_19->clk_sdio);

pltfm_free:
 FUNC_25(VAR_17);
 return VAR_21;
}

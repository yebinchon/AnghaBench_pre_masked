
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sdhci_tegra_soc_data {int nvquirks; int pdata; } ;
struct sdhci_tegra {int ddr_signaling; int pad_calib_required; int pad_control_available; struct sdhci_host* rst; struct sdhci_host* power_gpio; struct sdhci_tegra_soc_data const* soc_data; } ;
struct sdhci_pltfm_host {struct sdhci_host* clk; } ;
struct TYPE_6__ {int execute_tuning; int hs400_enhanced_strobe; int request; int start_signal_voltage_switch; } ;
struct sdhci_host {TYPE_3__* mmc; TYPE_2__ mmc_host_ops; TYPE_1__* ops; } ;
struct platform_device {int dev; } ;
struct of_device_id {struct sdhci_tegra_soc_data* data; } ;
struct clk {TYPE_3__* mmc; TYPE_2__ mmc_host_ops; TYPE_1__* ops; } ;
struct TYPE_7__ {int caps; } ;
struct TYPE_5__ {int platform_execute_tuning; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sdhci_host*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (int *,char*,int) ;
 struct sdhci_host* FUNC_5 (int ,int *) ;
 struct sdhci_host* FUNC_6 (int *,char*,int ) ;
 struct sdhci_host* FUNC_7 (int *,char*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 struct of_device_id* FUNC_10 (int ,int *) ;
 int FUNC_11 (struct sdhci_host*) ;
 int FUNC_12 (struct sdhci_host*) ;
 int FUNC_13 (struct platform_device*) ;
 struct sdhci_host* FUNC_14 (struct platform_device*,int ,int) ;
 struct sdhci_tegra* FUNC_15 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_16 (struct sdhci_host*) ;
 int FUNC_17 (struct sdhci_host*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_18 (int *,struct sdhci_tegra*) ;
 int FUNC_19 (struct sdhci_host*) ;
 int VAR_11 ;
 int FUNC_20 (int,int) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_12)
{
 const struct of_device_id *VAR_13;
 const struct sdhci_tegra_soc_data *VAR_14;
 struct sdhci_host *VAR_15;
 struct sdhci_pltfm_host *VAR_16;
 struct sdhci_tegra *VAR_17;
 struct clk *VAR_18;
 int VAR_19;

 VAR_13 = FUNC_10(VAR_7, &VAR_12->dev);
 if (!VAR_13)
  return -VAR_0;
 VAR_14 = VAR_13->data;

 VAR_15 = FUNC_14(VAR_12, VAR_14->pdata, sizeof(*VAR_17));
 if (FUNC_0(VAR_15))
  return FUNC_1(VAR_15);
 VAR_16 = FUNC_16(VAR_15);

 VAR_17 = FUNC_15(VAR_16);
 VAR_17->ddr_signaling = 0;
 VAR_17->pad_calib_required = 0;
 VAR_17->pad_control_available = 0;
 VAR_17->soc_data = VAR_14;

 if (VAR_14->nvquirks & VAR_6) {
  VAR_19 = FUNC_18(&VAR_12->dev, VAR_17);
  if (VAR_19 == 0)
   VAR_15->mmc_host_ops.start_signal_voltage_switch =
    VAR_8;
 }


 if (VAR_14->nvquirks & VAR_5)
  VAR_15->mmc_host_ops.request = VAR_11;

 VAR_15->mmc_host_ops.hs400_enhanced_strobe =
   VAR_10;

 if (!VAR_15->ops->platform_execute_tuning)
  VAR_15->mmc_host_ops.execute_tuning =
    VAR_9;

 VAR_19 = FUNC_9(VAR_15->mmc);
 if (VAR_19)
  goto err_parse_dt;

 if (VAR_17->soc_data->nvquirks & VAR_4)
  VAR_15->mmc->caps |= VAR_3;

 FUNC_19(VAR_15);

 VAR_17->power_gpio = FUNC_6(&VAR_12->dev, "power",
        VAR_2);
 if (FUNC_0(VAR_17->power_gpio)) {
  VAR_19 = FUNC_1(VAR_17->power_gpio);
  goto err_power_req;
 }

 VAR_18 = FUNC_5(FUNC_8(VAR_15->mmc), ((void*)0));
 if (FUNC_0(VAR_18)) {
  VAR_19 = FUNC_1(VAR_18);

  if (VAR_19 != -VAR_1)
   FUNC_4(&VAR_12->dev, "failed to get clock: %d\n", VAR_19);

  goto err_clk_get;
 }
 FUNC_3(VAR_18);
 VAR_16->clk = VAR_18;

 VAR_17->rst = FUNC_7(&VAR_12->dev,
          "sdhci");
 if (FUNC_0(VAR_17->rst)) {
  VAR_19 = FUNC_1(VAR_17->rst);
  FUNC_4(&VAR_12->dev, "failed to get reset control: %d\n", VAR_19);
  goto err_rst_get;
 }

 VAR_19 = FUNC_11(VAR_17->rst);
 if (VAR_19)
  goto err_rst_get;

 FUNC_20(2000, 4000);

 VAR_19 = FUNC_12(VAR_17->rst);
 if (VAR_19)
  goto err_rst_get;

 FUNC_20(2000, 4000);

 VAR_19 = FUNC_17(VAR_15);
 if (VAR_19)
  goto err_add_host;

 return 0;

err_add_host:
 FUNC_11(VAR_17->rst);
err_rst_get:
 FUNC_2(VAR_16->clk);
err_clk_get:
err_power_req:
err_parse_dt:
 FUNC_13(VAR_12);
 return VAR_19;
}

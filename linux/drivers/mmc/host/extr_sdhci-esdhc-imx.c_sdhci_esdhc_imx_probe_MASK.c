
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sdhci_pltfm_host {struct sdhci_host* clk; int clock; } ;
struct TYPE_7__ {int hs400_enhanced_strobe; int execute_tuning; } ;
struct sdhci_host {int tuning_delay; TYPE_4__* mmc; scalar_t__ ioaddr; TYPE_2__ mmc_host_ops; int quirks2; int quirks; } ;
struct pltfm_imx_data {int pm_qos_req; struct esdhc_soc_data* socdata; struct sdhci_host* clk_per; struct sdhci_host* clk_ipg; struct sdhci_host* clk_ahb; struct sdhci_host* pins_default; struct sdhci_host* pinctrl; } ;
struct platform_device {int dev; TYPE_1__* id_entry; } ;
struct of_device_id {struct esdhc_soc_data* data; } ;
struct esdhc_soc_data {int flags; } ;
struct cqhci_host {int * ops; scalar_t__ mmio; } ;
struct TYPE_9__ {int caps; int caps2; } ;
struct TYPE_8__ {int platform_execute_tuning; } ;
struct TYPE_6__ {scalar_t__ driver_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct sdhci_host*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (struct sdhci_host*) ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (struct sdhci_host*) ;
 int FUNC_5 (struct cqhci_host*,TYPE_4__*,int) ;
 int FUNC_6 (int ,char*) ;
 void* FUNC_7 (int *,char*) ;
 struct cqhci_host* FUNC_8 (int *,int,int ) ;
 struct sdhci_host* FUNC_9 (int *) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ FUNC_10 (struct pltfm_imx_data*) ;
 int VAR_27 ;
 int FUNC_11 (TYPE_4__*) ;
 struct of_device_id* FUNC_12 (int ,int *) ;
 struct sdhci_host* FUNC_13 (struct sdhci_host*,int ) ;
 int FUNC_14 (int *,int ,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (struct sdhci_host*) ;
 int FUNC_22 (struct sdhci_host*) ;
 int VAR_28 ;
 int FUNC_23 (struct platform_device*,struct sdhci_host*,struct pltfm_imx_data*) ;
 int FUNC_24 (struct platform_device*,struct sdhci_host*,struct pltfm_imx_data*) ;
 TYPE_3__ VAR_29 ;
 int FUNC_25 (struct platform_device*) ;
 struct sdhci_host* FUNC_26 (struct platform_device*,int *,int) ;
 struct pltfm_imx_data* FUNC_27 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_28 (struct sdhci_host*) ;
 int VAR_30 ;
 int FUNC_29 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_30(struct platform_device *VAR_31)
{
 const struct of_device_id *VAR_32 =
   FUNC_12(VAR_27, &VAR_31->dev);
 struct sdhci_pltfm_host *VAR_33;
 struct sdhci_host *VAR_34;
 struct cqhci_host *VAR_35;
 int VAR_36;
 struct pltfm_imx_data *VAR_37;

 VAR_34 = FUNC_26(VAR_31, &VAR_28,
    sizeof(*VAR_37));
 if (FUNC_0(VAR_34))
  return FUNC_1(VAR_34);

 VAR_33 = FUNC_28(VAR_34);

 VAR_37 = FUNC_27(VAR_33);

 VAR_37->socdata = VAR_32 ? VAR_32->data : (struct esdhc_soc_data *)
        VAR_31->id_entry->driver_data;

 if (VAR_37->socdata->flags & VAR_8)
  FUNC_14(&VAR_37->pm_qos_req,
   VAR_18, 0);

 VAR_37->clk_ipg = FUNC_7(&VAR_31->dev, "ipg");
 if (FUNC_0(VAR_37->clk_ipg)) {
  VAR_36 = FUNC_1(VAR_37->clk_ipg);
  goto free_sdhci;
 }

 VAR_37->clk_ahb = FUNC_7(&VAR_31->dev, "ahb");
 if (FUNC_0(VAR_37->clk_ahb)) {
  VAR_36 = FUNC_1(VAR_37->clk_ahb);
  goto free_sdhci;
 }

 VAR_37->clk_per = FUNC_7(&VAR_31->dev, "per");
 if (FUNC_0(VAR_37->clk_per)) {
  VAR_36 = FUNC_1(VAR_37->clk_per);
  goto free_sdhci;
 }

 VAR_33->clk = VAR_37->clk_per;
 VAR_33->clock = FUNC_3(VAR_33->clk);
 VAR_36 = FUNC_4(VAR_37->clk_per);
 if (VAR_36)
  goto free_sdhci;
 VAR_36 = FUNC_4(VAR_37->clk_ipg);
 if (VAR_36)
  goto disable_per_clk;
 VAR_36 = FUNC_4(VAR_37->clk_ahb);
 if (VAR_36)
  goto disable_ipg_clk;

 VAR_37->pinctrl = FUNC_9(&VAR_31->dev);
 if (FUNC_0(VAR_37->pinctrl)) {
  VAR_36 = FUNC_1(VAR_37->pinctrl);
  goto disable_ahb_clk;
 }

 VAR_37->pins_default = FUNC_13(VAR_37->pinctrl,
      VAR_17);
 if (FUNC_0(VAR_37->pins_default))
  FUNC_6(FUNC_11(VAR_34->mmc), "could not get default state\n");

 if (FUNC_10(VAR_37)) {
  VAR_34->quirks2 |= VAR_22;
  VAR_34->mmc->caps |= VAR_15 | VAR_16;
  if (!(VAR_37->socdata->flags & VAR_4))
   VAR_34->quirks2 |= VAR_20;


  FUNC_29(0x0, VAR_34->ioaddr + VAR_9);
  FUNC_29(0x0, VAR_34->ioaddr + VAR_19);
  FUNC_29(0x0, VAR_34->ioaddr + VAR_10);





  VAR_34->mmc_host_ops.execute_tuning = VAR_30;
 }

 if (VAR_37->socdata->flags & VAR_7)
  VAR_29.platform_execute_tuning =
     VAR_25;

 if (VAR_37->socdata->flags & VAR_3)
  VAR_34->quirks |= VAR_23;

 if (VAR_37->socdata->flags & VAR_5)
  VAR_34->quirks2 |= VAR_21;

 if (VAR_37->socdata->flags & VAR_6) {
  VAR_34->mmc->caps2 |= VAR_14;
  VAR_34->mmc_host_ops.hs400_enhanced_strobe =
     VAR_26;
 }

 if (VAR_37->socdata->flags & VAR_2) {
  VAR_34->mmc->caps2 |= VAR_12 | VAR_13;
  VAR_35 = FUNC_8(&VAR_31->dev, sizeof(*VAR_35), VAR_11);
  if (!VAR_35) {
   VAR_36 = -VAR_0;
   goto disable_ahb_clk;
  }

  VAR_35->mmio = VAR_34->ioaddr + VAR_1;
  VAR_35->ops = &VAR_24;

  VAR_36 = FUNC_5(VAR_35, VAR_34->mmc, 0);
  if (VAR_36)
   goto disable_ahb_clk;
 }

 if (VAR_32)
  VAR_36 = FUNC_23(VAR_31, VAR_34, VAR_37);
 else
  VAR_36 = FUNC_24(VAR_31, VAR_34, VAR_37);
 if (VAR_36)
  goto disable_ahb_clk;

 VAR_34->tuning_delay = 1;

 FUNC_22(VAR_34);

 VAR_36 = FUNC_21(VAR_34);
 if (VAR_36)
  goto disable_ahb_clk;

 FUNC_17(&VAR_31->dev);
 FUNC_18(&VAR_31->dev, 50);
 FUNC_19(&VAR_31->dev);
 FUNC_20(&VAR_31->dev, 1);
 FUNC_16(&VAR_31->dev);

 return 0;

disable_ahb_clk:
 FUNC_2(VAR_37->clk_ahb);
disable_ipg_clk:
 FUNC_2(VAR_37->clk_ipg);
disable_per_clk:
 FUNC_2(VAR_37->clk_per);
free_sdhci:
 if (VAR_37->socdata->flags & VAR_8)
  FUNC_15(&VAR_37->pm_qos_req);
 FUNC_25(VAR_31);
 return VAR_36;
}

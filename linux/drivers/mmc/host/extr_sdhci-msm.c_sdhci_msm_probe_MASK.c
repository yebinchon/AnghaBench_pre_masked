
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_msm_variant_info {struct sdhci_msm_offset* offset; int var_ops; int restore_dll_config; int mci_removed; } ;
struct sdhci_msm_offset {int core_pwrctl_mask; scalar_t__ core_vendor_spec_capabilities0; int core_mci_version; int core_hc_mode; scalar_t__ core_vendor_spec; } ;
struct sdhci_msm_host {int use_14lpp_dll_reset; int use_cdclp533; int pwr_irq; struct sdhci_host* bus_clk; TYPE_2__* bulk_clks; int mci_removed; struct sdhci_host* core_mem; struct sdhci_host* xo_clk; int saved_tuning_phase; struct sdhci_msm_offset* offset; int var_ops; int restore_dll_config; struct platform_device* pdev; int mmc; } ;
struct TYPE_5__ {int execute_tuning; } ;
struct sdhci_host {TYPE_1__ mmc_host_ops; scalar_t__ ioaddr; int mmc; scalar_t__ sdma_boundary; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct clk {TYPE_1__ mmc_host_ops; scalar_t__ ioaddr; int mmc; scalar_t__ sdma_boundary; } ;
struct TYPE_6__ {struct sdhci_host* clk; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct sdhci_host*) ;
 int VAR_11 ;
 int FUNC_2 (struct sdhci_host*) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (struct sdhci_host*) ;
 int FUNC_6 (struct sdhci_host*) ;
 int FUNC_7 (struct sdhci_host*,int ) ;
 int FUNC_8 (int *,char*,int,int,...) ;
 int FUNC_9 (int *,char*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,...) ;
 void* FUNC_12 (int *,char*) ;
 struct sdhci_host* FUNC_13 (int *,struct resource*) ;
 int FUNC_14 (int *,int,int *,int ,int ,int ,struct sdhci_host*) ;
 int FUNC_15 () ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct sdhci_msm_host*,struct sdhci_host*,int ) ;
 int FUNC_18 (struct sdhci_msm_host*,int,struct sdhci_host*,int ) ;
 struct sdhci_msm_variant_info* FUNC_19 (int *) ;
 int FUNC_20 (struct platform_device*,char*) ;
 struct resource* FUNC_21 (struct platform_device*,int ,int) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *,int ) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (scalar_t__) ;
 int FUNC_33 (scalar_t__) ;
 int FUNC_34 (struct sdhci_host*) ;
 int FUNC_35 (struct platform_device*) ;
 int VAR_18 ;
 int FUNC_36 (struct sdhci_host*,int ) ;
 int FUNC_37 (struct sdhci_msm_host*) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_38 (struct sdhci_msm_host*) ;
 int FUNC_39 (struct platform_device*) ;
 struct sdhci_host* FUNC_40 (struct platform_device*,int *,int) ;
 struct sdhci_msm_host* FUNC_41 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_42 (struct sdhci_host*) ;
 int FUNC_43 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_44(struct platform_device *VAR_21)
{
 struct sdhci_host *VAR_22;
 struct sdhci_pltfm_host *VAR_23;
 struct sdhci_msm_host *VAR_24;
 struct resource *VAR_25;
 struct clk *VAR_26;
 int VAR_27;
 u16 VAR_28, VAR_29;
 u32 VAR_30, VAR_31;
 u8 VAR_32;
 const struct sdhci_msm_offset *VAR_33;
 const struct sdhci_msm_variant_info *VAR_34;

 VAR_22 = FUNC_40(VAR_21, &VAR_19, sizeof(*VAR_24));
 if (FUNC_1(VAR_22))
  return FUNC_2(VAR_22);

 VAR_22->sdma_boundary = 0;
 VAR_23 = FUNC_42(VAR_22);
 VAR_24 = FUNC_41(VAR_23);
 VAR_24->mmc = VAR_22->mmc;
 VAR_24->pdev = VAR_21;

 VAR_27 = FUNC_16(VAR_22->mmc);
 if (VAR_27)
  goto pltfm_free;





 VAR_34 = FUNC_19(&VAR_21->dev);

 VAR_24->mci_removed = VAR_34->mci_removed;
 VAR_24->restore_dll_config = VAR_34->restore_dll_config;
 VAR_24->var_ops = VAR_34->var_ops;
 VAR_24->offset = VAR_34->offset;

 VAR_33 = VAR_24->offset;

 FUNC_35(VAR_21);

 VAR_24->saved_tuning_phase = VAR_8;


 VAR_24->bus_clk = FUNC_12(&VAR_21->dev, "bus");
 if (!FUNC_1(VAR_24->bus_clk)) {

  VAR_27 = FUNC_7(VAR_24->bus_clk, VAR_7);
  if (VAR_27)
   goto pltfm_free;
  VAR_27 = FUNC_6(VAR_24->bus_clk);
  if (VAR_27)
   goto pltfm_free;
 }


 VAR_26 = FUNC_12(&VAR_21->dev, "iface");
 if (FUNC_1(VAR_26)) {
  VAR_27 = FUNC_2(VAR_26);
  FUNC_9(&VAR_21->dev, "Peripheral clk setup failed (%d)\n", VAR_27);
  goto bus_clk_disable;
 }
 VAR_24->bulk_clks[1].clk = VAR_26;


 VAR_26 = FUNC_12(&VAR_21->dev, "core");
 if (FUNC_1(VAR_26)) {
  VAR_27 = FUNC_2(VAR_26);
  FUNC_9(&VAR_21->dev, "SDC MMC clk setup failed (%d)\n", VAR_27);
  goto bus_clk_disable;
 }
 VAR_24->bulk_clks[0].clk = VAR_26;


 VAR_27 = FUNC_7(VAR_26, VAR_7);
 if (VAR_27)
  FUNC_11(&VAR_21->dev, "core clock boost failed\n");

 VAR_26 = FUNC_12(&VAR_21->dev, "cal");
 if (FUNC_1(VAR_26))
  VAR_26 = ((void*)0);
 VAR_24->bulk_clks[2].clk = VAR_26;

 VAR_26 = FUNC_12(&VAR_21->dev, "sleep");
 if (FUNC_1(VAR_26))
  VAR_26 = ((void*)0);
 VAR_24->bulk_clks[3].clk = VAR_26;

 VAR_27 = FUNC_4(FUNC_0(VAR_24->bulk_clks),
          VAR_24->bulk_clks);
 if (VAR_27)
  goto bus_clk_disable;





 VAR_24->xo_clk = FUNC_12(&VAR_21->dev, "xo");
 if (FUNC_1(VAR_24->xo_clk)) {
  VAR_27 = FUNC_2(VAR_24->xo_clk);
  FUNC_11(&VAR_21->dev, "TCXO clk not present (%d)\n", VAR_27);
 }

 if (!VAR_24->mci_removed) {
  VAR_25 = FUNC_21(VAR_21, VAR_9, 1);
  VAR_24->core_mem = FUNC_13(&VAR_21->dev,
    VAR_25);

  if (FUNC_1(VAR_24->core_mem)) {
   VAR_27 = FUNC_2(VAR_24->core_mem);
   goto clk_disable;
  }
 }


 FUNC_43(VAR_0,
   VAR_22->ioaddr + VAR_33->core_vendor_spec);

 if (!VAR_24->mci_removed) {

  FUNC_18(VAR_24, VAR_5, VAR_22,
    VAR_33->core_hc_mode);
  VAR_31 = FUNC_17(VAR_24, VAR_22,
    VAR_33->core_hc_mode);
  VAR_31 |= VAR_4;
  FUNC_18(VAR_24, VAR_31, VAR_22,
    VAR_33->core_hc_mode);
 }

 VAR_28 = FUNC_33((VAR_22->ioaddr + VAR_15));
 FUNC_8(&VAR_21->dev, "Host Version: 0x%x Vendor Version 0x%x\n",
  VAR_28, ((VAR_28 & VAR_16) >>
          VAR_17));

 VAR_30 = FUNC_17(VAR_24, VAR_22,
   VAR_33->core_mci_version);
 VAR_32 = (VAR_30 & VAR_1) >>
        VAR_2;
 VAR_29 = VAR_30 & VAR_3;
 FUNC_8(&VAR_21->dev, "MCI Version: 0x%08x, major: 0x%04x, minor: 0x%02x\n",
  VAR_30, VAR_32, VAR_29);

 if (VAR_32 == 1 && VAR_29 >= 0x42)
  VAR_24->use_14lpp_dll_reset = 1;





 if (VAR_32 == 1 && VAR_29 < 0x34)
  VAR_24->use_cdclp533 = 1;





 if (VAR_32 >= 1 && VAR_29 != 0x11 && VAR_29 != 0x12) {
  VAR_31 = FUNC_32(VAR_22->ioaddr + VAR_14);
  VAR_31 |= VAR_13 | VAR_12;
  FUNC_43(VAR_31, VAR_22->ioaddr +
    VAR_33->core_vendor_spec_capabilities0);
 }
 FUNC_36(VAR_22, 0);





 FUNC_15();


 VAR_24->pwr_irq = FUNC_20(VAR_21, "pwr_irq");
 if (VAR_24->pwr_irq < 0) {
  VAR_27 = VAR_24->pwr_irq;
  goto clk_disable;
 }

 FUNC_37(VAR_24);

 FUNC_18(VAR_24, VAR_6, VAR_22,
  VAR_33->core_pwrctl_mask);

 VAR_27 = FUNC_14(&VAR_21->dev, VAR_24->pwr_irq, ((void*)0),
     VAR_20, VAR_10,
     FUNC_10(&VAR_21->dev), VAR_22);
 if (VAR_27) {
  FUNC_9(&VAR_21->dev, "Request IRQ failed (%d)\n", VAR_27);
  goto clk_disable;
 }

 FUNC_24(&VAR_21->dev);
 FUNC_28(&VAR_21->dev);
 FUNC_23(&VAR_21->dev);
 FUNC_29(&VAR_21->dev,
      VAR_11);
 FUNC_31(&VAR_21->dev);

 VAR_22->mmc_host_ops.execute_tuning = VAR_18;
 VAR_27 = FUNC_34(VAR_22);
 if (VAR_27)
  goto pm_runtime_disable;
 FUNC_38(VAR_24);

 FUNC_25(&VAR_21->dev);
 FUNC_26(&VAR_21->dev);

 return 0;

pm_runtime_disable:
 FUNC_22(&VAR_21->dev);
 FUNC_30(&VAR_21->dev);
 FUNC_27(&VAR_21->dev);
clk_disable:
 FUNC_3(FUNC_0(VAR_24->bulk_clks),
       VAR_24->bulk_clks);
bus_clk_disable:
 if (!FUNC_1(VAR_24->bus_clk))
  FUNC_5(VAR_24->bus_clk);
pltfm_free:
 FUNC_39(VAR_21);
 return VAR_27;
}

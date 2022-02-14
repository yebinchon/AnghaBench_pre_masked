
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdhci_pltfm_host {int dummy; } ;
struct TYPE_4__ {int hs400_prepare_ddr; int execute_tuning; int start_signal_voltage_switch; } ;
struct sdhci_host {int tuning_delay; int ocr_mask; int mmc; int quirks2; int quirks; TYPE_2__ mmc_host_ops; } ;
struct sdhci_esdhc {int quirk_fixup_tuning; scalar_t__ vendor_ver; int quirk_ignore_data_inhibit; } ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct sdhci_host*) ;
 int FUNC_1 (struct sdhci_host*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct platform_device*,struct sdhci_host*) ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device_node*,int *) ;
 scalar_t__ FUNC_5 (struct device_node*,char*) ;
 scalar_t__ FUNC_6 (int *,int *,char*) ;
 scalar_t__ FUNC_7 (struct device_node*,char*) ;
 int FUNC_8 (struct sdhci_host*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (struct platform_device*) ;
 int FUNC_10 (struct platform_device*) ;
 struct sdhci_host* FUNC_11 (struct platform_device*,int *,int) ;
 struct sdhci_esdhc* FUNC_12 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_13 (struct sdhci_host*) ;
 scalar_t__ FUNC_14 (int ) ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_13)
{
 struct sdhci_host *VAR_14;
 struct device_node *VAR_15;
 struct sdhci_pltfm_host *VAR_16;
 struct sdhci_esdhc *VAR_17;
 int VAR_18;

 VAR_15 = VAR_13->dev.of_node;

 if (FUNC_7(VAR_15, "little-endian"))
  VAR_14 = FUNC_11(VAR_13, &VAR_11,
     sizeof(struct sdhci_esdhc));
 else
  VAR_14 = FUNC_11(VAR_13, &VAR_10,
     sizeof(struct sdhci_esdhc));

 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);

 VAR_14->mmc_host_ops.start_signal_voltage_switch =
  VAR_9;
 VAR_14->mmc_host_ops.execute_tuning = VAR_7;
 VAR_14->mmc_host_ops.hs400_prepare_ddr = VAR_8;
 VAR_14->tuning_delay = 1;

 FUNC_2(VAR_13, VAR_14);

 FUNC_9(VAR_13);

 VAR_16 = FUNC_13(VAR_14);
 VAR_17 = FUNC_12(VAR_16);
 if (FUNC_14(VAR_12))
  VAR_17->quirk_fixup_tuning = 1;
 else
  VAR_17->quirk_fixup_tuning = 0;

 if (VAR_17->vendor_ver == VAR_6)
  VAR_14->quirks2 |= VAR_1;

 if (VAR_17->vendor_ver > VAR_6)
  VAR_14->quirks &= ~VAR_4;

 if (FUNC_6(((void*)0), ((void*)0), "fsl,p2020-esdhc")) {
  VAR_14->quirks2 |= VAR_5;
  VAR_14->quirks2 |= VAR_3;
 }

 if (FUNC_5(VAR_15, "fsl,p5040-esdhc") ||
     FUNC_5(VAR_15, "fsl,p5020-esdhc") ||
     FUNC_5(VAR_15, "fsl,p4080-esdhc") ||
     FUNC_5(VAR_15, "fsl,p1020-esdhc") ||
     FUNC_5(VAR_15, "fsl,t1040-esdhc"))
  VAR_14->quirks &= ~VAR_2;

 if (FUNC_5(VAR_15, "fsl,ls1021a-esdhc"))
  VAR_14->quirks |= VAR_3;

 VAR_17->quirk_ignore_data_inhibit = 0;
 if (FUNC_5(VAR_15, "fsl,p2020-esdhc")) {




  VAR_14->quirks2 |= VAR_0;
  VAR_17->quirk_ignore_data_inhibit = 1;
 }


 VAR_18 = FUNC_3(VAR_14->mmc);
 if (VAR_18)
  goto err;

 FUNC_4(VAR_15, &VAR_14->ocr_mask);

 VAR_18 = FUNC_8(VAR_14);
 if (VAR_18)
  goto err;

 return 0;
 err:
 FUNC_10(VAR_13);
 return VAR_18;
}

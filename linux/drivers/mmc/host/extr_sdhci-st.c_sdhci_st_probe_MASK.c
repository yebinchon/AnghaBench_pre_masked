
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u16 ;
struct st_mmc_platform_data {struct sdhci_host* icnclk; struct sdhci_host* top_ioaddr; struct sdhci_host* rstc; } ;
struct sdhci_pltfm_host {struct sdhci_host* clk; } ;
struct sdhci_host {scalar_t__ ioaddr; int mmc; } ;
struct resource {int dummy; } ;
struct reset_control {scalar_t__ ioaddr; int mmc; } ;
struct TYPE_7__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct clk {scalar_t__ ioaddr; int mmc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sdhci_host*) ;
 int FUNC_1 (struct sdhci_host*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*,int,int) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 struct sdhci_host* FUNC_7 (TYPE_1__*,char*) ;
 struct sdhci_host* FUNC_8 (TYPE_1__*,struct resource*) ;
 struct sdhci_host* FUNC_9 (TYPE_1__*,int *) ;
 int FUNC_10 (int ) ;
 struct resource* FUNC_11 (struct platform_device*,int ,char*) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct sdhci_host*) ;
 int FUNC_14 (struct sdhci_host*) ;
 int FUNC_15 (struct sdhci_host*) ;
 int FUNC_16 (struct platform_device*) ;
 struct sdhci_host* FUNC_17 (struct platform_device*,int *,int) ;
 struct st_mmc_platform_data* FUNC_18 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_19 (struct sdhci_host*) ;
 int VAR_6 ;
 int FUNC_20 (struct device_node*,struct sdhci_host*) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_7)
{
 struct device_node *VAR_8 = VAR_7->dev.of_node;
 struct sdhci_host *VAR_9;
 struct st_mmc_platform_data *VAR_10;
 struct sdhci_pltfm_host *VAR_11;
 struct clk *VAR_12, *VAR_13;
 int VAR_14 = 0;
 u16 VAR_15;
 struct resource *VAR_16;
 struct reset_control *VAR_17;

 VAR_12 = FUNC_7(&VAR_7->dev, "mmc");
 if (FUNC_0(VAR_12)) {
  FUNC_4(&VAR_7->dev, "Peripheral clk not found\n");
  return FUNC_1(VAR_12);
 }


 VAR_13 = FUNC_7(&VAR_7->dev, "icn");
 if (FUNC_0(VAR_13))
  VAR_13 = ((void*)0);

 VAR_17 = FUNC_9(&VAR_7->dev, ((void*)0));
 if (FUNC_0(VAR_17))
  VAR_17 = ((void*)0);
 else
  FUNC_14(VAR_17);

 VAR_9 = FUNC_17(VAR_7, &VAR_6, sizeof(*VAR_10));
 if (FUNC_0(VAR_9)) {
  FUNC_4(&VAR_7->dev, "Failed sdhci_pltfm_init\n");
  VAR_14 = FUNC_1(VAR_9);
  goto err_pltfm_init;
 }

 VAR_11 = FUNC_19(VAR_9);
 VAR_10 = FUNC_18(VAR_11);
 VAR_10->rstc = VAR_17;

 VAR_14 = FUNC_10(VAR_9->mmc);
 if (VAR_14) {
  FUNC_4(&VAR_7->dev, "Failed mmc_of_parse\n");
  goto err_of;
 }

 VAR_14 = FUNC_3(VAR_12);
 if (VAR_14) {
  FUNC_4(&VAR_7->dev, "Failed to prepare clock\n");
  goto err_of;
 }

 VAR_14 = FUNC_3(VAR_13);
 if (VAR_14) {
  FUNC_4(&VAR_7->dev, "Failed to prepare icn clock\n");
  goto err_icnclk;
 }


 VAR_16 = FUNC_11(VAR_7, VAR_0,
        "top-mmc-delay");
 VAR_10->top_ioaddr = FUNC_8(&VAR_7->dev, VAR_16);
 if (FUNC_0(VAR_10->top_ioaddr)) {
  FUNC_6(&VAR_7->dev, "FlashSS Top Dly registers not available");
  VAR_10->top_ioaddr = ((void*)0);
 }

 VAR_11->clk = VAR_12;
 VAR_10->icnclk = VAR_13;


 FUNC_20(VAR_8, VAR_9);

 VAR_14 = FUNC_15(VAR_9);
 if (VAR_14)
  goto err_out;

 VAR_15 = FUNC_12((VAR_9->ioaddr + VAR_1));

 FUNC_5(&VAR_7->dev, "SDHCI ST Initialised: Host Version: 0x%x Vendor Version 0x%x\n",
  ((VAR_15 & VAR_2) >> VAR_3),
  ((VAR_15 & VAR_4) >>
  VAR_5));

 return 0;

err_out:
 FUNC_2(VAR_13);
err_icnclk:
 FUNC_2(VAR_12);
err_of:
 FUNC_16(VAR_7);
err_pltfm_init:
 if (VAR_17)
  FUNC_13(VAR_17);

 return VAR_14;
}

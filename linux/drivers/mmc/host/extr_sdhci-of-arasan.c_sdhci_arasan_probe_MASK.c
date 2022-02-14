
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sdhci_pltfm_host {struct sdhci_host* clk; } ;
struct TYPE_8__ {int start_signal_voltage_switch; int hs400_enhanced_strobe; } ;
struct sdhci_host {TYPE_4__* mmc; TYPE_1__ mmc_host_ops; } ;
struct sdhci_arasan_of_data {int soc_ctl_map; int pdata; } ;
struct sdhci_arasan_data {int has_cqe; struct sdhci_host* clk_ahb; struct sdhci_host* phy; int quirks; struct sdhci_host* soc_ctl_base; int soc_ctl_map; struct sdhci_host* host; } ;
struct TYPE_9__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct of_device_id {struct sdhci_arasan_of_data* data; } ;
struct device_node {int dummy; } ;
struct clk {TYPE_4__* mmc; TYPE_1__ mmc_host_ops; } ;
struct TYPE_10__ {int caps2; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sdhci_host* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sdhci_host*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct sdhci_host*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (struct sdhci_host*) ;
 int FUNC_5 (TYPE_2__*,char*,...) ;
 void* FUNC_6 (TYPE_2__*,char*) ;
 struct sdhci_host* FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (TYPE_4__*) ;
 scalar_t__ FUNC_9 (struct device_node*,char*) ;
 struct of_device_id* FUNC_10 (int ,struct device_node*) ;
 int FUNC_11 (struct device_node*) ;
 struct device_node* FUNC_12 (struct device_node*,char*,int ) ;
 scalar_t__ FUNC_13 (struct device_node*,char*) ;
 int FUNC_14 (struct sdhci_host*) ;
 int FUNC_15 (struct sdhci_host*) ;
 int FUNC_16 (struct sdhci_arasan_data*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_17 (struct sdhci_arasan_data*,struct sdhci_host*,TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (struct sdhci_host*) ;
 int FUNC_20 (struct sdhci_host*,int) ;
 int VAR_8 ;
 int FUNC_21 (struct platform_device*) ;
 int FUNC_22 (struct platform_device*) ;
 struct sdhci_host* FUNC_23 (struct platform_device*,int ,int) ;
 struct sdhci_arasan_data* FUNC_24 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_25 (struct sdhci_host*) ;
 struct sdhci_host* FUNC_26 (struct device_node*) ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_9)
{
 int VAR_10;
 const struct of_device_id *VAR_11;
 struct device_node *VAR_12;
 struct clk *VAR_13;
 struct sdhci_host *VAR_14;
 struct sdhci_pltfm_host *VAR_15;
 struct sdhci_arasan_data *VAR_16;
 struct device_node *VAR_17 = VAR_9->dev.of_node;
 const struct sdhci_arasan_of_data *VAR_18;

 VAR_11 = FUNC_10(VAR_7, VAR_9->dev.of_node);
 VAR_18 = VAR_11->data;
 VAR_14 = FUNC_23(VAR_9, VAR_18->pdata, sizeof(*VAR_16));

 if (FUNC_1(VAR_14))
  return FUNC_2(VAR_14);

 VAR_15 = FUNC_25(VAR_14);
 VAR_16 = FUNC_24(VAR_15);
 VAR_16->host = VAR_14;

 VAR_16->soc_ctl_map = VAR_18->soc_ctl_map;

 VAR_12 = FUNC_12(VAR_9->dev.of_node, "arasan,soc-ctl-syscon", 0);
 if (VAR_12) {
  VAR_16->soc_ctl_base = FUNC_26(VAR_12);
  FUNC_11(VAR_12);

  if (FUNC_1(VAR_16->soc_ctl_base)) {
   VAR_10 = FUNC_2(VAR_16->soc_ctl_base);
   if (VAR_10 != -VAR_1)
    FUNC_5(&VAR_9->dev, "Can't get syscon: %d\n",
     VAR_10);
   goto err_pltfm_free;
  }
 }

 VAR_16->clk_ahb = FUNC_6(&VAR_9->dev, "clk_ahb");
 if (FUNC_1(VAR_16->clk_ahb)) {
  FUNC_5(&VAR_9->dev, "clk_ahb clock not found.\n");
  VAR_10 = FUNC_2(VAR_16->clk_ahb);
  goto err_pltfm_free;
 }

 VAR_13 = FUNC_6(&VAR_9->dev, "clk_xin");
 if (FUNC_1(VAR_13)) {
  FUNC_5(&VAR_9->dev, "clk_xin clock not found.\n");
  VAR_10 = FUNC_2(VAR_13);
  goto err_pltfm_free;
 }

 VAR_10 = FUNC_4(VAR_16->clk_ahb);
 if (VAR_10) {
  FUNC_5(&VAR_9->dev, "Unable to enable AHB clock.\n");
  goto err_pltfm_free;
 }

 VAR_10 = FUNC_4(VAR_13);
 if (VAR_10) {
  FUNC_5(&VAR_9->dev, "Unable to enable SD clock.\n");
  goto clk_dis_ahb;
 }

 FUNC_21(VAR_9);

 if (FUNC_13(VAR_17, "xlnx,fails-without-test-cd"))
  VAR_16->quirks |= VAR_5;

 if (FUNC_13(VAR_17, "xlnx,int-clock-stable-broken"))
  VAR_16->quirks |= VAR_4;

 VAR_15->clk = VAR_13;

 if (FUNC_9(VAR_9->dev.of_node,
        "rockchip,rk3399-sdhci-5.1"))
  FUNC_20(VAR_14, 0x0);

 FUNC_19(VAR_14);

 VAR_10 = FUNC_17(VAR_16, VAR_13, &VAR_9->dev);
 if (VAR_10)
  goto clk_disable_all;

 VAR_10 = FUNC_8(VAR_14->mmc);
 if (VAR_10) {
  if (VAR_10 != -VAR_1)
   FUNC_5(&VAR_9->dev, "parsing dt failed (%d)\n", VAR_10);
  goto unreg_clk;
 }

 VAR_16->phy = FUNC_0(-VAR_0);
 if (FUNC_9(VAR_9->dev.of_node,
        "arasan,sdhci-5.1")) {
  VAR_16->phy = FUNC_7(&VAR_9->dev,
       "phy_arasan");
  if (FUNC_1(VAR_16->phy)) {
   VAR_10 = FUNC_2(VAR_16->phy);
   FUNC_5(&VAR_9->dev, "No phy for arasan,sdhci-5.1.\n");
   goto unreg_clk;
  }

  VAR_10 = FUNC_15(VAR_16->phy);
  if (VAR_10 < 0) {
   FUNC_5(&VAR_9->dev, "phy_init err.\n");
   goto unreg_clk;
  }

  VAR_14->mmc_host_ops.hs400_enhanced_strobe =
     VAR_6;
  VAR_14->mmc_host_ops.start_signal_voltage_switch =
     VAR_8;
  VAR_16->has_cqe = 1;
  VAR_14->mmc->caps2 |= VAR_2;

  if (!FUNC_13(VAR_17, "disable-cqe-dcmd"))
   VAR_14->mmc->caps2 |= VAR_3;
 }

 VAR_10 = FUNC_16(VAR_16);
 if (VAR_10)
  goto err_add_host;

 return 0;

err_add_host:
 if (!FUNC_1(VAR_16->phy))
  FUNC_14(VAR_16->phy);
unreg_clk:
 FUNC_18(&VAR_9->dev);
clk_disable_all:
 FUNC_3(VAR_13);
clk_dis_ahb:
 FUNC_3(VAR_16->clk_ahb);
err_pltfm_free:
 FUNC_22(VAR_9);
 return VAR_10;
}

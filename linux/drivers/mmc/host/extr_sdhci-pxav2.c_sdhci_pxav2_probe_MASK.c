
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_pxa_platdata {int flags; int quirks; int host_caps; int pm_caps; } ;
struct sdhci_pltfm_host {struct sdhci_host* clk; } ;
struct sdhci_host {int quirks; int * ops; TYPE_1__* mmc; } ;
struct device {struct sdhci_pxa_platdata* platform_data; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {int dummy; } ;
struct clk {int quirks; int * ops; TYPE_1__* mmc; } ;
struct TYPE_2__ {int caps; int pm_caps; } ;


 scalar_t__ FUNC_0 (struct sdhci_host*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sdhci_host*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (struct device*,char*) ;
 struct sdhci_host* FUNC_5 (struct device*,char*) ;
 struct of_device_id* FUNC_6 (int ,struct device*) ;
 int FUNC_7 (int ) ;
 struct sdhci_pxa_platdata* FUNC_8 (struct device*) ;
 int VAR_8 ;
 int FUNC_9 (struct sdhci_host*) ;
 int FUNC_10 (struct platform_device*) ;
 struct sdhci_host* FUNC_11 (struct platform_device*,int *,int ) ;
 struct sdhci_pltfm_host* FUNC_12 (struct sdhci_host*) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_10)
{
 struct sdhci_pltfm_host *VAR_11;
 struct sdhci_pxa_platdata *VAR_12 = VAR_10->dev.platform_data;
 struct device *VAR_13 = &VAR_10->dev;
 struct sdhci_host *VAR_14 = ((void*)0);
 const struct of_device_id *VAR_15;

 int VAR_16;
 struct clk *VAR_17;

 VAR_14 = FUNC_11(VAR_10, ((void*)0), 0);
 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);

 VAR_11 = FUNC_12(VAR_14);

 VAR_17 = FUNC_5(VAR_13, "PXA-SDHCLK");
 if (FUNC_0(VAR_17)) {
  FUNC_4(VAR_13, "failed to get io clock\n");
  VAR_16 = FUNC_1(VAR_17);
  goto free;
 }
 VAR_11->clk = VAR_17;
 VAR_16 = FUNC_3(VAR_17);
 if (VAR_16) {
  FUNC_4(&VAR_10->dev, "failed to enable io clock\n");
  goto free;
 }

 VAR_14->quirks = VAR_4
  | VAR_6
  | VAR_7;

 VAR_15 = FUNC_6(FUNC_7(VAR_9), &VAR_10->dev);
 if (VAR_15) {
  VAR_12 = FUNC_8(VAR_13);
 }
 if (VAR_12) {
  if (VAR_12->flags & VAR_2) {

   VAR_14->quirks |= VAR_5;
   VAR_14->mmc->caps |= VAR_1;
  }


  if (VAR_12->flags & VAR_3)
   VAR_14->mmc->caps |= VAR_0;

  if (VAR_12->quirks)
   VAR_14->quirks |= VAR_12->quirks;
  if (VAR_12->host_caps)
   VAR_14->mmc->caps |= VAR_12->host_caps;
  if (VAR_12->pm_caps)
   VAR_14->mmc->pm_caps |= VAR_12->pm_caps;
 }

 VAR_14->ops = &VAR_8;

 VAR_16 = FUNC_9(VAR_14);
 if (VAR_16)
  goto disable_clk;

 return 0;

disable_clk:
 FUNC_2(VAR_17);
free:
 FUNC_10(VAR_10);
 return VAR_16;
}

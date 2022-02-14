
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdhci_pltfm_host {struct sdhci_host* clk; } ;
struct sdhci_iproc_host {struct sdhci_iproc_data const* data; } ;
struct sdhci_iproc_data {int caps1; int caps; TYPE_1__* pdata; int mmc_caps; } ;
struct sdhci_host {int caps1; int caps; TYPE_2__* mmc; } ;
struct device {scalar_t__ of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_4__ {int caps; } ;
struct TYPE_3__ {int quirks; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sdhci_host*) ;
 int FUNC_1 (struct sdhci_host*) ;
 int VAR_1 ;
 int FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (struct device*,char*) ;
 struct sdhci_iproc_data* FUNC_5 (struct device*) ;
 struct sdhci_host* FUNC_6 (struct device*,int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct sdhci_host*) ;
 int FUNC_9 (struct platform_device*) ;
 int FUNC_10 (struct platform_device*) ;
 struct sdhci_host* FUNC_11 (struct platform_device*,TYPE_1__*,int) ;
 struct sdhci_iproc_host* FUNC_12 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_13 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 const struct sdhci_iproc_data *VAR_4 = ((void*)0);
 struct sdhci_host *VAR_5;
 struct sdhci_iproc_host *VAR_6;
 struct sdhci_pltfm_host *VAR_7;
 int VAR_8;

 VAR_4 = FUNC_5(VAR_3);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_11(VAR_2, VAR_4->pdata, sizeof(*VAR_6));
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_7 = FUNC_13(VAR_5);
 VAR_6 = FUNC_12(VAR_7);

 VAR_6->data = VAR_4;

 VAR_8 = FUNC_7(VAR_5->mmc);
 if (VAR_8)
  goto err;

 FUNC_9(VAR_2);

 VAR_5->mmc->caps |= VAR_6->data->mmc_caps;

 if (VAR_3->of_node) {
  VAR_7->clk = FUNC_6(VAR_3, ((void*)0));
  if (FUNC_0(VAR_7->clk)) {
   VAR_8 = FUNC_1(VAR_7->clk);
   goto err;
  }
  VAR_8 = FUNC_3(VAR_7->clk);
  if (VAR_8) {
   FUNC_4(VAR_3, "failed to enable host clk\n");
   goto err;
  }
 }

 if (VAR_6->data->pdata->quirks & VAR_1) {
  VAR_5->caps = VAR_6->data->caps;
  VAR_5->caps1 = VAR_6->data->caps1;
 }

 VAR_8 = FUNC_8(VAR_5);
 if (VAR_8)
  goto err_clk;

 return 0;

err_clk:
 if (VAR_3->of_node)
  FUNC_2(VAR_7->clk);
err:
 FUNC_10(VAR_2);
 return VAR_8;
}

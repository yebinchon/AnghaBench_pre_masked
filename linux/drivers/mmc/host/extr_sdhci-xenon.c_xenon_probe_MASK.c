
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenon_priv {struct sdhci_host* axi_clk; } ;
struct sdhci_pltfm_host {struct sdhci_host* clk; } ;
struct sdhci_host {int mmc; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sdhci_host*) ;
 int FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (int *,char*,int) ;
 void* FUNC_5 (int *,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (struct sdhci_host*) ;
 int FUNC_17 (struct platform_device*) ;
 int FUNC_18 (struct platform_device*) ;
 struct sdhci_host* FUNC_19 (struct platform_device*,int *,int) ;
 struct xenon_priv* FUNC_20 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_21 (struct sdhci_host*) ;
 int VAR_1 ;
 int FUNC_22 (struct platform_device*) ;
 int FUNC_23 (struct sdhci_host*) ;
 int FUNC_24 (struct sdhci_host*) ;
 int FUNC_25 (struct sdhci_host*) ;
 int FUNC_26 (struct sdhci_host*,int) ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_2)
{
 struct sdhci_pltfm_host *VAR_3;
 struct sdhci_host *VAR_4;
 struct xenon_priv *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_19(VAR_2, &VAR_1,
    sizeof(struct xenon_priv));
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_3 = FUNC_21(VAR_4);
 VAR_5 = FUNC_20(VAR_3);





 FUNC_23(VAR_4);

 VAR_3->clk = FUNC_5(&VAR_2->dev, "core");
 if (FUNC_0(VAR_3->clk)) {
  VAR_6 = FUNC_1(VAR_3->clk);
  FUNC_4(&VAR_2->dev, "Failed to setup input clk: %d\n", VAR_6);
  goto free_pltfm;
 }
 VAR_6 = FUNC_3(VAR_3->clk);
 if (VAR_6)
  goto free_pltfm;

 VAR_5->axi_clk = FUNC_5(&VAR_2->dev, "axi");
 if (FUNC_0(VAR_5->axi_clk)) {
  VAR_6 = FUNC_1(VAR_5->axi_clk);
  if (VAR_6 == -VAR_0)
   goto err_clk;
 } else {
  VAR_6 = FUNC_3(VAR_5->axi_clk);
  if (VAR_6)
   goto err_clk;
 }

 VAR_6 = FUNC_6(VAR_4->mmc);
 if (VAR_6)
  goto err_clk_axi;

 FUNC_17(VAR_2);

 FUNC_26(VAR_4, 0);


 VAR_6 = FUNC_22(VAR_2);
 if (VAR_6)
  goto err_clk_axi;

 VAR_6 = FUNC_24(VAR_4);
 if (VAR_6)
  goto err_clk_axi;

 FUNC_9(&VAR_2->dev);
 FUNC_12(&VAR_2->dev);
 FUNC_13(&VAR_2->dev, 50);
 FUNC_14(&VAR_2->dev);
 FUNC_8(&VAR_2->dev);
 FUNC_15(&VAR_2->dev, 1);

 VAR_6 = FUNC_16(VAR_4);
 if (VAR_6)
  goto remove_sdhc;

 FUNC_10(&VAR_2->dev);

 return 0;

remove_sdhc:
 FUNC_7(&VAR_2->dev);
 FUNC_11(&VAR_2->dev);
 FUNC_25(VAR_4);
err_clk_axi:
 FUNC_2(VAR_5->axi_clk);
err_clk:
 FUNC_2(VAR_3->clk);
free_pltfm:
 FUNC_18(VAR_2);
 return VAR_6;
}

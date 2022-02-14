
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sdhci_pltfm_host {struct sdhci_host* clk; } ;
struct sdhci_host {int mmc; int adma_table_cnt; } ;
struct platform_device {int dev; } ;
struct dwcmshc_priv {struct sdhci_host* bus_clk; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct sdhci_host*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (struct sdhci_host*) ;
 int FUNC_5 (int *,char*,int) ;
 void* FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sdhci_host*) ;
 int VAR_2 ;
 int FUNC_10 (struct platform_device*) ;
 int FUNC_11 (struct platform_device*) ;
 struct sdhci_host* FUNC_12 (struct platform_device*,int *,int) ;
 struct dwcmshc_priv* FUNC_13 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_14 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_3)
{
 struct sdhci_pltfm_host *VAR_4;
 struct sdhci_host *VAR_5;
 struct dwcmshc_priv *VAR_6;
 int VAR_7;
 u32 VAR_8;

 VAR_5 = FUNC_12(VAR_3, &VAR_2,
    sizeof(struct dwcmshc_priv));
 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);




 VAR_8 = FUNC_0(FUNC_7(&VAR_3->dev), VAR_1);
 if (VAR_8 > VAR_0)
  VAR_8 = VAR_0;
 VAR_5->adma_table_cnt += VAR_8;

 VAR_4 = FUNC_14(VAR_5);
 VAR_6 = FUNC_13(VAR_4);

 VAR_4->clk = FUNC_6(&VAR_3->dev, "core");
 if (FUNC_1(VAR_4->clk)) {
  VAR_7 = FUNC_2(VAR_4->clk);
  FUNC_5(&VAR_3->dev, "failed to get core clk: %d\n", VAR_7);
  goto free_pltfm;
 }
 VAR_7 = FUNC_4(VAR_4->clk);
 if (VAR_7)
  goto free_pltfm;

 VAR_6->bus_clk = FUNC_6(&VAR_3->dev, "bus");
 if (!FUNC_1(VAR_6->bus_clk))
  FUNC_4(VAR_6->bus_clk);

 VAR_7 = FUNC_8(VAR_5->mmc);
 if (VAR_7)
  goto err_clk;

 FUNC_10(VAR_3);

 VAR_7 = FUNC_9(VAR_5);
 if (VAR_7)
  goto err_clk;

 return 0;

err_clk:
 FUNC_3(VAR_4->clk);
 FUNC_3(VAR_6->bus_clk);
free_pltfm:
 FUNC_11(VAR_3);
 return VAR_7;
}

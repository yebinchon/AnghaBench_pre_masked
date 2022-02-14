
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pltfm_host {struct sdhci_host* clk; } ;
struct sdhci_host {int mmc; } ;
struct platform_device {int dev; } ;
struct clk {int mmc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sdhci_host*) ;
 int FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (int *,char*) ;
 struct sdhci_host* FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,char*,int ,int,int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sdhci_host*) ;
 int FUNC_9 (struct platform_device*) ;
 int FUNC_10 (struct platform_device*) ;
 struct sdhci_host* FUNC_11 (struct platform_device*,int *,int ) ;
 struct sdhci_pltfm_host* FUNC_12 (struct sdhci_host*) ;
 int FUNC_13 (struct sdhci_host*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_2)
{
 struct sdhci_host *VAR_3;
 struct sdhci_pltfm_host *VAR_4;
 struct clk *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(&VAR_2->dev, ((void*)0));
 if (FUNC_0(VAR_5)) {
  FUNC_4(&VAR_2->dev, "unable to get clock");
  return FUNC_1(VAR_5);
 }

 VAR_3 = FUNC_11(VAR_2, &VAR_1, 0);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = FUNC_12(VAR_3);
 VAR_4->clk = VAR_5;

 FUNC_9(VAR_2);

 VAR_6 = FUNC_3(VAR_4->clk);
 if (VAR_6)
  goto err_clk_prepare;

 VAR_6 = FUNC_8(VAR_3);
 if (VAR_6)
  goto err_sdhci_add;





 VAR_6 = FUNC_6(VAR_3->mmc, "cd", 0, 0, 0, ((void*)0));
 if (VAR_6 == -VAR_0)
  goto err_request_cd;
 if (!VAR_6)
  FUNC_7(VAR_3->mmc);

 return 0;

err_request_cd:
 FUNC_13(VAR_3, 0);
err_sdhci_add:
 FUNC_2(VAR_4->clk);
err_clk_prepare:
 FUNC_10(VAR_2);
 return VAR_6;
}

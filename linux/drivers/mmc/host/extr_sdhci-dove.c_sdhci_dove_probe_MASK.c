
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pltfm_host {struct sdhci_host* clk; } ;
struct sdhci_host {int mmc; } ;
struct platform_device {int dev; } ;


 scalar_t__ FUNC_0 (struct sdhci_host*) ;
 int FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (struct sdhci_host*) ;
 struct sdhci_host* FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sdhci_host*) ;
 int VAR_0 ;
 int FUNC_7 (struct platform_device*) ;
 struct sdhci_host* FUNC_8 (struct platform_device*,int *,int ) ;
 struct sdhci_pltfm_host* FUNC_9 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_1)
{
 struct sdhci_host *VAR_2;
 struct sdhci_pltfm_host *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_8(VAR_1, &VAR_0, 0);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_3 = FUNC_9(VAR_2);
 VAR_3->clk = FUNC_4(&VAR_1->dev, ((void*)0));

 if (!FUNC_0(VAR_3->clk))
  FUNC_3(VAR_3->clk);

 VAR_4 = FUNC_5(VAR_2->mmc);
 if (VAR_4)
  goto err_sdhci_add;

 VAR_4 = FUNC_6(VAR_2);
 if (VAR_4)
  goto err_sdhci_add;

 return 0;

err_sdhci_add:
 FUNC_2(VAR_3->clk);
 FUNC_7(VAR_1);
 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_msm_host {int bus_clk; int bulk_clks; } ;
struct sdhci_host {scalar_t__ ioaddr; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 struct sdhci_host* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct platform_device*) ;
 struct sdhci_msm_host* FUNC_10 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_11 (struct sdhci_host*) ;
 int FUNC_12 (struct sdhci_host*,int) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_1)
{
 struct sdhci_host *VAR_2 = FUNC_4(VAR_1);
 struct sdhci_pltfm_host *VAR_3 = FUNC_11(VAR_2);
 struct sdhci_msm_host *VAR_4 = FUNC_10(VAR_3);
 int VAR_5 = (FUNC_8(VAR_2->ioaddr + VAR_0) ==
      0xffffffff);

 FUNC_12(VAR_2, VAR_5);

 FUNC_6(&VAR_1->dev);
 FUNC_5(&VAR_1->dev);
 FUNC_7(&VAR_1->dev);

 FUNC_2(FUNC_0(VAR_4->bulk_clks),
       VAR_4->bulk_clks);
 if (!FUNC_1(VAR_4->bus_clk))
  FUNC_3(VAR_4->bus_clk);
 FUNC_9(VAR_1);
 return 0;
}

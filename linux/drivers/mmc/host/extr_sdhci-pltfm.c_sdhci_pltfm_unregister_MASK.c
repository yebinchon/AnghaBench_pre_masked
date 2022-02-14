
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pltfm_host {int clk; } ;
struct sdhci_host {scalar_t__ ioaddr; } ;
struct platform_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 struct sdhci_host* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct platform_device*) ;
 struct sdhci_pltfm_host* FUNC_4 (struct sdhci_host*) ;
 int FUNC_5 (struct sdhci_host*,int) ;

int FUNC_6(struct platform_device *VAR_1)
{
 struct sdhci_host *VAR_2 = FUNC_1(VAR_1);
 struct sdhci_pltfm_host *VAR_3 = FUNC_4(VAR_2);
 int VAR_4 = (FUNC_2(VAR_2->ioaddr + VAR_0) == 0xffffffff);

 FUNC_5(VAR_2, VAR_4);
 FUNC_0(VAR_3->clk);
 FUNC_3(VAR_1);

 return 0;
}

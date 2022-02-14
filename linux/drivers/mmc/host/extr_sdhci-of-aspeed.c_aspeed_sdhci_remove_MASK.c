
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pltfm_host {int clk; } ;
struct sdhci_host {int dummy; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct sdhci_host* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*) ;
 struct sdhci_pltfm_host* FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (struct sdhci_host*,int) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct sdhci_pltfm_host *VAR_1;
 struct sdhci_host *VAR_2;
 int VAR_3 = 0;

 VAR_2 = FUNC_1(VAR_0);
 VAR_1 = FUNC_3(VAR_2);

 FUNC_4(VAR_2, VAR_3);

 FUNC_0(VAR_1->clk);

 FUNC_2(VAR_0);

 return 0;
}

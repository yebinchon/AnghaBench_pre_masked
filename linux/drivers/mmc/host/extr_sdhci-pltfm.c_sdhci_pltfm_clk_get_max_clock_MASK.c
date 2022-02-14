
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pltfm_host {int clk; } ;
struct sdhci_host {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 struct sdhci_pltfm_host* FUNC_1 (struct sdhci_host*) ;

unsigned int FUNC_2(struct sdhci_host *VAR_0)
{
 struct sdhci_pltfm_host *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1->clk);
}

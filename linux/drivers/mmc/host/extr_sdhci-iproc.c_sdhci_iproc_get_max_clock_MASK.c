
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pltfm_host {unsigned int clock; scalar_t__ clk; } ;
struct sdhci_host {int dummy; } ;


 unsigned int FUNC_0 (struct sdhci_host*) ;
 struct sdhci_pltfm_host* FUNC_1 (struct sdhci_host*) ;

__attribute__((used)) static unsigned int FUNC_2(struct sdhci_host *VAR_0)
{
 struct sdhci_pltfm_host *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->clk)
  return FUNC_0(VAR_0);
 else
  return VAR_1->clock;
}

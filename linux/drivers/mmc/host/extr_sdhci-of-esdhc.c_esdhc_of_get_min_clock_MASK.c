
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pltfm_host {unsigned int clock; } ;
struct sdhci_host {int dummy; } ;
struct sdhci_esdhc {int peripheral_clock; } ;


 struct sdhci_esdhc* FUNC_0 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_1 (struct sdhci_host*) ;

__attribute__((used)) static unsigned int FUNC_2(struct sdhci_host *VAR_0)
{
 struct sdhci_pltfm_host *VAR_1 = FUNC_1(VAR_0);
 struct sdhci_esdhc *VAR_2 = FUNC_0(VAR_1);
 unsigned int VAR_3;

 if (VAR_2->peripheral_clock)
  VAR_3 = VAR_2->peripheral_clock;
 else
  VAR_3 = VAR_1->clock;
 return VAR_3 / 256 / 16;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_omap_host {int dummy; } ;
struct sdhci_host {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct sdhci_host*,unsigned long) ;
 unsigned long FUNC_1 (struct sdhci_pltfm_host*,unsigned int) ;
 int FUNC_2 (struct sdhci_omap_host*) ;
 int FUNC_3 (struct sdhci_omap_host*) ;
 struct sdhci_omap_host* FUNC_4 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_5 (struct sdhci_host*) ;

__attribute__((used)) static void FUNC_6(struct sdhci_host *VAR_2, unsigned int VAR_3)
{
 struct sdhci_pltfm_host *VAR_4 = FUNC_5(VAR_2);
 struct sdhci_omap_host *VAR_5 = FUNC_4(VAR_4);
 unsigned long VAR_6;

 FUNC_3(VAR_5);

 if (!VAR_3)
  return;

 VAR_6 = FUNC_1(VAR_4, VAR_3);
 VAR_6 = (VAR_6 & VAR_0) << VAR_1;
 FUNC_0(VAR_2, VAR_6);

 FUNC_2(VAR_5);
}

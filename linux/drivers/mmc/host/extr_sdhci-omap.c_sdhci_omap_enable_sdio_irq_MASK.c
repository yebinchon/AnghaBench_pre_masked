
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_omap_host {int dummy; } ;
struct sdhci_host {int dummy; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sdhci_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_host*,int) ;
 int FUNC_2 (struct sdhci_omap_host*,int ) ;
 int FUNC_3 (struct sdhci_omap_host*,int ,int) ;
 struct sdhci_omap_host* FUNC_4 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_5 (struct sdhci_host*) ;

__attribute__((used)) static void FUNC_6(struct mmc_host *VAR_3, int VAR_4)
{
 struct sdhci_host *VAR_5 = FUNC_0(VAR_3);
 struct sdhci_pltfm_host *VAR_6 = FUNC_5(VAR_5);
 struct sdhci_omap_host *VAR_7 = FUNC_4(VAR_6);
 u32 VAR_8;

 VAR_8 = FUNC_2(VAR_7, VAR_2);
 if (VAR_4)
  VAR_8 |= (VAR_1 | VAR_0);
 else
  VAR_8 &= ~(VAR_1 | VAR_0);
 FUNC_3(VAR_7, VAR_2, VAR_8);

 FUNC_1(VAR_3, VAR_4);
}

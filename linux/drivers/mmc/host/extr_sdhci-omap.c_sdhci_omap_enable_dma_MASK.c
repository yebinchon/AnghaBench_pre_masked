
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_omap_host {int dummy; } ;
struct sdhci_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sdhci_omap_host*,int ) ;
 int FUNC_1 (struct sdhci_omap_host*,int ,int ) ;
 struct sdhci_omap_host* FUNC_2 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_3 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_4(struct sdhci_host *VAR_2)
{
 u32 VAR_3;
 struct sdhci_pltfm_host *VAR_4 = FUNC_3(VAR_2);
 struct sdhci_omap_host *VAR_5 = FUNC_2(VAR_4);

 VAR_3 = FUNC_0(VAR_5, VAR_1);
 VAR_3 |= VAR_0;
 FUNC_1(VAR_5, VAR_1, VAR_3);

 return 0;
}

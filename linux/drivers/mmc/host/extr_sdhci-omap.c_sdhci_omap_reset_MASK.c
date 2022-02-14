
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_omap_host {scalar_t__ is_tuning; } ;
struct sdhci_host {int dummy; } ;


 int VAR_0 ;
 struct sdhci_omap_host* FUNC_0 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct sdhci_host*,int ) ;

__attribute__((used)) static void FUNC_3(struct sdhci_host *VAR_1, u8 VAR_2)
{
 struct sdhci_pltfm_host *VAR_3 = FUNC_1(VAR_1);
 struct sdhci_omap_host *VAR_4 = FUNC_0(VAR_3);


 if (VAR_4->is_tuning)
  VAR_2 &= ~VAR_0;

 FUNC_2(VAR_1, VAR_2);
}

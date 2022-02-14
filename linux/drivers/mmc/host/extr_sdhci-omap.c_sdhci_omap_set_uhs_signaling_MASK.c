
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_omap_host {int dummy; } ;
struct sdhci_host {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sdhci_omap_host*,int ) ;
 int FUNC_1 (struct sdhci_omap_host*) ;
 int FUNC_2 (struct sdhci_omap_host*) ;
 int FUNC_3 (struct sdhci_omap_host*,int ,int ) ;
 struct sdhci_omap_host* FUNC_4 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_5 (struct sdhci_host*) ;
 int FUNC_6 (struct sdhci_host*,unsigned int) ;

__attribute__((used)) static void FUNC_7(struct sdhci_host *VAR_4,
      unsigned int VAR_5)
{
 u32 VAR_6;
 struct sdhci_pltfm_host *VAR_7 = FUNC_5(VAR_4);
 struct sdhci_omap_host *VAR_8 = FUNC_4(VAR_7);

 FUNC_2(VAR_8);

 VAR_6 = FUNC_0(VAR_8, VAR_3);
 if (VAR_5 == VAR_2 || VAR_5 == VAR_1)
  VAR_6 |= VAR_0;
 else
  VAR_6 &= ~VAR_0;
 FUNC_3(VAR_8, VAR_3, VAR_6);

 FUNC_6(VAR_4, VAR_5);
 FUNC_1(VAR_8);
}

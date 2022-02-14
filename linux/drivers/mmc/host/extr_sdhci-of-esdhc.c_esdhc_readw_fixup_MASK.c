
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int dummy; } ;
struct sdhci_esdhc {scalar_t__ quirk_incorrect_hostver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sdhci_esdhc* FUNC_0 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_1 (struct sdhci_host*) ;

__attribute__((used)) static u16 FUNC_2(struct sdhci_host *VAR_4,
         int VAR_5, u32 VAR_6)
{
 struct sdhci_pltfm_host *VAR_7 = FUNC_1(VAR_4);
 struct sdhci_esdhc *VAR_8 = FUNC_0(VAR_7);
 u16 VAR_9;
 int VAR_10 = (VAR_5 & 0x2) * 8;

 if (VAR_5 == VAR_0)
  VAR_9 = VAR_6 & 0xffff;
 else
  VAR_9 = (VAR_6 >> VAR_10) & 0xffff;



 if ((VAR_5 == VAR_0) &&
     (VAR_8->quirk_incorrect_hostver))
  VAR_9 = (VAR_3 << VAR_2) | VAR_1;
 return VAR_9;
}

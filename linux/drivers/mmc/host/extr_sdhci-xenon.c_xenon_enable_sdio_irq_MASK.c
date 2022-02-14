
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct xenon_priv {int sdhc_id; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int dummy; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sdhci_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_host*,int) ;
 struct xenon_priv* FUNC_2 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (struct sdhci_host*,int ) ;
 int FUNC_5 (struct sdhci_host*,int,int ) ;

__attribute__((used)) static void FUNC_6(struct mmc_host *VAR_2, int VAR_3)
{
 struct sdhci_host *VAR_4 = FUNC_0(VAR_2);
 struct sdhci_pltfm_host *VAR_5 = FUNC_3(VAR_4);
 struct xenon_priv *VAR_6 = FUNC_2(VAR_5);
 u32 VAR_7;
 u8 VAR_8 = VAR_6->sdhc_id;

 FUNC_1(VAR_2, VAR_3);

 if (VAR_3) {




  VAR_7 = FUNC_4(VAR_4, VAR_1);
  VAR_7 |= (1 << (VAR_8 + VAR_0));
  FUNC_5(VAR_4, VAR_7, VAR_1);
 } else {

  VAR_7 = FUNC_4(VAR_4, VAR_1);
  VAR_7 &= ~(1 << (VAR_8 + VAR_0));
  FUNC_5(VAR_4, VAR_7, VAR_1);
 }
}

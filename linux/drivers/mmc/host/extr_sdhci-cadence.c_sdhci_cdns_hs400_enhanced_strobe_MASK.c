
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sdhci_host {int dummy; } ;
struct sdhci_cdns_priv {scalar_t__ enhanced_strobe; } ;
struct mmc_ios {scalar_t__ enhanced_strobe; } ;
struct mmc_host {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sdhci_host* FUNC_0 (struct mmc_host*) ;
 scalar_t__ FUNC_1 (struct sdhci_cdns_priv*) ;
 struct sdhci_cdns_priv* FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (struct sdhci_cdns_priv*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct mmc_host *VAR_2,
          struct mmc_ios *VAR_3)
{
 struct sdhci_host *VAR_4 = FUNC_0(VAR_2);
 struct sdhci_cdns_priv *VAR_5 = FUNC_2(VAR_4);
 u32 VAR_6;

 VAR_5->enhanced_strobe = VAR_3->enhanced_strobe;

 VAR_6 = FUNC_1(VAR_5);

 if (VAR_6 == VAR_0 && VAR_3->enhanced_strobe)
  FUNC_3(VAR_5,
      VAR_1);

 if (VAR_6 == VAR_1 && !VAR_3->enhanced_strobe)
  FUNC_3(VAR_5,
      VAR_0);
}

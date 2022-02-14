
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sdhci_sprd_host {int * phy_delay; } ;
struct sdhci_host {int dummy; } ;
struct mmc_ios {int enhanced_strobe; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sdhci_sprd_host* FUNC_0 (struct sdhci_host*) ;
 struct sdhci_host* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct sdhci_host*,int ) ;
 int FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (struct sdhci_host*) ;
 int FUNC_5 (struct sdhci_host*,int ,int ) ;
 int FUNC_6 (struct sdhci_host*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct mmc_host *VAR_5,
          struct mmc_ios *VAR_6)
{
 struct sdhci_host *VAR_7 = FUNC_1(VAR_5);
 struct sdhci_sprd_host *VAR_8 = FUNC_0(VAR_7);
 u32 *VAR_9 = VAR_8->phy_delay;
 u16 VAR_10;

 if (!VAR_6->enhanced_strobe)
  return;

 FUNC_3(VAR_7);


 VAR_10 = FUNC_2(VAR_7, VAR_2);
 VAR_10 &= ~VAR_1;
 VAR_10 |= VAR_3;
 FUNC_6(VAR_7, VAR_10, VAR_2);

 FUNC_4(VAR_7);


 FUNC_5(VAR_7, VAR_9[VAR_0 + 1],
       VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {int dummy; } ;
struct mmc_ios {scalar_t__ enhanced_strobe; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sdhci_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct sdhci_host*,int ) ;
 int FUNC_2 (struct sdhci_host*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct mmc_host *VAR_2,
     struct mmc_ios *VAR_3)
{
 u32 VAR_4;
 struct sdhci_host *VAR_5 = FUNC_0(VAR_2);

 VAR_4 = FUNC_1(VAR_5, VAR_0);
 if (VAR_3->enhanced_strobe)
  VAR_4 |= VAR_1;
 else
  VAR_4 &= ~VAR_1;

 FUNC_2(VAR_5, VAR_4, VAR_0);
}

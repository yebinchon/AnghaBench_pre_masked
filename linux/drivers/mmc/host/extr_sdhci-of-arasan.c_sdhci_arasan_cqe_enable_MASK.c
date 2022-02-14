
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {int dummy; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sdhci_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct sdhci_host*,int ) ;

__attribute__((used)) static void FUNC_3(struct mmc_host *VAR_3)
{
 struct sdhci_host *VAR_4 = FUNC_0(VAR_3);
 u32 VAR_5;

 VAR_5 = FUNC_2(VAR_4, VAR_2);
 while (VAR_5 & VAR_1) {
  FUNC_2(VAR_4, VAR_0);
  VAR_5 = FUNC_2(VAR_4, VAR_2);
 }

 FUNC_1(VAR_3);
}

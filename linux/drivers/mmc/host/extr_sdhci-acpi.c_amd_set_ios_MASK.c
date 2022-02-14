
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {unsigned int timing; } ;
struct mmc_ios {unsigned int timing; } ;
struct mmc_host {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 struct sdhci_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct mmc_host*,struct mmc_ios*) ;
 int FUNC_3 (struct sdhci_host*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct mmc_host *VAR_4, struct mmc_ios *VAR_5)
{
 struct sdhci_host *VAR_6 = FUNC_0(VAR_4);
 unsigned int VAR_7 = VAR_6->timing;

 FUNC_2(VAR_4, VAR_5);
 if (VAR_7 == VAR_1 &&
     VAR_5->timing == VAR_0)
  FUNC_3(VAR_6, 0x9, VAR_3);
 if (VAR_7 != VAR_2 &&
     VAR_5->timing == VAR_2) {
  FUNC_3(VAR_6, 0x80, VAR_3);
  FUNC_1(VAR_6);
 }
}

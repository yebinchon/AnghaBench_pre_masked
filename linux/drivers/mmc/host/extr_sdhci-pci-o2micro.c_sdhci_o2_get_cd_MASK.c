
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int dummy; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sdhci_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct sdhci_host*,int ) ;
 int FUNC_3 (struct sdhci_host*,int ) ;

__attribute__((used)) static int FUNC_4(struct mmc_host *VAR_4)
{
 struct sdhci_host *VAR_5 = FUNC_0(VAR_4);

 if (!(FUNC_3(VAR_5, VAR_0) & VAR_1))
  FUNC_1(VAR_5);

 return !!(FUNC_2(VAR_5, VAR_3) & VAR_2);
}

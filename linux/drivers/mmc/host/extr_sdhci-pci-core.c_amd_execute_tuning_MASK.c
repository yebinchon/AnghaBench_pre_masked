
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {scalar_t__ timing; } ;
struct mmc_host {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sdhci_host*,int ) ;
 struct sdhci_host* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*,int ) ;

__attribute__((used)) static int FUNC_3(struct mmc_host *VAR_1, u32 VAR_2)
{
 struct sdhci_host *VAR_3 = FUNC_1(VAR_1);


 if (VAR_3->timing == VAR_0)
  return FUNC_0(VAR_3, VAR_2);


 return FUNC_2(VAR_1, VAR_2);
}

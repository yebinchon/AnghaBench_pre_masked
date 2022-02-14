
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {scalar_t__ timing; scalar_t__ tuning_mode; } ;
struct mmc_host {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sdhci_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_host*,int ) ;
 int FUNC_2 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_3(struct mmc_host *VAR_3, u32 VAR_4)
{
 struct sdhci_host *VAR_5 = FUNC_0(VAR_3);

 if (VAR_5->timing == VAR_1 ||
  VAR_5->timing == VAR_0)
  return 0;






 if (VAR_5->tuning_mode != VAR_2)
  FUNC_2(VAR_5);

 return FUNC_1(VAR_3, VAR_4);
}

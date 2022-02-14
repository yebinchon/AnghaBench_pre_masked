
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_host {scalar_t__ clock; TYPE_1__* mmc; } ;
struct mmc_ios {scalar_t__ timing; scalar_t__ enhanced_strobe; } ;
struct TYPE_2__ {struct mmc_ios ios; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool FUNC_0(struct sdhci_host *VAR_4)
{
 struct mmc_ios *VAR_5 = &VAR_4->mmc->ios;





 if (VAR_4->clock <= VAR_0 ||
     !(VAR_5->timing == VAR_2 ||
     VAR_5->timing == VAR_1 ||
     VAR_5->timing == VAR_3) ||
     VAR_5->enhanced_strobe)
  return 0;

 return 1;
}

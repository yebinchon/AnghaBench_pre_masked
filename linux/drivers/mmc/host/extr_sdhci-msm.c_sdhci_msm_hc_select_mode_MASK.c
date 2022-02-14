
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_host {int flags; TYPE_1__* mmc; } ;
struct mmc_ios {scalar_t__ timing; } ;
struct TYPE_2__ {struct mmc_ios ios; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sdhci_host*) ;
 int FUNC_1 (struct sdhci_host*) ;

__attribute__((used)) static void FUNC_2(struct sdhci_host *VAR_2)
{
 struct mmc_ios VAR_3 = VAR_2->mmc->ios;

 if (VAR_3.timing == VAR_0 ||
     VAR_2->flags & VAR_1)
  FUNC_1(VAR_2);
 else
  FUNC_0(VAR_2);
}

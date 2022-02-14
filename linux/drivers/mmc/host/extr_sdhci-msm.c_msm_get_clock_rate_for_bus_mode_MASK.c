
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_host {int flags; TYPE_1__* mmc; } ;
struct mmc_ios {scalar_t__ timing; } ;
struct TYPE_2__ {struct mmc_ios ios; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static unsigned int FUNC_0(struct sdhci_host *VAR_4,
          unsigned int VAR_5)
{
 struct mmc_ios VAR_6 = VAR_4->mmc->ios;






 if (VAR_6.timing == VAR_2 ||
     VAR_6.timing == VAR_0 ||
     VAR_6.timing == VAR_1 ||
     VAR_4->flags & VAR_3)
  VAR_5 *= 2;
 return VAR_5;
}

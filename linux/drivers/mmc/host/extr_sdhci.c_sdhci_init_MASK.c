
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_host {int cqe_on; scalar_t__ clock; scalar_t__ v4_mode; struct mmc_host* mmc; } ;
struct mmc_host {int ios; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_ios ) (struct mmc_host*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sdhci_host*) ;
 int FUNC_1 (struct sdhci_host*,int) ;
 int FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (struct mmc_host*,int *) ;

__attribute__((used)) static void FUNC_4(struct sdhci_host *VAR_3, int VAR_4)
{
 struct mmc_host *VAR_5 = VAR_3->mmc;

 if (VAR_4)
  FUNC_1(VAR_3, VAR_1 | VAR_2);
 else
  FUNC_1(VAR_3, VAR_0);

 if (VAR_3->v4_mode)
  FUNC_0(VAR_3);

 FUNC_2(VAR_3);

 VAR_3->cqe_on = 0;

 if (VAR_4) {

  VAR_3->clock = 0;
  VAR_5->ops->set_ios(VAR_5, &VAR_5->ios);
 }
}

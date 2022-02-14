
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_host {TYPE_1__* mmc; int lock; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int parent; } ;


 struct sdhci_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sdhci_host*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct mmc_host *VAR_0, int VAR_1)
{
 struct sdhci_host *VAR_2 = FUNC_0(VAR_0);
 unsigned long VAR_3;

 if (VAR_1)
  FUNC_1(VAR_2->mmc->parent);

 FUNC_4(&VAR_2->lock, VAR_3);
 FUNC_3(VAR_2, VAR_1);
 FUNC_5(&VAR_2->lock, VAR_3);

 if (!VAR_1)
  FUNC_2(VAR_2->mmc->parent);
}

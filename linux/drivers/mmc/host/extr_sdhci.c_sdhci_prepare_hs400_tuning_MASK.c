
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int lock; int flags; } ;
struct mmc_ios {int dummy; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 struct sdhci_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct mmc_host *VAR_1, struct mmc_ios *VAR_2)
{
 struct sdhci_host *VAR_3 = FUNC_0(VAR_1);
 unsigned long VAR_4;

 FUNC_1(&VAR_3->lock, VAR_4);
 VAR_3->flags |= VAR_0;
 FUNC_2(&VAR_3->lock, VAR_4);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int lock; } ;
struct mmc_host {int dummy; } ;


 struct sdhci_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct sdhci_host*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct mmc_host *VAR_0)
{
 struct sdhci_host *VAR_1 = FUNC_0(VAR_0);
 unsigned long VAR_2;

 FUNC_2(&VAR_1->lock, VAR_2);
 FUNC_1(VAR_1, 1);
 FUNC_3(&VAR_1->lock, VAR_2);
}

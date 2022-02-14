
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_host {struct mmc_host* mmc; } ;
struct TYPE_2__ {int vmmc; } ;
struct mmc_host {TYPE_1__ supply; } ;


 int FUNC_0 (struct mmc_host*,int ,unsigned short) ;

__attribute__((used)) static void FUNC_1(struct sdhci_host *VAR_0, unsigned char VAR_1,
     unsigned short VAR_2)
{
 struct mmc_host *VAR_3 = VAR_0->mmc;

 FUNC_0(VAR_3, VAR_3->supply.vmmc, VAR_2);
}

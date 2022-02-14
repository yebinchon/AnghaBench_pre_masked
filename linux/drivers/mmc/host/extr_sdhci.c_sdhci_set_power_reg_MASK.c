
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_host {struct mmc_host* mmc; } ;
struct TYPE_2__ {int vmmc; } ;
struct mmc_host {TYPE_1__ supply; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mmc_host*,int ,unsigned short) ;
 int FUNC_1 (struct sdhci_host*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct sdhci_host *VAR_3, unsigned char VAR_4,
    unsigned short VAR_5)
{
 struct mmc_host *VAR_6 = VAR_3->mmc;

 FUNC_0(VAR_6, VAR_6->supply.vmmc, VAR_5);

 if (VAR_4 != VAR_0)
  FUNC_1(VAR_3, VAR_2, VAR_1);
 else
  FUNC_1(VAR_3, 0, VAR_1);
}

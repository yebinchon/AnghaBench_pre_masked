
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sdhci_host {scalar_t__ pwr; struct mmc_host* mmc; } ;
struct TYPE_2__ {int vmmc; } ;
struct mmc_host {TYPE_1__ supply; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mmc_host*,int ,unsigned short) ;
 int FUNC_2 (struct sdhci_host*,unsigned char,unsigned short) ;

__attribute__((used)) static void FUNC_3(struct sdhci_host *VAR_0, unsigned char VAR_1,
  unsigned short VAR_2)
{
 struct mmc_host *VAR_3 = VAR_0->mmc;
 u8 VAR_4 = VAR_0->pwr;

 FUNC_2(VAR_0, VAR_1, VAR_2);

 if (VAR_0->pwr == VAR_4)
  return;

 if (VAR_0->pwr == 0)
  VAR_2 = 0;

 if (!FUNC_0(VAR_3->supply.vmmc))
  FUNC_1(VAR_3, VAR_3->supply.vmmc, VAR_2);
}

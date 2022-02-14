
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_host {int dummy; } ;
struct mmc_ios {int signal_voltage; } ;
struct TYPE_2__ {int vqmmc; } ;
struct mmc_host {TYPE_1__ supply; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct sdhci_host* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*,struct mmc_ios*) ;
 int FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (struct sdhci_host*,int ) ;

__attribute__((used)) static int FUNC_5(struct mmc_host *VAR_1,
          struct mmc_ios *VAR_2)
{
 struct sdhci_host *VAR_3 = FUNC_1(VAR_1);
 FUNC_3(VAR_3);

 FUNC_4(VAR_3, VAR_2->signal_voltage);






 if (FUNC_0(VAR_1->supply.vqmmc) == -VAR_0)
  return 0;

 return FUNC_2(VAR_1, VAR_2);
}

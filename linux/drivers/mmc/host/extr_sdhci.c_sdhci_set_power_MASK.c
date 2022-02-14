
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdhci_host {TYPE_2__* mmc; } ;
struct TYPE_3__ {int vmmc; } ;
struct TYPE_4__ {TYPE_1__ supply; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sdhci_host*,unsigned char,unsigned short) ;
 int FUNC_2 (struct sdhci_host*,unsigned char,unsigned short) ;

void FUNC_3(struct sdhci_host *VAR_0, unsigned char VAR_1,
       unsigned short VAR_2)
{
 if (FUNC_0(VAR_0->mmc->supply.vmmc))
  FUNC_1(VAR_0, VAR_1, VAR_2);
 else
  FUNC_2(VAR_0, VAR_1, VAR_2);
}

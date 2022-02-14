
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_host {TYPE_1__* mmc; } ;
struct TYPE_2__ {unsigned int f_max; } ;


 unsigned int FUNC_0 (struct sdhci_host*) ;

__attribute__((used)) static unsigned int FUNC_1(struct sdhci_host *VAR_0)
{
 if (VAR_0->mmc->f_max)
  return VAR_0->mmc->f_max;

 return FUNC_0(VAR_0);
}

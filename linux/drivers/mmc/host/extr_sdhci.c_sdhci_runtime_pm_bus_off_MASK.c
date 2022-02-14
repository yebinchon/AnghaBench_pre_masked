
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_host {int bus_on; TYPE_1__* mmc; } ;
struct TYPE_2__ {int parent; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct sdhci_host *VAR_0)
{
 if (!VAR_0->bus_on)
  return;
 VAR_0->bus_on = 0;
 FUNC_0(VAR_0->mmc->parent);
}

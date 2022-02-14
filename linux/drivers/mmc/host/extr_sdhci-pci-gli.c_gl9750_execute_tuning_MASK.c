
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sdhci_host {scalar_t__ tuning_mode; int tuning_err; scalar_t__ tuning_count; TYPE_1__* mmc; } ;
struct TYPE_2__ {scalar_t__ retune_period; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sdhci_host*,int ) ;
 int FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_3(struct sdhci_host *VAR_1, u32 VAR_2)
{
 VAR_1->mmc->retune_period = 0;
 if (VAR_1->tuning_mode == VAR_0)
  VAR_1->mmc->retune_period = VAR_1->tuning_count;

 FUNC_1(VAR_1);
 VAR_1->tuning_err = FUNC_0(VAR_1, VAR_2);
 FUNC_2(VAR_1);

 return 0;
}

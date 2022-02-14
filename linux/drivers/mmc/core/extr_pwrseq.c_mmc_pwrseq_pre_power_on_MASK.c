
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_pwrseq {TYPE_1__* ops; } ;
struct mmc_host {struct mmc_pwrseq* pwrseq; } ;
struct TYPE_2__ {int (* pre_power_on ) (struct mmc_host*) ;} ;


 int FUNC_0 (struct mmc_host*) ;

void FUNC_1(struct mmc_host *VAR_0)
{
 struct mmc_pwrseq *VAR_1 = VAR_0->pwrseq;

 if (VAR_1 && VAR_1->ops->pre_power_on)
  VAR_1->ops->pre_power_on(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {int caps; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* hw_reset ) (struct mmc_host*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_host*) ;

__attribute__((used)) static void FUNC_2(struct mmc_host *VAR_1)
{
 FUNC_0(VAR_1);

 if (!(VAR_1->caps & VAR_0) || !VAR_1->ops->hw_reset)
  return;
 VAR_1->ops->hw_reset(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {TYPE_1__* bus_ops; scalar_t__ bus_dead; int card; } ;
struct TYPE_2__ {int (* sw_reset ) (struct mmc_host*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct mmc_host*) ;

int FUNC_5(struct mmc_host *VAR_2)
{
 int VAR_3;

 if (!VAR_2->card)
  return -VAR_0;

 FUNC_0(VAR_2);
 if (!VAR_2->bus_ops || VAR_2->bus_dead || !VAR_2->bus_ops->sw_reset) {
  FUNC_1(VAR_2);
  return -VAR_1;
 }

 VAR_3 = VAR_2->bus_ops->sw_reset(VAR_2);
 FUNC_1(VAR_2);

 if (VAR_3)
  FUNC_3("%s: tried to SW reset card, got error %d\n",
   FUNC_2(VAR_2), VAR_3);

 return VAR_3;
}

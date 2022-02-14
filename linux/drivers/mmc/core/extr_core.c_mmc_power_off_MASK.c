
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ power_mode; scalar_t__ vdd; scalar_t__ clock; } ;
struct mmc_host {TYPE_1__ ios; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*) ;

void FUNC_3(struct mmc_host *VAR_1)
{
 if (VAR_1->ios.power_mode == VAR_0)
  return;

 FUNC_1(VAR_1);

 VAR_1->ios.clock = 0;
 VAR_1->ios.vdd = 0;

 VAR_1->ios.power_mode = VAR_0;

 FUNC_2(VAR_1);






 FUNC_0(1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ power_mode; int power_delay_ms; int clock; scalar_t__ vdd; } ;
struct mmc_host {TYPE_1__ ios; int f_init; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (struct mmc_host*) ;

void FUNC_7(struct mmc_host *VAR_2, u32 VAR_3)
{
 if (VAR_2->ios.power_mode == VAR_0)
  return;

 FUNC_3(VAR_2);

 VAR_2->ios.vdd = FUNC_0(VAR_3) - 1;
 VAR_2->ios.power_mode = VAR_1;

 FUNC_5(VAR_2);

 FUNC_4(VAR_2);





 FUNC_1(VAR_2->ios.power_delay_ms);

 FUNC_2(VAR_2);

 VAR_2->ios.clock = VAR_2->f_init;

 VAR_2->ios.power_mode = VAR_0;
 FUNC_6(VAR_2);





 FUNC_1(VAR_2->ios.power_delay_ms);
}

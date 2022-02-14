
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* hal_dm_watchdog_in_lps ) (struct adapter*) ;} ;
struct adapter {TYPE_1__ HalFunc; } ;
struct TYPE_4__ {int bFwCurrentInPSMode; } ;


 TYPE_2__* FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*) ;

void FUNC_2(struct adapter *VAR_0)
{
 if (FUNC_0(VAR_0)->bFwCurrentInPSMode == 1) {
  if (VAR_0->HalFunc.hal_dm_watchdog_in_lps)
   VAR_0->HalFunc.hal_dm_watchdog_in_lps(VAR_0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* hal_dm_watchdog ) (struct adapter*) ;} ;
struct adapter {TYPE_1__ HalFunc; } ;


 int FUNC_0 (struct adapter*) ;

void FUNC_1(struct adapter *VAR_0)
{
 if (VAR_0->HalFunc.hal_dm_watchdog)
  VAR_0->HalFunc.hal_dm_watchdog(VAR_0);

}

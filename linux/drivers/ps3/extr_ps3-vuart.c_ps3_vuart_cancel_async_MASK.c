
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ps3_system_bus_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ trigger; } ;
struct TYPE_5__ {TYPE_1__ work; } ;
struct TYPE_6__ {TYPE_2__ rx_list; } ;


 TYPE_3__* FUNC_0 (struct ps3_system_bus_device*) ;

void FUNC_1(struct ps3_system_bus_device *VAR_0)
{
 FUNC_0(VAR_0)->rx_list.work.trigger = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {int dummy; } ;
struct orion_watchdog {unsigned int clk_rate; TYPE_1__* data; scalar_t__ reg; } ;
struct TYPE_2__ {scalar_t__ wdt_counter_offset; } ;


 unsigned int FUNC_0 (scalar_t__) ;
 struct orion_watchdog* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static unsigned int FUNC_2(struct watchdog_device *VAR_0)
{
 struct orion_watchdog *VAR_1 = FUNC_1(VAR_0);
 return FUNC_0(VAR_1->reg + VAR_1->data->wdt_counter_offset) / VAR_1->clk_rate;
}

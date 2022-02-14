
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct watchdog_device {int timeout; int pretimeout; } ;
struct TYPE_5__ {TYPE_3__* info; } ;
struct orion_watchdog {int clk_rate; scalar_t__ reg; TYPE_2__ wdt; TYPE_1__* data; } ;
struct TYPE_6__ {int options; } ;
struct TYPE_4__ {scalar_t__ wdt_counter_offset; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct orion_watchdog* FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_2)
{
 struct orion_watchdog *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_3->clk_rate * VAR_2->timeout,
        VAR_3->reg + VAR_3->data->wdt_counter_offset);
 if (VAR_3->wdt.info->options & VAR_1)
  FUNC_1(VAR_3->clk_rate * (VAR_2->timeout - VAR_2->pretimeout),
         VAR_3->reg + VAR_0);

 return 0;
}

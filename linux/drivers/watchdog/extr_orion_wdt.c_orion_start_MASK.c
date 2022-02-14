
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {int timeout; } ;
struct orion_watchdog {int clk_rate; TYPE_1__* data; scalar_t__ rstout; scalar_t__ reg; } ;
struct TYPE_2__ {int rstout_enable_bit; int wdt_enable_bit; scalar_t__ wdt_counter_offset; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 struct orion_watchdog* FUNC_1 (struct watchdog_device*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_1)
{
 struct orion_watchdog *VAR_2 = FUNC_1(VAR_1);


 FUNC_2(VAR_2->clk_rate * VAR_1->timeout,
        VAR_2->reg + VAR_2->data->wdt_counter_offset);


 FUNC_0(VAR_2->reg + VAR_0, VAR_2->data->wdt_enable_bit,
      VAR_2->data->wdt_enable_bit);


 FUNC_0(VAR_2->rstout, VAR_2->data->rstout_enable_bit,
          VAR_2->data->rstout_enable_bit);

 return 0;
}

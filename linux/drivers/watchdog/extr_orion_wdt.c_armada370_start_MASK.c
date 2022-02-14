
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct watchdog_device {int timeout; } ;
struct orion_watchdog {int clk_rate; scalar_t__ rstout; TYPE_1__* data; scalar_t__ reg; } ;
struct TYPE_2__ {int rstout_enable_bit; int wdt_enable_bit; scalar_t__ wdt_counter_offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 struct orion_watchdog* FUNC_2 (struct watchdog_device*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_3)
{
 struct orion_watchdog *VAR_4 = FUNC_2(VAR_3);
 u32 VAR_5;


 FUNC_3(VAR_4->clk_rate * VAR_3->timeout,
        VAR_4->reg + VAR_4->data->wdt_counter_offset);


 FUNC_0(VAR_4->reg + VAR_0, VAR_2, 0);


 FUNC_0(VAR_4->reg + VAR_1, VAR_4->data->wdt_enable_bit,
      VAR_4->data->wdt_enable_bit);


 VAR_5 = FUNC_1(VAR_4->rstout);
 VAR_5 |= VAR_4->data->rstout_enable_bit;
 FUNC_3(VAR_5, VAR_4->rstout);
 return 0;
}

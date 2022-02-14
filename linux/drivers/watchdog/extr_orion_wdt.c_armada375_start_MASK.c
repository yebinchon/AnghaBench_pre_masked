
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct watchdog_device {int timeout; int pretimeout; } ;
struct TYPE_5__ {TYPE_1__* info; } ;
struct orion_watchdog {int clk_rate; TYPE_3__* data; scalar_t__ rstout_mask; scalar_t__ rstout; scalar_t__ reg; TYPE_2__ wdt; } ;
struct TYPE_6__ {int wdt_enable_bit; int rstout_enable_bit; int rstout_mask_bit; scalar_t__ wdt_counter_offset; } ;
struct TYPE_4__ {int options; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (scalar_t__) ;
 struct orion_watchdog* FUNC_2 (struct watchdog_device*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_6)
{
 struct orion_watchdog *VAR_7 = FUNC_2(VAR_6);
 u32 VAR_8;


 FUNC_3(VAR_7->clk_rate * VAR_6->timeout,
        VAR_7->reg + VAR_7->data->wdt_counter_offset);
 if (VAR_7->wdt.info->options & VAR_4)
  FUNC_3(VAR_7->clk_rate * (VAR_6->timeout - VAR_6->pretimeout),
         VAR_7->reg + VAR_1);


 FUNC_0(VAR_7->reg + VAR_2, VAR_5, 0);


 VAR_8 = VAR_7->data->wdt_enable_bit;
 if (VAR_7->wdt.info->options & VAR_4)
  VAR_8 |= VAR_0;
 FUNC_0(VAR_7->reg + VAR_3, VAR_8, VAR_8);


 VAR_8 = FUNC_1(VAR_7->rstout);
 VAR_8 |= VAR_7->data->rstout_enable_bit;
 FUNC_3(VAR_8, VAR_7->rstout);

 FUNC_0(VAR_7->rstout_mask, VAR_7->data->rstout_mask_bit, 0);
 return 0;
}

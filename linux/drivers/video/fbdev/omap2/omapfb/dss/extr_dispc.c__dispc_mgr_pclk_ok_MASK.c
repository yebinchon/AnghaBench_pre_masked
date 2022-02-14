
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
struct TYPE_4__ {TYPE_1__* feat; } ;
struct TYPE_3__ {unsigned long max_lcd_pclk; unsigned long max_tv_pclk; } ;


 TYPE_2__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(enum omap_channel VAR_1,
  unsigned long VAR_2)
{
 if (FUNC_0(VAR_1))
  return VAR_2 <= VAR_0.feat->max_lcd_pclk ? 1 : 0;
 else
  return VAR_2 <= VAR_0.feat->max_tv_pclk ? 1 : 0;
}

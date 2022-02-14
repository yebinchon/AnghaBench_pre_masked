
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct orion_watchdog {TYPE_1__* data; scalar_t__ reg; scalar_t__ rstout; scalar_t__ rstout_mask; } ;
struct TYPE_2__ {int rstout_mask_bit; int rstout_enable_bit; int wdt_enable_bit; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct orion_watchdog *VAR_1)
{
 bool VAR_2, VAR_3, VAR_4;

 VAR_2 = FUNC_0(VAR_1->rstout_mask) & VAR_1->data->rstout_mask_bit;
 VAR_3 = FUNC_0(VAR_1->rstout) & VAR_1->data->rstout_enable_bit;
 VAR_4 = FUNC_0(VAR_1->reg + VAR_0) & VAR_1->data->wdt_enable_bit;

 return !VAR_2 && VAR_3 && VAR_4;
}

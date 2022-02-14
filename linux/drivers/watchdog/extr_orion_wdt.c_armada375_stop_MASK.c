
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct watchdog_device {TYPE_1__* info; } ;
struct orion_watchdog {scalar_t__ reg; TYPE_2__* data; int rstout; scalar_t__ rstout_mask; } ;
struct TYPE_4__ {int wdt_enable_bit; int rstout_enable_bit; int rstout_mask_bit; } ;
struct TYPE_3__ {int options; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (int ) ;
 struct orion_watchdog* FUNC_2 (struct watchdog_device*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_3)
{
 struct orion_watchdog *VAR_4 = FUNC_2(VAR_3);
 u32 VAR_5, VAR_6;


 FUNC_0(VAR_4->rstout_mask, VAR_4->data->rstout_mask_bit,
        VAR_4->data->rstout_mask_bit);
 VAR_5 = FUNC_1(VAR_4->rstout);
 VAR_5 &= ~VAR_4->data->rstout_enable_bit;
 FUNC_3(VAR_5, VAR_4->rstout);


 VAR_6 = VAR_4->data->wdt_enable_bit;
 if (VAR_3->info->options & VAR_2)
  VAR_6 |= VAR_0;
 FUNC_0(VAR_4->reg + VAR_1, VAR_6, 0);

 return 0;
}

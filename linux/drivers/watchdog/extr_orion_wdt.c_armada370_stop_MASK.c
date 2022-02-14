
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct watchdog_device {int dummy; } ;
struct orion_watchdog {TYPE_1__* data; scalar_t__ reg; int rstout; } ;
struct TYPE_2__ {int wdt_enable_bit; int rstout_enable_bit; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (int ) ;
 struct orion_watchdog* FUNC_2 (struct watchdog_device*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_1)
{
 struct orion_watchdog *VAR_2 = FUNC_2(VAR_1);
 u32 VAR_3;


 VAR_3 = FUNC_1(VAR_2->rstout);
 VAR_3 &= ~VAR_2->data->rstout_enable_bit;
 FUNC_3(VAR_3, VAR_2->rstout);


 FUNC_0(VAR_2->reg + VAR_0, VAR_2->data->wdt_enable_bit, 0);

 return 0;
}

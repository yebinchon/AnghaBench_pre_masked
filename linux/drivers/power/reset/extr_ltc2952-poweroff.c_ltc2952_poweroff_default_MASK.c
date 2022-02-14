
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int function; } ;
struct ltc2952_poweroff {long wde_interval; TYPE_1__ timer_wde; TYPE_1__ timer_trigger; int trigger_delay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int,long) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct ltc2952_poweroff *VAR_4)
{
 VAR_4->wde_interval = 300L * 1E6L;
 VAR_4->trigger_delay = FUNC_1(2, 500L*1E6L);

 FUNC_0(&VAR_4->timer_trigger, VAR_0, VAR_1);
 VAR_4->timer_trigger.function = VAR_2;

 FUNC_0(&VAR_4->timer_wde, VAR_0, VAR_1);
 VAR_4->timer_wde.function = VAR_3;
}

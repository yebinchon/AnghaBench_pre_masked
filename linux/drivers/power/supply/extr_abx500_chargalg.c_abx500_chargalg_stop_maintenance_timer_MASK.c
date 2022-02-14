
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int maintenance_timer_expired; } ;
struct abx500_chargalg {TYPE_1__ events; int maintenance_timer; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct abx500_chargalg *VAR_0)
{
 if (FUNC_0(&VAR_0->maintenance_timer) >= 0)
  VAR_0->events.maintenance_timer_expired = 0;
}

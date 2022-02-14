
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int safety_timer_expired; } ;
struct abx500_chargalg {TYPE_1__ events; int safety_timer; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct abx500_chargalg *VAR_0)
{
 if (FUNC_0(&VAR_0->safety_timer) >= 0)
  VAR_0->events.safety_timer_expired = 0;
}

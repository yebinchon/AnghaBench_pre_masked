
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {int timer; int ticks; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_3)
{
 if (!FUNC_0(&VAR_1.ticks)) {
  FUNC_1();
  FUNC_2(&VAR_1.timer, VAR_2 + VAR_0);
 } else
  FUNC_3("watchdog will restart system\n");
}

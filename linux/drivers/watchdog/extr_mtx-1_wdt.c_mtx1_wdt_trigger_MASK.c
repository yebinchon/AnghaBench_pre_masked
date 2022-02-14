
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {int gstate; int lock; int stop; int timer; scalar_t__ queue; int gpiod; scalar_t__ running; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_4)
{
 FUNC_3(&VAR_2.lock);
 if (VAR_2.running)
  VAR_3--;


 VAR_2.gstate = !VAR_2.gstate;
 FUNC_1(VAR_2.gpiod, VAR_2.gstate);

 if (VAR_2.queue && VAR_3)
  FUNC_2(&VAR_2.timer, VAR_1 + VAR_0);
 else
  FUNC_0(&VAR_2.stop);
 FUNC_4(&VAR_2.lock);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int a_bidl_adis_tmout; int lock; TYPE_1__* otg; int protocol; } ;
struct ci_hdrc {TYPE_2__ fsm; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ci_hdrc*) ;
 int FUNC_1 (struct ci_hdrc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ci_hdrc *VAR_4)
{
 if (!FUNC_1(VAR_4))
  return;

 FUNC_2(&VAR_4->fsm.lock);
 if (VAR_4->fsm.otg->state == VAR_0) {
  VAR_4->fsm.a_bidl_adis_tmout = 1;
  FUNC_0(VAR_4);
 } else if (VAR_4->fsm.otg->state == VAR_1) {
  VAR_4->fsm.protocol = VAR_3;
  VAR_4->fsm.otg->state = VAR_2;
 }
 FUNC_3(&VAR_4->fsm.lock);
}

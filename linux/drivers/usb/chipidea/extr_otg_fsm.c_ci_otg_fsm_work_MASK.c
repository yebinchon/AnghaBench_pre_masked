
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* otg; scalar_t__ power_up; scalar_t__ b_sess_vld; scalar_t__ id; } ;
struct ci_hdrc {int id_event; int dev; TYPE_2__ fsm; int driver; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ci_hdrc*) ;
 int FUNC_1 (struct ci_hdrc*,int ,int,int ) ;
 int FUNC_2 (struct ci_hdrc*,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct ci_hdrc *VAR_8)
{




 if (VAR_8->fsm.id && !(VAR_8->driver) &&
  VAR_8->fsm.otg->state < VAR_4)
  return 0;

 FUNC_4(VAR_8->dev);
 if (FUNC_3(&VAR_8->fsm)) {
  if (VAR_8->fsm.otg->state == VAR_4) {
   if ((VAR_8->fsm.id) || (VAR_8->id_event) ||
      (VAR_8->fsm.power_up)) {
    FUNC_0(VAR_8);
   } else {

    FUNC_1(VAR_8, VAR_0, VAR_7 |
        VAR_6, 0);
    FUNC_2(VAR_8, VAR_2, VAR_2);
    FUNC_2(VAR_8, VAR_1, VAR_1);
   }
   if (VAR_8->id_event)
    VAR_8->id_event = 0;
  } else if (VAR_8->fsm.otg->state == VAR_5) {
   if (VAR_8->fsm.b_sess_vld) {
    VAR_8->fsm.power_up = 0;




    FUNC_0(VAR_8);
   }
  } else if (VAR_8->fsm.otg->state == VAR_3) {
   FUNC_5(VAR_8->dev);
   FUNC_6(VAR_8->dev);
   return 0;
  }
 }
 FUNC_7(VAR_8->dev);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct otg_fsm {int b_conn; int a_bus_req; int b_sess_vld; int a_bus_suspend; int a_conn; int b_bus_suspend; int b_bus_req; TYPE_1__* otg; } ;
struct TYPE_4__ {int is_a_peripheral; } ;
struct ci_hdrc {TYPE_2__ gadget; int driver; struct otg_fsm fsm; } ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ci_hdrc*,int ) ;
 int FUNC_1 (struct ci_hdrc*,int ) ;
 int FUNC_2 (struct ci_hdrc*) ;
 int FUNC_3 (struct ci_hdrc*,int ,int ) ;
 int FUNC_4 (struct ci_hdrc*) ;
 int FUNC_5 (struct ci_hdrc*,int ) ;

__attribute__((used)) static void FUNC_6(struct ci_hdrc *VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11;
 struct otg_fsm *VAR_12 = &VAR_8->fsm;

 VAR_9 = FUNC_4(VAR_8);
 VAR_10 = FUNC_5(VAR_8, VAR_3);
 VAR_11 = FUNC_3(VAR_8, VAR_2, VAR_4);

 switch (VAR_8->fsm.otg->state) {
 case 132:
  if (VAR_11) {
   VAR_12->b_conn = 1;
   VAR_12->a_bus_req = 1;
   FUNC_2(VAR_8);
  }
  break;
 case 130:
  if (VAR_10 && (VAR_9 & VAR_5) && VAR_11) {
   VAR_12->b_sess_vld = 1;
   FUNC_2(VAR_8);
  }
  break;
 case 129:
  if ((VAR_9 & VAR_6) && VAR_11 && VAR_10) {
   FUNC_0(VAR_8, VAR_1);
  } else if (VAR_9 & VAR_5) {
   FUNC_1(VAR_8, VAR_1);
   if (VAR_12->a_bus_suspend == 1)
    VAR_12->a_bus_suspend = 0;
  }
  break;
 case 131:
  if ((VAR_9 & VAR_5) && !VAR_11) {
   VAR_12->a_conn = 0;
   VAR_12->b_bus_req = 0;
   FUNC_2(VAR_8);
  }
  break;
 case 134:
  if (VAR_9 & VAR_6) {
    VAR_12->b_bus_suspend = 1;





    FUNC_0(VAR_8, VAR_0);
  }

  if (VAR_9 & VAR_7)
   FUNC_1(VAR_8, VAR_0);

  if (VAR_9 & VAR_5) {
   if (VAR_12->b_bus_suspend == 1) {
    FUNC_1(VAR_8, VAR_0);
    VAR_12->b_bus_suspend = 0;
   }
  }
  break;
 case 133:
  if ((VAR_9 & VAR_5) && !VAR_11) {
   VAR_12->b_conn = 0;


   if (VAR_8->driver) {

    VAR_8->gadget.is_a_peripheral = 1;
   }
   FUNC_2(VAR_8);
  }
  break;
 case 135:
  if ((VAR_9 & VAR_5) && !VAR_11) {
   VAR_12->b_conn = 0;
   FUNC_2(VAR_8);
  }
  break;
 case 128:
  if ((VAR_9 & VAR_5) && VAR_11) {
   VAR_12->a_conn = 1;
   FUNC_2(VAR_8);
  }
  break;
 default:
  break;
 }
}

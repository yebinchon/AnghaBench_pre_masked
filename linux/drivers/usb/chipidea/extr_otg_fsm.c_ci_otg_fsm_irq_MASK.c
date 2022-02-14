
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct otg_fsm {int id; int a_srp_det; int a_bus_req; int b_sess_vld; int a_vbus_vld; scalar_t__ b_conn; scalar_t__ b_ssend_srp; scalar_t__ a_bus_drop; } ;
struct ci_hdrc {int id_event; struct otg_fsm fsm; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct ci_hdrc*,int ) ;
 int FUNC_1 (struct ci_hdrc*,int ) ;
 int FUNC_2 (struct ci_hdrc*) ;
 int FUNC_3 (struct ci_hdrc*) ;
 int FUNC_4 (struct ci_hdrc*,int ) ;
 int FUNC_5 (struct ci_hdrc*,int,int) ;

irqreturn_t FUNC_6(struct ci_hdrc *VAR_12)
{
 irqreturn_t VAR_13 = VAR_3;
 u32 VAR_14, VAR_15 = 0;
 struct otg_fsm *VAR_16 = &VAR_12->fsm;

 VAR_14 = FUNC_4(VAR_12, ~0);
 VAR_15 = VAR_14 & VAR_11 & (VAR_14 >> 8);
 VAR_16->id = (VAR_14 & VAR_9) ? 1 : 0;

 if (VAR_15) {
  if (VAR_15 & VAR_8) {
   FUNC_5(VAR_12, VAR_8, VAR_8);
   VAR_16->a_srp_det = 1;
   VAR_16->a_bus_drop = 0;
  } else if (VAR_15 & VAR_10) {
   FUNC_5(VAR_12, VAR_10, VAR_10);
   if (VAR_16->id == 0) {
    VAR_16->a_bus_drop = 0;
    VAR_16->a_bus_req = 1;
    VAR_12->id_event = 1;
   }
  } else if (VAR_15 & VAR_7) {
   FUNC_5(VAR_12, VAR_7, VAR_7);
   if (VAR_14 & VAR_6) {
    VAR_16->b_sess_vld = 1;
    FUNC_1(VAR_12, VAR_1);
    FUNC_1(VAR_12, VAR_0);
    VAR_16->b_ssend_srp = 0;
   } else {
    VAR_16->b_sess_vld = 0;
    if (VAR_16->id)
     FUNC_0(VAR_12, VAR_1);
   }
  } else if (VAR_15 & VAR_5) {
   FUNC_5(VAR_12, VAR_5, VAR_5);
   if (VAR_14 & VAR_4) {
    VAR_16->a_vbus_vld = 1;
   } else {
    VAR_16->a_vbus_vld = 0;
    VAR_16->b_conn = 0;
   }
  }
  FUNC_3(VAR_12);
  return VAR_2;
 }

 FUNC_2(VAR_12);

 return VAR_13;
}

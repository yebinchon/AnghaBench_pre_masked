
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mv_otg_ctrl {int a_clr_err; int a_bus_drop; int id; int a_bus_req; int a_sess_vld; int b_conn; int a_vbus_vld; int a_wait_bcon_timeout; int a_srp_det; int b_sess_vld; } ;
struct TYPE_4__ {TYPE_1__* otg; } ;
struct mv_otg {TYPE_2__ phy; struct mv_otg_ctrl otg_ctrl; } ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct mv_otg*,int ) ;

__attribute__((used)) static void FUNC_1(struct mv_otg *VAR_1)
{
 struct mv_otg_ctrl *VAR_2 = &VAR_1->otg_ctrl;
 int VAR_3 = VAR_1->phy.otg->state;

 switch (VAR_3) {
 case 128:
  VAR_1->phy.otg->state = 130;

 case 130:
  if (VAR_2->id == 0)
   VAR_1->phy.otg->state = 135;
  else if (VAR_2->b_sess_vld)
   VAR_1->phy.otg->state = 129;
  break;
 case 129:
  if (!VAR_2->b_sess_vld || VAR_2->id == 0)
   VAR_1->phy.otg->state = 130;
  break;
 case 135:
  if (VAR_2->id)
   VAR_1->phy.otg->state = 130;
  else if (!(VAR_2->a_bus_drop) &&
    (VAR_2->a_bus_req || VAR_2->a_srp_det))
   VAR_1->phy.otg->state = 131;
  break;
 case 131:
  if (VAR_2->a_vbus_vld)
   VAR_1->phy.otg->state = 133;
  break;
 case 133:
  if (VAR_2->id || VAR_2->a_bus_drop
      || VAR_2->a_wait_bcon_timeout) {
   FUNC_0(VAR_1, VAR_0);
   VAR_1->otg_ctrl.a_wait_bcon_timeout = 0;
   VAR_1->phy.otg->state = 132;
   VAR_2->a_bus_req = 0;
  } else if (!VAR_2->a_vbus_vld) {
   FUNC_0(VAR_1, VAR_0);
   VAR_1->otg_ctrl.a_wait_bcon_timeout = 0;
   VAR_1->phy.otg->state = 134;
  } else if (VAR_2->b_conn) {
   FUNC_0(VAR_1, VAR_0);
   VAR_1->otg_ctrl.a_wait_bcon_timeout = 0;
   VAR_1->phy.otg->state = 136;
  }
  break;
 case 136:
  if (VAR_2->id || !VAR_2->b_conn
      || VAR_2->a_bus_drop)
   VAR_1->phy.otg->state = 133;
  else if (!VAR_2->a_vbus_vld)
   VAR_1->phy.otg->state = 134;
  break;
 case 132:
  if (VAR_2->id
      || (!VAR_2->b_conn && VAR_2->a_sess_vld)
      || VAR_2->a_bus_req)
   VAR_1->phy.otg->state = 135;
  break;
 case 134:
  if (VAR_2->id || VAR_2->a_clr_err
      || VAR_2->a_bus_drop) {
   VAR_2->a_clr_err = 0;
   VAR_1->phy.otg->state = 132;
  }
  break;
 default:
  break;
 }
}

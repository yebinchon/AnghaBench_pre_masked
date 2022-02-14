
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct otg_fsm {int state_changed; int id; int lock; int a_clr_err; int a_bus_drop; int a_wait_vfall_tmout; int a_vbus_vld; int b_bus_suspend; int a_bidl_adis_tmout; int a_aidl_bdis_tmout; int b_bus_resume; int a_bus_req; TYPE_3__* otg; int b_conn; int a_suspend_req_inf; int a_wait_bcon_tmout; int a_wait_vrise_tmout; int power_up; int adp_change; int a_srp_det; int test_device; int a_conn; int b_bus_req; int b_sess_vld; int b_ase0_brst_tmout; int a_bus_resume; int a_bus_suspend; int b_srp_done; int b_se0_srp; int b_ssend_srp; } ;
typedef enum usb_otg_state { ____Placeholder_usb_otg_state } usb_otg_state ;
struct TYPE_6__ {int state; TYPE_2__* host; TYPE_1__* gadget; } ;
struct TYPE_5__ {int b_hnp_enable; } ;
struct TYPE_4__ {int b_hnp_enable; } ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct otg_fsm*,int const) ;

int FUNC_4(struct otg_fsm *VAR_0)
{
 enum usb_otg_state VAR_1;

 FUNC_1(&VAR_0->lock);

 VAR_1 = VAR_0->otg->state;
 VAR_0->state_changed = 0;


 switch (VAR_1) {
 case 128:
  FUNC_0("fsm->id = %d\n", VAR_0->id);
  if (VAR_0->id)
   FUNC_3(VAR_0, 132);
  else
   FUNC_3(VAR_0, 140);
  break;
 case 132:
  if (!VAR_0->id)
   FUNC_3(VAR_0, 140);
  else if (VAR_0->b_sess_vld && VAR_0->otg->gadget)
   FUNC_3(VAR_0, 131);
  else if ((VAR_0->b_bus_req || VAR_0->adp_change || VAR_0->power_up) &&
    VAR_0->b_ssend_srp && VAR_0->b_se0_srp)
   FUNC_3(VAR_0, 130);
  break;
 case 130:
  if (!VAR_0->id || VAR_0->b_srp_done)
   FUNC_3(VAR_0, 132);
  break;
 case 131:
  if (!VAR_0->id || !VAR_0->b_sess_vld)
   FUNC_3(VAR_0, 132);
  else if (VAR_0->b_bus_req && VAR_0->otg->
    gadget->b_hnp_enable && VAR_0->a_bus_suspend)
   FUNC_3(VAR_0, 129);
  break;
 case 129:
  if (VAR_0->a_conn)
   FUNC_3(VAR_0, 133);
  else if (!VAR_0->id || !VAR_0->b_sess_vld)
   FUNC_3(VAR_0, 132);
  else if (VAR_0->a_bus_resume || VAR_0->b_ase0_brst_tmout) {
   VAR_0->b_ase0_brst_tmout = 0;
   FUNC_3(VAR_0, 131);
  }
  break;
 case 133:
  if (!VAR_0->id || !VAR_0->b_sess_vld)
   FUNC_3(VAR_0, 132);
  else if (!VAR_0->b_bus_req || !VAR_0->a_conn || VAR_0->test_device)
   FUNC_3(VAR_0, 131);
  break;
 case 140:
  if (VAR_0->id)
   FUNC_3(VAR_0, 132);
  else if (!VAR_0->a_bus_drop && (VAR_0->a_bus_req ||
     VAR_0->a_srp_det || VAR_0->adp_change || VAR_0->power_up))
   FUNC_3(VAR_0, 134);
  break;
 case 134:
  if (VAR_0->a_vbus_vld)
   FUNC_3(VAR_0, 136);
  else if (VAR_0->id || VAR_0->a_bus_drop ||
    VAR_0->a_wait_vrise_tmout)
   FUNC_3(VAR_0, 135);
  break;
 case 136:
  if (!VAR_0->a_vbus_vld)
   FUNC_3(VAR_0, 137);
  else if (VAR_0->b_conn)
   FUNC_3(VAR_0, 141);
  else if (VAR_0->id || VAR_0->a_bus_drop || VAR_0->a_wait_bcon_tmout)
   FUNC_3(VAR_0, 135);
  break;
 case 141:
  if (VAR_0->id || VAR_0->a_bus_drop)
   FUNC_3(VAR_0, 135);
  else if ((!VAR_0->a_bus_req || VAR_0->a_suspend_req_inf) &&
    VAR_0->otg->host->b_hnp_enable)
   FUNC_3(VAR_0, 138);
  else if (!VAR_0->b_conn)
   FUNC_3(VAR_0, 136);
  else if (!VAR_0->a_vbus_vld)
   FUNC_3(VAR_0, 137);
  break;
 case 138:
  if (!VAR_0->b_conn && VAR_0->otg->host->b_hnp_enable)
   FUNC_3(VAR_0, 139);
  else if (!VAR_0->b_conn && !VAR_0->otg->host->b_hnp_enable)
   FUNC_3(VAR_0, 136);
  else if (VAR_0->a_bus_req || VAR_0->b_bus_resume)
   FUNC_3(VAR_0, 141);
  else if (VAR_0->id || VAR_0->a_bus_drop || VAR_0->a_aidl_bdis_tmout)
   FUNC_3(VAR_0, 135);
  else if (!VAR_0->a_vbus_vld)
   FUNC_3(VAR_0, 137);
  break;
 case 139:
  if (VAR_0->id || VAR_0->a_bus_drop)
   FUNC_3(VAR_0, 135);
  else if (VAR_0->a_bidl_adis_tmout || VAR_0->b_bus_suspend)
   FUNC_3(VAR_0, 136);
  else if (!VAR_0->a_vbus_vld)
   FUNC_3(VAR_0, 137);
  break;
 case 135:
  if (VAR_0->a_wait_vfall_tmout)
   FUNC_3(VAR_0, 140);
  break;
 case 137:
  if (VAR_0->id || VAR_0->a_bus_drop || VAR_0->a_clr_err)
   FUNC_3(VAR_0, 135);
  break;
 default:
  break;
 }
 FUNC_2(&VAR_0->lock);

 FUNC_0("quit statemachine, changed = %d\n", VAR_0->state_changed);
 return VAR_0->state_changed;
}

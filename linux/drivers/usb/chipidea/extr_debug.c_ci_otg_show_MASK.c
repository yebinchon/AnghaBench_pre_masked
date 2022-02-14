
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct ci_hdrc* private; } ;
struct otg_fsm {int protocol; int id; int adp_prb; int loc_sof; int loc_conn; int drv_vbus; int b_srp_done; int b_sess_vld; int b_ssend_srp; int b_se0_srp; int b_bus_suspend; int b_bus_req; int a_conn; int a_bus_suspend; int a_bus_resume; int power_up; int adp_change; int b_conn; int a_vbus_vld; int a_srp_det; int a_bus_req; int a_bus_drop; } ;
struct TYPE_2__ {int state; } ;
struct ci_hdrc {TYPE_1__ otg; struct otg_fsm fsm; } ;


 int FUNC_0 (struct ci_hdrc*) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct ci_hdrc *VAR_2 = VAR_0->private;
 struct otg_fsm *VAR_3;

 if (!VAR_2 || !FUNC_0(VAR_2))
  return 0;

 VAR_3 = &VAR_2->fsm;


 FUNC_1(VAR_0, "OTG state: %s\n\n",
   FUNC_2(VAR_2->otg.state));


 FUNC_1(VAR_0, "a_bus_drop: %d\n", VAR_3->a_bus_drop);

 FUNC_1(VAR_0, "a_bus_req: %d\n", VAR_3->a_bus_req);

 FUNC_1(VAR_0, "a_srp_det: %d\n", VAR_3->a_srp_det);

 FUNC_1(VAR_0, "a_vbus_vld: %d\n", VAR_3->a_vbus_vld);

 FUNC_1(VAR_0, "b_conn: %d\n", VAR_3->b_conn);

 FUNC_1(VAR_0, "adp_change: %d\n", VAR_3->adp_change);

 FUNC_1(VAR_0, "power_up: %d\n", VAR_3->power_up);

 FUNC_1(VAR_0, "a_bus_resume: %d\n", VAR_3->a_bus_resume);

 FUNC_1(VAR_0, "a_bus_suspend: %d\n", VAR_3->a_bus_suspend);

 FUNC_1(VAR_0, "a_conn: %d\n", VAR_3->a_conn);

 FUNC_1(VAR_0, "b_bus_req: %d\n", VAR_3->b_bus_req);

 FUNC_1(VAR_0, "b_bus_suspend: %d\n", VAR_3->b_bus_suspend);

 FUNC_1(VAR_0, "b_se0_srp: %d\n", VAR_3->b_se0_srp);

 FUNC_1(VAR_0, "b_ssend_srp: %d\n", VAR_3->b_ssend_srp);

 FUNC_1(VAR_0, "b_sess_vld: %d\n", VAR_3->b_sess_vld);

 FUNC_1(VAR_0, "b_srp_done: %d\n", VAR_3->b_srp_done);

 FUNC_1(VAR_0, "drv_vbus: %d\n", VAR_3->drv_vbus);

 FUNC_1(VAR_0, "loc_conn: %d\n", VAR_3->loc_conn);

 FUNC_1(VAR_0, "loc_sof: %d\n", VAR_3->loc_sof);

 FUNC_1(VAR_0, "adp_prb: %d\n", VAR_3->adp_prb);

 FUNC_1(VAR_0, "id: %d\n", VAR_3->id);

 FUNC_1(VAR_0, "protocol: %d\n", VAR_3->protocol);

 return 0;
}

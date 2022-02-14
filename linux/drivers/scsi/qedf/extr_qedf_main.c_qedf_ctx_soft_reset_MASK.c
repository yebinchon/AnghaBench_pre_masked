
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qedf_ctx {int link_update; int link_update_wq; int dbg_ctx; scalar_t__ vlan_id; int link_state; int cdev; int num_offloads; } ;
struct qed_link_output {int link_up; } ;
struct fc_lport {scalar_t__ vport; } ;
struct TYPE_4__ {TYPE_1__* common; } ;
struct TYPE_3__ {int (* get_link ) (int ,struct qed_link_output*) ;} ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 struct qedf_ctx* FUNC_6 (struct fc_lport*) ;
 int FUNC_7 (int) ;
 TYPE_2__* VAR_3 ;
 int FUNC_8 (struct qedf_ctx*) ;
 int FUNC_9 (int ,int *,int ) ;
 int FUNC_10 (int ,struct qed_link_output*) ;

void FUNC_11(struct fc_lport *VAR_4)
{
 struct qedf_ctx *VAR_5;
 struct qed_link_output VAR_6;

 if (VAR_4->vport) {
  FUNC_0(((void*)0), "Cannot issue host reset on NPIV port.\n");
  return;
 }

 VAR_5 = FUNC_6(VAR_4);


 FUNC_4(&VAR_5->link_state, VAR_0);
 FUNC_1(&VAR_5->dbg_ctx, VAR_2,
    "Queuing link down work.\n");
 FUNC_9(VAR_5->link_update_wq, &VAR_5->link_update,
     0);

 if (FUNC_8(VAR_5) == 0) {
  FUNC_0(&VAR_5->dbg_ctx, "Could not upload all sessions.\n");
  FUNC_2(FUNC_3(&VAR_5->num_offloads));
 }


 VAR_3->common->get_link(VAR_5->cdev, &VAR_6);

 if (!VAR_6.link_up) {
  FUNC_1(&VAR_5->dbg_ctx, VAR_2,
     "Physical link is not up.\n");
  return;
 }

 FUNC_5(&VAR_5->link_update);
 FUNC_7(500);

 FUNC_4(&VAR_5->link_state, VAR_1);
 VAR_5->vlan_id = 0;
 FUNC_1(&VAR_5->dbg_ctx, VAR_2,
    "Queue link up work.\n");
 FUNC_9(VAR_5->link_update_wq, &VAR_5->link_update,
     0);
}

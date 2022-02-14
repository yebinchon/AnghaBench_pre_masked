
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedf_ctx {int link_update; int link_update_wq; scalar_t__ vlan_id; int link_down_tmo_valid; int dbg_ctx; int dcbx; int link_state; int link_recovery; int flags; } ;
struct qed_link_output {int speed; scalar_t__ link_up; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int ,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct qedf_ctx*,struct qed_link_output*) ;
 int FUNC_6 (int ,int *,int) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(void *VAR_9, struct qed_link_output *VAR_10)
{
 struct qedf_ctx *VAR_11 = (struct qedf_ctx *)VAR_9;





 if (FUNC_7(VAR_6, &VAR_11->flags)) {
  FUNC_0(&VAR_11->dbg_ctx,
    "Ignore link update, driver getting unload.\n");
  return;
 }

 if (VAR_10->link_up) {
  if (FUNC_2(&VAR_11->link_state) == VAR_4) {
   FUNC_1((&VAR_11->dbg_ctx), VAR_5,
       "Ignoring link up event as link is already up.\n");
   return;
  }
  FUNC_0(&(VAR_11->dbg_ctx), "LINK UP (%d GB/s).\n",
      VAR_10->speed / 1000);


  FUNC_4(&VAR_11->link_update);

  FUNC_3(&VAR_11->link_state, VAR_4);
  FUNC_5(VAR_11, VAR_10);

  if (FUNC_2(&VAR_11->dcbx) == VAR_1 ||
      VAR_7) {
   FUNC_1(&(VAR_11->dbg_ctx), VAR_5,
        "DCBx done.\n");
   if (FUNC_2(&VAR_11->link_down_tmo_valid) > 0)
    FUNC_6(VAR_11->link_update_wq,
        &VAR_11->link_recovery, 0);
   else
    FUNC_6(VAR_11->link_update_wq,
        &VAR_11->link_update, 0);
   FUNC_3(&VAR_11->link_down_tmo_valid, 0);
  }

 } else {
  FUNC_0(&(VAR_11->dbg_ctx), "LINK DOWN.\n");

  FUNC_3(&VAR_11->link_state, VAR_3);
  FUNC_3(&VAR_11->dcbx, VAR_2);




  if (VAR_8 > 0) {
   FUNC_1(&(VAR_11->dbg_ctx), VAR_5,
       "Starting link down tmo.\n");
   FUNC_3(&VAR_11->link_down_tmo_valid, 1);
  }
  VAR_11->vlan_id = 0;
  FUNC_5(VAR_11, VAR_10);
  FUNC_6(VAR_11->link_update_wq, &VAR_11->link_update,
      VAR_8 * VAR_0);
 }
}

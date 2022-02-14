
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qedf_ctx {int prio; int link_down_tmo_valid; int link_update; int link_update_wq; int link_recovery; int link_state; int dbg_ctx; int dcbx; } ;
struct TYPE_3__ {int fcoe; } ;
struct TYPE_4__ {TYPE_1__ app_prio; int valid; int enabled; } ;
struct qed_dcbx_get {TYPE_2__ operational; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int ,int) ;
 int FUNC_1 (int *,int ,char*,...) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_6, struct qed_dcbx_get *VAR_7, u32 VAR_8)
{
 struct qedf_ctx *VAR_9 = (struct qedf_ctx *)VAR_6;
 u8 VAR_10;

 FUNC_0(&(VAR_9->dbg_ctx), "DCBx event valid=%d enabled=%d fcoe "
     "prio=%d.\n", VAR_7->operational.valid, VAR_7->operational.enabled,
     VAR_7->operational.app_prio.fcoe);

 if (VAR_7->operational.enabled && VAR_7->operational.valid) {

  if (FUNC_2(&VAR_9->dcbx) == VAR_0) {
   FUNC_1(&(VAR_9->dbg_ctx), VAR_3,
       "DCBX already set on link up.\n");
   return;
  }

  FUNC_3(&VAR_9->dcbx, VAR_0);
  VAR_10 = VAR_7->operational.app_prio.fcoe;
  if (VAR_5 > -1)
   VAR_9->prio = VAR_5;
  else if (VAR_10 > 7) {
   FUNC_1(&(VAR_9->dbg_ctx), VAR_3,
       "FIP/FCoE prio %d out of range, setting to %d.\n",
       VAR_10, VAR_1);
   VAR_9->prio = VAR_1;
  } else
   VAR_9->prio = VAR_10;

  if (FUNC_2(&VAR_9->link_state) == VAR_2 &&
      !VAR_4) {
   if (FUNC_2(&VAR_9->link_down_tmo_valid) > 0)
    FUNC_4(VAR_9->link_update_wq,
        &VAR_9->link_recovery, 0);
   else
    FUNC_4(VAR_9->link_update_wq,
        &VAR_9->link_update, 0);
   FUNC_3(&VAR_9->link_down_tmo_valid, 0);
  }
 }

}

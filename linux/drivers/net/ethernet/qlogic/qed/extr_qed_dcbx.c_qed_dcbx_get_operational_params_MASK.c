
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct qed_hwfn {TYPE_2__* p_dcbx_info; } ;
struct qed_dcbx_results {int dummy; } ;
struct qed_dcbx_operational_params {int enabled; int valid; int ieee; int cee; int local; int err; int app_prio; int params; } ;
struct qed_dcbx_get {struct qed_dcbx_operational_params operational; } ;
struct TYPE_6__ {int flags; int app_pri_tbl; } ;
struct dcbx_features {TYPE_3__ app; int pfc; int ets; } ;
struct TYPE_4__ {struct dcbx_features features; int flags; } ;
struct TYPE_5__ {struct qed_dcbx_results results; TYPE_1__ operational; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct qed_hwfn*,int ,char*,...) ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct qed_hwfn*,TYPE_3__*,int ,int *,int ,int *,int) ;
 int FUNC_3 (struct qed_hwfn*,int *,struct qed_dcbx_results*) ;

__attribute__((used)) static void
FUNC_4(struct qed_hwfn *VAR_7,
    struct qed_dcbx_get *VAR_8)
{
 struct qed_dcbx_operational_params *VAR_9;
 struct qed_dcbx_results *VAR_10;
 struct dcbx_features *VAR_11;
 bool VAR_12, VAR_13;
 u32 VAR_14;
 bool VAR_15;

 VAR_14 = VAR_7->p_dcbx_info->operational.flags;




 VAR_9 = &VAR_8->operational;
 VAR_12 = !!(FUNC_1(VAR_14, VAR_1) !=
       VAR_3);
 if (!VAR_12) {
  VAR_9->enabled = VAR_12;
  VAR_9->valid = 0;
  FUNC_0(VAR_7, VAR_6, "Dcbx is disabled\n");
  return;
 }

 VAR_11 = &VAR_7->p_dcbx_info->operational.features;
 VAR_10 = &VAR_7->p_dcbx_info->results;

 VAR_15 = !!(FUNC_1(VAR_14, VAR_1) ==
   VAR_4);
 VAR_9->ieee = VAR_15;
 VAR_15 = !!(FUNC_1(VAR_14, VAR_1) ==
   VAR_2);
 VAR_9->cee = VAR_15;

 VAR_15 = !!(FUNC_1(VAR_14, VAR_1) ==
   VAR_5);
 VAR_9->local = VAR_15;

 FUNC_0(VAR_7, VAR_6,
     "Version support: ieee %d, cee %d, static %d\n",
     VAR_9->ieee, VAR_9->cee,
     VAR_9->local);

 FUNC_2(VAR_7, &VAR_11->app,
       VAR_11->app.app_pri_tbl, &VAR_11->ets,
       VAR_11->pfc, &VAR_8->operational.params,
       VAR_9->ieee);
 FUNC_3(VAR_7, &VAR_9->app_prio, VAR_10);
 VAR_13 = FUNC_1(VAR_11->app.flags, VAR_0);
 VAR_9->err = VAR_13;
 VAR_9->enabled = VAR_12;
 VAR_9->valid = 1;
}

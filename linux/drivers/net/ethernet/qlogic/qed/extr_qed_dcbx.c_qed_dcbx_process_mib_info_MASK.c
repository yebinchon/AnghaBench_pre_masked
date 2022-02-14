
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct TYPE_7__ {void* ooo_tc; } ;
struct qed_hw_info {void* num_active_tc; } ;
struct qed_hwfn {TYPE_4__* p_dcbx_info; int rel_pf_id; TYPE_3__ qm_info; struct qed_hw_info hw_info; } ;
struct qed_dcbx_results {int dcbx_enabled; int pf_id; int member_0; } ;
struct dcbx_ets_feature {int flags; int * pri_tc_tbl; } ;
struct dcbx_app_priority_feature {int flags; struct dcbx_app_priority_entry* app_pri_tbl; } ;
struct dcbx_app_priority_entry {int dummy; } ;
struct TYPE_5__ {struct dcbx_ets_feature ets; struct dcbx_app_priority_feature app; } ;
struct TYPE_6__ {TYPE_1__ features; int flags; } ;
struct TYPE_8__ {int results; TYPE_2__ operational; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,struct qed_dcbx_results*,int) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_dcbx_results*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,struct qed_dcbx_results*,struct dcbx_app_priority_entry*,int ,int,void*) ;

__attribute__((used)) static int
FUNC_4(struct qed_hwfn *VAR_4, struct qed_ptt *VAR_5)
{
 struct dcbx_app_priority_feature *VAR_6;
 struct dcbx_app_priority_entry *VAR_7;
 struct qed_dcbx_results VAR_8 = { 0 };
 struct dcbx_ets_feature *VAR_9;
 struct qed_hw_info *VAR_10;
 u32 VAR_11, VAR_12;
 u8 VAR_13;
 int VAR_14;
 int VAR_15 = 0;

 VAR_12 = VAR_4->p_dcbx_info->operational.flags;
 VAR_13 = FUNC_0(VAR_12, VAR_1);

 VAR_6 = &VAR_4->p_dcbx_info->operational.features.app;
 VAR_7 = VAR_6->app_pri_tbl;

 VAR_9 = &VAR_4->p_dcbx_info->operational.features.ets;
 VAR_11 = VAR_9->pri_tc_tbl[0];

 VAR_10 = &VAR_4->hw_info;
 VAR_14 = FUNC_0(VAR_6->flags, VAR_0);

 VAR_15 = FUNC_3(VAR_4, VAR_5, &VAR_8, VAR_7, VAR_11,
      VAR_14, VAR_13);
 if (VAR_15)
  return VAR_15;

 VAR_10->num_active_tc = FUNC_0(VAR_9->flags,
        VAR_2);
 VAR_4->qm_info.ooo_tc = FUNC_0(VAR_9->flags, VAR_3);
 VAR_8.pf_id = VAR_4->rel_pf_id;
 VAR_8.dcbx_enabled = !!VAR_13;

 FUNC_2(VAR_4, &VAR_8);

 FUNC_1(&VAR_4->p_dcbx_info->results, &VAR_8,
        sizeof(struct qed_dcbx_results));

 return 0;
}

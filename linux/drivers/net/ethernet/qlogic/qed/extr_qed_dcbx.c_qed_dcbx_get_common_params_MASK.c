
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_hwfn {int dummy; } ;
struct qed_dcbx_params {int dummy; } ;
struct dcbx_ets_feature {int dummy; } ;
struct dcbx_app_priority_feature {int dummy; } ;
struct dcbx_app_priority_entry {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,struct dcbx_app_priority_feature*,struct dcbx_app_priority_entry*,struct qed_dcbx_params*,int) ;
 int FUNC_1 (struct qed_hwfn*,struct dcbx_ets_feature*,struct qed_dcbx_params*) ;
 int FUNC_2 (struct qed_hwfn*,int ,struct qed_dcbx_params*) ;

__attribute__((used)) static void
FUNC_3(struct qed_hwfn *VAR_0,
      struct dcbx_app_priority_feature *VAR_1,
      struct dcbx_app_priority_entry *VAR_2,
      struct dcbx_ets_feature *VAR_3,
      u32 VAR_4, struct qed_dcbx_params *VAR_5, bool VAR_6)
{
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5, VAR_6);
 FUNC_1(VAR_0, VAR_3, VAR_5);
 FUNC_2(VAR_0, VAR_4, VAR_5);
}

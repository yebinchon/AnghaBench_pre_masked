
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct iwl_scale_tbl_info {struct iwl_rate_scale_data* tpc_win; } ;
struct iwl_rate_scale_data {int dummy; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_lq_sta {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct iwl_mvm*,struct iwl_scale_tbl_info*,int,int,int,struct iwl_rate_scale_data*) ;

__attribute__((used)) static int FUNC_2(struct iwl_mvm *VAR_2,
          struct iwl_lq_sta *VAR_3,
          struct iwl_scale_tbl_info *VAR_4,
          int VAR_5, int VAR_6, int VAR_7,
          u8 VAR_8)
{
 struct iwl_rate_scale_data *VAR_9 = ((void*)0);

 if (FUNC_0(VAR_8 > VAR_1))
  return -VAR_0;

 VAR_9 = &VAR_4->tpc_win[VAR_8];
 return FUNC_1(VAR_2, VAR_4, VAR_5, VAR_6, VAR_7,
        VAR_9);
}

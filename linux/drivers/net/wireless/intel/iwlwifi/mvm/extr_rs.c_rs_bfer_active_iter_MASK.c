
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rs_bfer_active_iter_data {struct iwl_mvm_sta* bfer_mvmsta; struct ieee80211_sta* exclude_sta; } ;
struct iwl_lq_cmd {int ss_params; } ;
struct TYPE_3__ {struct iwl_lq_cmd lq; } ;
struct TYPE_4__ {TYPE_1__ rs_drv; } ;
struct iwl_mvm_sta {TYPE_2__ lq_sta; } ;
struct ieee80211_sta {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct iwl_mvm_sta* FUNC_1 (struct ieee80211_sta*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_1,
    struct ieee80211_sta *VAR_2)
{
 struct rs_bfer_active_iter_data *VAR_3 = VAR_1;
 struct iwl_mvm_sta *VAR_4 = FUNC_1(VAR_2);
 struct iwl_lq_cmd *VAR_5 = &VAR_4->lq_sta.rs_drv.lq;
 u32 VAR_6 = FUNC_2(VAR_5->ss_params);

 if (VAR_2 == VAR_3->exclude_sta)
  return;


 if (VAR_6 & VAR_0) {
  FUNC_0(VAR_3->bfer_mvmsta != ((void*)0));

  VAR_3->bfer_mvmsta = VAR_4;
 }
}

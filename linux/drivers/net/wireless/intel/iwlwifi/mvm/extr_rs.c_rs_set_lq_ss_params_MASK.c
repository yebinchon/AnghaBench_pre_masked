
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct rs_rate {int dummy; } ;
struct rs_bfer_active_iter_data {struct iwl_mvm_sta* bfer_mvmsta; struct ieee80211_sta* exclude_sta; } ;
struct iwl_lq_cmd {void* ss_params; } ;
struct TYPE_5__ {struct iwl_lq_cmd lq; } ;
struct TYPE_6__ {TYPE_2__ rs_drv; } ;
struct iwl_mvm_sta {scalar_t__ sta_id; TYPE_3__ lq_sta; } ;
struct iwl_mvm {int hw; } ;
struct TYPE_4__ {scalar_t__ ss_force; } ;
struct iwl_lq_sta {int bfer_capable; scalar_t__ stbc_capable; TYPE_1__ pers; struct iwl_lq_cmd lq; } ;
struct ieee80211_sta {int dummy; } ;


 int FUNC_0 (struct iwl_mvm*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int ,struct rs_bfer_active_iter_data*) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_sta*) ;
 int FUNC_4 (struct iwl_mvm*,struct iwl_lq_cmd*) ;
 struct iwl_mvm_sta* FUNC_5 (struct ieee80211_sta*) ;
 int FUNC_6 (void*) ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (struct iwl_mvm_sta*,struct iwl_mvm_sta*) ;

__attribute__((used)) static void FUNC_8(struct iwl_mvm *VAR_8,
    struct ieee80211_sta *VAR_9,
    struct iwl_lq_sta *VAR_10,
    const struct rs_rate *VAR_11)
{
 struct iwl_lq_cmd *VAR_12 = &VAR_10->lq;
 struct iwl_mvm_sta *VAR_13 = FUNC_5(VAR_9);
 struct rs_bfer_active_iter_data VAR_14 = {
  .exclude_sta = VAR_9,
  .bfer_mvmsta = ((void*)0),
 };
 struct iwl_mvm_sta *VAR_15 = ((void*)0);
 u32 VAR_16 = VAR_2;

 if (!FUNC_3(VAR_8, VAR_9))
  goto out;
 if (VAR_10->stbc_capable)
  VAR_16 |= VAR_3;

 if (!VAR_10->bfer_capable)
  goto out;

 FUNC_2(VAR_8->hw,
       VAR_7,
       &VAR_14);
 VAR_15 = VAR_14.bfer_mvmsta;





 if (!VAR_15) {
  FUNC_0(VAR_8, "No sta with BFER allowed found. Allow\n");

  VAR_16 |= VAR_0;
  goto out;
 }

 FUNC_0(VAR_8, "Found existing sta %d with BFER activated\n",
         VAR_15->sta_id);


 if (FUNC_7(VAR_13, VAR_15) > 0) {
  struct iwl_lq_cmd *VAR_17 =
   &VAR_15->lq_sta.rs_drv.lq;
  u32 VAR_18 = FUNC_6(VAR_17->ss_params);

  VAR_18 &= ~VAR_0;
  VAR_17->ss_params = FUNC_1(VAR_18);
  FUNC_4(VAR_8, VAR_17);

  VAR_16 |= VAR_0;
  FUNC_0(VAR_8,
          "Lower priority BFER sta found (%d). Switch BFER\n",
          VAR_15->sta_id);
 }
out:
 VAR_12->ss_params = FUNC_1(VAR_16);
}

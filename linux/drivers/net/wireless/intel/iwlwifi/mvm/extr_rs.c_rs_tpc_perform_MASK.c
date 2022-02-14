
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct rs_rate {int dummy; } ;
struct iwl_scale_tbl_info {struct iwl_rate_scale_data* tpc_win; struct rs_rate rate; } ;
struct iwl_rate_scale_data {int average_tpt; int success_ratio; } ;
struct iwl_mvm_sta {struct ieee80211_vif* vif; } ;
struct iwl_mvm {int dummy; } ;
struct TYPE_8__ {size_t reduced_tpc; } ;
struct TYPE_5__ {scalar_t__ dbg_fixed_txp_reduction; } ;
struct iwl_lq_sta {TYPE_4__ lq; TYPE_1__ pers; } ;
struct ieee80211_vif {int chanctx_conf; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_7__ {TYPE_2__* chan; } ;
struct ieee80211_chanctx_conf {TYPE_3__ def; } ;
typedef int s32 ;
typedef enum tpc_action { ____Placeholder_tpc_action } tpc_action ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_6__ {int band; } ;


 int FUNC_0 (struct iwl_mvm*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 struct iwl_mvm_sta* FUNC_2 (struct ieee80211_sta*) ;
 struct ieee80211_chanctx_conf* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct iwl_mvm*,size_t,int*,int*) ;
 int FUNC_7 (struct iwl_mvm*,int ,int,int,int,int,int) ;
 int FUNC_8 (struct iwl_mvm*,struct ieee80211_vif*,struct rs_rate*,int) ;

__attribute__((used)) static bool FUNC_9(struct iwl_mvm *VAR_5,
      struct ieee80211_sta *VAR_6,
      struct iwl_lq_sta *VAR_7,
      struct iwl_scale_tbl_info *VAR_8)
{
 struct iwl_mvm_sta *VAR_9 = FUNC_2(VAR_6);
 struct ieee80211_vif *VAR_10 = VAR_9->vif;
 struct ieee80211_chanctx_conf *VAR_11;
 enum nl80211_band VAR_12;
 struct iwl_rate_scale_data *VAR_13;
 struct rs_rate *VAR_14 = &VAR_8->rate;
 enum tpc_action VAR_15;
 s32 VAR_16;
 u8 VAR_17 = VAR_7->lq.reduced_tpc;
 int VAR_18;
 int VAR_19, VAR_20;
 int VAR_21 = VAR_0, VAR_22 = VAR_0;
 FUNC_4();
 VAR_11 = FUNC_3(VAR_10->chanctx_conf);
 if (FUNC_1(!VAR_11))
  VAR_12 = VAR_1;
 else
  VAR_12 = VAR_11->def.chan->band;
 FUNC_5();

 if (!FUNC_8(VAR_5, VAR_10, VAR_14, VAR_12)) {
  FUNC_0(VAR_5,
          "tpc is not allowed. remove txp restrictions\n");
  VAR_7->lq.reduced_tpc = VAR_4;
  return VAR_17 != VAR_4;
 }

 FUNC_6(VAR_5, VAR_17, &VAR_19, &VAR_20);


 VAR_13 = VAR_8->tpc_win;
 VAR_16 = VAR_13[VAR_17].success_ratio;
 VAR_18 = VAR_13[VAR_17].average_tpt;
 if (VAR_19 != VAR_2)
  VAR_21 = VAR_13[VAR_19].average_tpt;
 if (VAR_20 != VAR_2)
  VAR_22 = VAR_13[VAR_20].average_tpt;

 FUNC_0(VAR_5,
         "(TPC: %d): cur_tpt %d SR %d weak %d strong %d weak_tpt %d strong_tpt %d\n",
         VAR_17, VAR_18, VAR_16, VAR_19, VAR_20,
         VAR_21, VAR_22);

 VAR_15 = FUNC_7(VAR_5, VAR_16, VAR_19, VAR_20,
       VAR_18, VAR_21, VAR_22);


 if (VAR_19 == VAR_2 && VAR_15 == 131) {
  FUNC_0(VAR_5, "already in lowest txp, stay\n");
  VAR_15 = 128;
 } else if (VAR_20 == VAR_2 &&
     (VAR_15 == 130 ||
      VAR_15 == 129)) {
  FUNC_0(VAR_5, "already in highest txp, stay\n");
  VAR_15 = 128;
 }

 switch (VAR_15) {
 case 131:
  VAR_7->lq.reduced_tpc = VAR_19;
  return 1;
 case 130:
  VAR_7->lq.reduced_tpc = VAR_20;
  return 1;
 case 129:
  VAR_7->lq.reduced_tpc = VAR_4;
  return 1;
 case 128:

  break;
 }
 return 0;
}

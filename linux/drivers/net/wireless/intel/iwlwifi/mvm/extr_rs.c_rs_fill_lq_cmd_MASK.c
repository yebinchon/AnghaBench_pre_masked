
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rs_rate {int ant; } ;
struct iwl_mvm_vif {int dummy; } ;
struct iwl_mvm_sta {TYPE_3__* vif; int max_agg_bufsize; } ;
struct iwl_mvm {TYPE_2__* fw; } ;
struct TYPE_4__ {int dbg_fixed_rate; } ;
struct iwl_lq_cmd {void* agg_time_limit; int flags; int agg_frame_cnt_limit; int single_stream_ant_msk; int agg_disable_start_th; } ;
struct iwl_lq_sta {TYPE_1__ pers; int band; struct iwl_lq_cmd lq; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_6__ {scalar_t__ p2p; } ;
struct TYPE_5__ {int ucode_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct iwl_mvm*,struct ieee80211_sta*) ;
 struct iwl_mvm_sta* FUNC_5 (struct ieee80211_sta*) ;
 struct iwl_mvm_vif* FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (struct iwl_mvm_vif*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct iwl_mvm*,struct ieee80211_sta*,struct iwl_lq_sta*,struct rs_rate const*) ;
 int FUNC_10 (struct iwl_mvm*,struct iwl_lq_cmd*,int ,int ) ;
 int FUNC_11 (struct iwl_mvm*,struct ieee80211_sta*,struct iwl_lq_sta*,struct rs_rate const*) ;

__attribute__((used)) static void FUNC_12(struct iwl_mvm *VAR_5,
      struct ieee80211_sta *VAR_6,
      struct iwl_lq_sta *VAR_7,
      const struct rs_rate *VAR_8)
{
 struct iwl_lq_cmd *VAR_9 = &VAR_7->lq;
 struct iwl_mvm_sta *VAR_10;
 struct iwl_mvm_vif *VAR_11;

 VAR_9->agg_disable_start_th = VAR_0;
 VAR_9->agg_time_limit =
  FUNC_1(VAR_1);
 if (FUNC_0(!VAR_6 || !VAR_8))
  return;

 FUNC_9(VAR_5, VAR_6, VAR_7, VAR_8);

 if (FUNC_2(&VAR_5->fw->ucode_capa, VAR_2))
  FUNC_11(VAR_5, VAR_6, VAR_7, VAR_8);

 VAR_10 = FUNC_5(VAR_6);
 VAR_11 = FUNC_6(VAR_10->vif);

 if (!FUNC_3(&VAR_5->fw->ucode_capa, VAR_3) &&
     FUNC_8(VAR_8->ant) == 1)
  VAR_9->single_stream_ant_msk = VAR_8->ant;

 VAR_9->agg_frame_cnt_limit = VAR_10->max_agg_bufsize;






 if (FUNC_7(VAR_11))
  VAR_9->agg_frame_cnt_limit--;

 if (VAR_10->vif->p2p)
  VAR_9->flags |= VAR_4;

 VAR_9->agg_time_limit =
   FUNC_1(FUNC_4(VAR_5, VAR_6));
}

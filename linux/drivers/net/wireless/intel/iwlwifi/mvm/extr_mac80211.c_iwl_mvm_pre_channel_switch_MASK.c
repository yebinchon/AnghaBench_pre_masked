
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iwl_mvm_vif {int csa_failed; int csa_countdown; int csa_count; int csa_misbehave; int ps_disabled; int csa_work; int csa_target_freq; } ;
struct iwl_mvm {int mutex; TYPE_4__* fw; int csa_vif; int csa_tx_blocked_vif; int fwrt; } ;
struct TYPE_7__ {int beacon_int; } ;
struct ieee80211_vif {int type; TYPE_3__ bss_conf; int csa_active; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_6__ {TYPE_1__* chan; int center_freq1; } ;
struct ieee80211_channel_switch {int count; int block_tx; TYPE_2__ chandef; } ;
struct TYPE_8__ {int ucode_capa; } ;
struct TYPE_5__ {int center_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,char*,int ) ;
 struct iwl_mvm* FUNC_1 (struct ieee80211_hw*) ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct ieee80211_vif*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_channel_switch*) ;
 int FUNC_7 (struct iwl_mvm*) ;
 int FUNC_8 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_channel_switch*) ;
 int FUNC_9 (struct iwl_mvm*) ;
 struct iwl_mvm_vif* FUNC_10 (struct ieee80211_vif*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,struct ieee80211_vif*) ;
 struct ieee80211_vif* FUNC_16 (int ,int ) ;
 int FUNC_17 (int *,int ) ;

__attribute__((used)) static int FUNC_18(struct ieee80211_hw *VAR_4,
          struct ieee80211_vif *VAR_5,
          struct ieee80211_channel_switch *VAR_6)
{
 struct iwl_mvm *VAR_7 = FUNC_1(VAR_4);
 struct ieee80211_vif *VAR_8;
 struct iwl_mvm_vif *VAR_9 = FUNC_10(VAR_5);
 int VAR_10;

 FUNC_13(&VAR_7->mutex);

 VAR_9->csa_failed = 0;

 FUNC_0(VAR_7, "pre CSA to freq %d\n",
      VAR_6->chandef.center_freq1);

 FUNC_5(&VAR_7->fwrt,
           FUNC_4(VAR_5),
           VAR_1);

 switch (VAR_5->type) {
 case 129:
  VAR_8 =
   FUNC_16(VAR_7->csa_vif,
        FUNC_11(&VAR_7->mutex));
  if (FUNC_2(VAR_8 && VAR_8->csa_active,
         "Another CSA is already in progress")) {
   VAR_10 = -VAR_0;
   goto out_unlock;
  }


  if (FUNC_16(VAR_7->csa_tx_blocked_vif,
           FUNC_11(&VAR_7->mutex))) {
   VAR_10 = -VAR_0;
   goto out_unlock;
  }

  FUNC_15(VAR_7->csa_vif, VAR_5);

  if (FUNC_2(VAR_9->csa_countdown,
         "Previous CSA countdown didn't complete")) {
   VAR_10 = -VAR_0;
   goto out_unlock;
  }

  VAR_9->csa_target_freq = VAR_6->chandef.chan->center_freq;

  break;
 case 128:
  if (VAR_6->block_tx) {




   if (!VAR_6->count ||
       VAR_6->count * VAR_5->bss_conf.beacon_int >
       VAR_2)
    FUNC_17(&VAR_9->csa_work,
            FUNC_12(VAR_2));
  }

  if (!FUNC_3(&VAR_7->fw->ucode_capa,
     VAR_3)) {
   VAR_10 = FUNC_6(VAR_7, VAR_5, VAR_6);
   if (VAR_10)
    goto out_unlock;
  } else {
   FUNC_8(VAR_7, VAR_5, VAR_6);
  }

  VAR_9->csa_count = VAR_6->count;
  VAR_9->csa_misbehave = 0;
  break;
 default:
  break;
 }

 VAR_9->ps_disabled = 1;

 VAR_10 = FUNC_7(VAR_7);
 if (VAR_10)
  goto out_unlock;


 FUNC_9(VAR_7);

out_unlock:
 FUNC_14(&VAR_7->mutex);

 return VAR_10;
}

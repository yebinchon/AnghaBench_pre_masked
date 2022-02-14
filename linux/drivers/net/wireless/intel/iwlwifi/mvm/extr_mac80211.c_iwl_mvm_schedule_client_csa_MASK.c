
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm_vif {int color; int id; } ;
struct iwl_mvm {int mutex; } ;
struct iwl_chan_switch_te_cmd {int cs_delayed_bcn_count; int cs_mode; int cs_count; int tsf; int action; int mac_id; } ;
struct TYPE_2__ {int beacon_int; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;
struct ieee80211_channel_switch {scalar_t__ delay; int block_tx; int count; int timestamp; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct iwl_mvm*,int ,int ,int,struct iwl_chan_switch_te_cmd*) ;
 struct iwl_mvm_vif* FUNC_5 (struct ieee80211_vif*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct iwl_mvm *VAR_3,
           struct ieee80211_vif *VAR_4,
           struct ieee80211_channel_switch *VAR_5)
{
 struct iwl_mvm_vif *VAR_6 = FUNC_5(VAR_4);
 struct iwl_chan_switch_te_cmd VAR_7 = {
  .mac_id = FUNC_3(FUNC_1(VAR_6->id,
         VAR_6->color)),
  .action = FUNC_3(VAR_1),
  .tsf = FUNC_3(VAR_5->timestamp),
  .cs_count = VAR_5->count,
  .cs_mode = VAR_5->block_tx,
 };

 FUNC_6(&VAR_3->mutex);

 if (VAR_5->delay)
  VAR_7.cs_delayed_bcn_count =
   FUNC_0(VAR_5->delay, VAR_4->bss_conf.beacon_int);

 return FUNC_4(VAR_3,
        FUNC_2(VAR_2,
         VAR_0),
        0, sizeof(VAR_7), &VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_tof_responder_config_cmd {int bssid; void* ctrl_ch_position; int bandwidth; int sta_id; int cmd_valid_fields; int channel_num; } ;
struct TYPE_4__ {int sta_id; } ;
struct iwl_mvm_vif {TYPE_2__ bcast_sta; } ;
struct iwl_mvm {int mutex; } ;
struct ieee80211_vif {int addr; } ;
struct cfg80211_chan_def {int width; TYPE_1__* chan; } ;
typedef int cmd ;
struct TYPE_3__ {int hw_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;




 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 void* FUNC_3 (struct cfg80211_chan_def*) ;
 int FUNC_4 (struct iwl_mvm*,int ,int ,int,struct iwl_tof_responder_config_cmd*) ;
 struct iwl_mvm_vif* FUNC_5 (struct ieee80211_vif*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_8(struct iwl_mvm *VAR_11,
     struct ieee80211_vif *VAR_12,
     struct cfg80211_chan_def *VAR_13)
{
 struct iwl_mvm_vif *VAR_14 = FUNC_5(VAR_12);
 struct iwl_tof_responder_config_cmd VAR_15 = {
  .channel_num = VAR_13->chan->hw_value,
  .cmd_valid_fields =
   FUNC_1(VAR_7 |
        VAR_6 |
        VAR_8),
  .sta_id = VAR_14->bcast_sta.sta_id,
 };

 FUNC_6(&VAR_11->mutex);

 switch (VAR_13->width) {
 case 130:
  VAR_15.bandwidth = VAR_3;
  break;
 case 131:
  VAR_15.bandwidth = VAR_2;
  break;
 case 129:
  VAR_15.bandwidth = VAR_4;
  VAR_15.ctrl_ch_position = FUNC_3(VAR_13);
  break;
 case 128:
  VAR_15.bandwidth = VAR_5;
  VAR_15.ctrl_ch_position = FUNC_3(VAR_13);
  break;
 default:
  FUNC_0(1);
  return -VAR_0;
 }

 FUNC_7(VAR_15.bssid, VAR_12->addr, VAR_1);

 return FUNC_4(VAR_11, FUNC_2(VAR_10,
          VAR_9, 0),
        0, sizeof(VAR_15), &VAR_15);
}

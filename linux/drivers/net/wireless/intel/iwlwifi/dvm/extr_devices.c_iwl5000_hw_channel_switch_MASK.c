
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_9__ {int filter_flags; int flags; } ;
struct TYPE_8__ {int channel; } ;
struct TYPE_7__ {int beacon_interval; } ;
struct iwl_rxon_context {TYPE_3__ staging; TYPE_2__ active; struct ieee80211_vif* vif; TYPE_1__ timing; } ;
struct iwl_priv {scalar_t__ band; int ucode_beacon_time; struct iwl_rxon_context* contexts; } ;
struct iwl_host_cmd {int data; int len; int id; } ;
struct iwl5000_channel_switch_cmd {int band; int expect_beacon; int switch_time; int rxon_filter_flags; int rxon_flags; int channel; } ;
struct TYPE_10__ {int beacon_int; } ;
struct ieee80211_vif {TYPE_4__ bss_conf; } ;
struct TYPE_12__ {TYPE_5__* chan; } ;
struct ieee80211_channel_switch {int count; int timestamp; TYPE_6__ chandef; } ;
struct TYPE_11__ {int hw_value; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_priv*,char*,int ,...) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct iwl_priv*,int,int,int) ;
 int FUNC_4 (struct iwl_priv*,struct iwl_host_cmd*) ;
 int FUNC_5 (struct iwl_priv*,int,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct iwl_priv *VAR_5,
         struct ieee80211_channel_switch *VAR_6)
{




 struct iwl_rxon_context *VAR_7 = &VAR_5->contexts[VAR_1];
 struct iwl5000_channel_switch_cmd VAR_8;
 u32 VAR_9, VAR_10;
 u16 VAR_11;
 u32 VAR_12;
 u8 VAR_13;
 u16 VAR_14 = FUNC_6(VAR_7->timing.beacon_interval);
 struct ieee80211_vif *VAR_15 = VAR_7->vif;
 struct iwl_host_cmd VAR_16 = {
  .id = VAR_3,
  .len = sizeof(VAR_8), 
  .data = &VAR_8, 
 };

 VAR_8.band = VAR_5->band == VAR_2;
 VAR_11 = VAR_6->chandef.chan->hw_value;
 FUNC_0(VAR_5, "channel switch from %d to %d\n",
        VAR_7->active.channel, VAR_11);
 VAR_8.channel = FUNC_1(VAR_11);
 VAR_8.rxon_flags = VAR_7->staging.flags;
 VAR_8.rxon_filter_flags = VAR_7->staging.filter_flags;
 VAR_13 = VAR_6->count;
 VAR_12 = VAR_6->timestamp & 0x0ffffffff;




 if ((VAR_5->ucode_beacon_time > VAR_12) && VAR_14) {
  if (VAR_13 > ((VAR_5->ucode_beacon_time - VAR_12) /
      VAR_14)) {
   VAR_13 -= (VAR_5->ucode_beacon_time -
    VAR_12) / VAR_14;
  } else
   VAR_13 = 0;
 }
 if (VAR_13 <= 1)
  VAR_8.switch_time = FUNC_2(VAR_5->ucode_beacon_time);
 else {
  VAR_9 =
   VAR_15->bss_conf.beacon_int * VAR_13 * VAR_4;
  VAR_10 = FUNC_5(VAR_5,
        VAR_9,
        VAR_14);
  VAR_8.switch_time = FUNC_3(VAR_5,
            VAR_5->ucode_beacon_time,
            VAR_10,
            VAR_14);
 }
 FUNC_0(VAR_5, "uCode time for the switch is 0x%x\n",
        VAR_8.switch_time);
 VAR_8.expect_beacon =
  VAR_6->chandef.chan->flags & VAR_0;

 return FUNC_4(VAR_5, &VAR_16);
}

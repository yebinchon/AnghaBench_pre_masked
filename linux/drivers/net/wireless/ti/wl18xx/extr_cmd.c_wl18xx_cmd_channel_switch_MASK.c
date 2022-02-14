
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct wl18xx_cmd_channel_switch {int channel_type; int local_supported_rates; int band; int stop_tx; int switch_time; int channel; int role_id; } ;
struct wl12xx_vif {scalar_t__ bss_type; int channel_type; scalar_t__ p2p; int role_id; } ;
struct wl1271 {int dummy; } ;
struct TYPE_4__ {TYPE_1__* chan; } ;
struct ieee80211_channel_switch {TYPE_2__ chandef; int block_tx; int count; } ;
struct TYPE_3__ {int band; int hw_value; } ;


 scalar_t__ VAR_0 ;
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
 int FUNC_1 (struct wl18xx_cmd_channel_switch*) ;
 struct wl18xx_cmd_channel_switch* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct wl18xx_cmd_channel_switch*,int,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_7 (struct wl1271*,struct wl12xx_vif*) ;

int FUNC_8(struct wl1271 *VAR_11,
         struct wl12xx_vif *VAR_12,
         struct ieee80211_channel_switch *VAR_13)
{
 struct wl18xx_cmd_channel_switch *VAR_14;
 u32 VAR_15;
 int VAR_16;

 FUNC_4(VAR_5, "cmd channel switch (count=%d)",
       VAR_13->count);

 VAR_14 = FUNC_2(sizeof(*VAR_14), VAR_8);
 if (!VAR_14) {
  VAR_16 = -VAR_7;
  goto out;
 }

 VAR_14->role_id = VAR_12->role_id;
 VAR_14->channel = VAR_13->chandef.chan->hw_value;
 VAR_14->switch_time = VAR_13->count;
 VAR_14->stop_tx = VAR_13->block_tx;

 switch (VAR_13->chandef.chan->band) {
 case 129:
  VAR_14->band = VAR_9;
  break;
 case 128:
  VAR_14->band = VAR_10;
  break;
 default:
  FUNC_5("invalid channel switch band: %d",
        VAR_13->chandef.chan->band);
  VAR_16 = -VAR_6;
  goto out_free;
 }

 VAR_15 = VAR_3 | VAR_4;
 if (VAR_12->bss_type == VAR_0)
  VAR_15 |= FUNC_7(VAR_11, VAR_12);
 else
  VAR_15 |=
   FUNC_6(VAR_11, VAR_12);
 if (VAR_12->p2p)
  VAR_15 &= ~VAR_2;
 VAR_14->local_supported_rates = FUNC_0(VAR_15);
 VAR_14->channel_type = VAR_12->channel_type;

 VAR_16 = FUNC_3(VAR_11, VAR_1, VAR_14, sizeof(*VAR_14), 0);
 if (VAR_16 < 0) {
  FUNC_5("failed to send channel switch command");
  goto out_free;
 }

out_free:
 FUNC_1(VAR_14);
out:
 return VAR_16;
}

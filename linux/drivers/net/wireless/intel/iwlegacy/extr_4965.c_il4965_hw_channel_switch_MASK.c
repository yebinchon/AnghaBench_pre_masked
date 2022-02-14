
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
struct TYPE_12__ {int channel; } ;
struct TYPE_10__ {int flags; int filter_flags; } ;
struct TYPE_7__ {int beacon_interval; } ;
struct il_priv {scalar_t__ band; int ucode_beacon_time; TYPE_6__ active; TYPE_4__ staging; struct ieee80211_vif* vif; TYPE_1__ timing; } ;
struct il_channel_info {int dummy; } ;
struct il4965_channel_switch_cmd {int band; int rxon_flags; int switch_time; int tx_power; scalar_t__ expect_beacon; int rxon_filter_flags; int channel; } ;
struct TYPE_11__ {int beacon_int; } ;
struct ieee80211_vif {TYPE_5__ bss_conf; } ;
struct TYPE_9__ {TYPE_2__* chan; } ;
struct ieee80211_channel_switch {int count; int timestamp; TYPE_3__ chandef; } ;
typedef int cmd ;
struct TYPE_8__ {int hw_value; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct il_priv*,int,int,int,int,int *) ;
 int FUNC_6 (struct il_priv*,int,int,int) ;
 struct il_channel_info* FUNC_7 (struct il_priv*,scalar_t__,int) ;
 scalar_t__ FUNC_8 (struct il_channel_info const*) ;
 int FUNC_9 (struct il_priv*,int ,int,struct il4965_channel_switch_cmd*) ;
 int FUNC_10 (struct il_priv*,int,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int
FUNC_13(struct il_priv *VAR_6,
    struct ieee80211_channel_switch *VAR_7)
{
 int VAR_8;
 u8 VAR_9 = 0;
 bool VAR_10 = 0;
 u8 VAR_11 = 0;
 struct il4965_channel_switch_cmd VAR_12;
 const struct il_channel_info *VAR_13;
 u32 VAR_14, VAR_15;
 u16 VAR_16;
 u32 VAR_17;
 u8 VAR_18;
 u16 VAR_19 = FUNC_12(VAR_6->timing.beacon_interval);
 struct ieee80211_vif *VAR_20 = VAR_6->vif;
 VAR_9 = (VAR_6->band == VAR_3);

 if (FUNC_2(VAR_20 == ((void*)0)))
  return -VAR_2;

 VAR_10 = FUNC_11(VAR_6->staging.flags);

 if (VAR_10 && (VAR_6->staging.flags & VAR_4))
  VAR_11 = 1;

 VAR_12.band = VAR_9;
 VAR_12.expect_beacon = 0;
 VAR_16 = VAR_7->chandef.chan->hw_value;
 VAR_12.channel = FUNC_3(VAR_16);
 VAR_12.rxon_flags = VAR_6->staging.flags;
 VAR_12.rxon_filter_flags = VAR_6->staging.filter_flags;
 VAR_18 = VAR_7->count;
 VAR_17 = VAR_7->timestamp & 0x0ffffffff;




 if (VAR_6->ucode_beacon_time > VAR_17 && VAR_19) {
  if (VAR_18 >
      ((VAR_6->ucode_beacon_time - VAR_17) / VAR_19)) {
   VAR_18 -=
       (VAR_6->ucode_beacon_time - VAR_17) / VAR_19;
  } else
   VAR_18 = 0;
 }
 if (VAR_18 <= 1)
  VAR_12.switch_time = FUNC_4(VAR_6->ucode_beacon_time);
 else {
  VAR_14 =
      VAR_20->bss_conf.beacon_int * VAR_18 * VAR_5;
  VAR_15 =
      FUNC_10(VAR_6, VAR_14,
     VAR_19);
  VAR_12.switch_time =
      FUNC_6(VAR_6, VAR_6->ucode_beacon_time,
           VAR_15, VAR_19);
 }
 FUNC_0("uCode time for the switch is 0x%x\n", VAR_12.switch_time);
 VAR_13 = FUNC_7(VAR_6, VAR_6->band, VAR_16);
 if (VAR_13)
  VAR_12.expect_beacon = FUNC_8(VAR_13);
 else {
  FUNC_1("invalid channel switch from %u to %u\n",
         VAR_6->active.channel, VAR_16);
  return -VAR_1;
 }

 VAR_8 = FUNC_5(VAR_6, VAR_9, VAR_16, VAR_10, VAR_11,
         &VAR_12.tx_power);
 if (VAR_8) {
  FUNC_0("error:%d  fill txpower_tbl\n", VAR_8);
  return VAR_8;
 }

 return FUNC_9(VAR_6, VAR_0, sizeof(VAR_12), &VAR_12);
}

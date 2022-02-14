
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mwl8k_priv {scalar_t__ channel_time; struct ieee80211_channel* acs_chan; scalar_t__ sw_scan_start; } ;
struct TYPE_3__ {void* length; void* code; } ;
struct mwl8k_cmd_set_rf_channel {TYPE_1__ header; int channel_flags; int current_channel; void* action; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;
struct TYPE_4__ {struct ieee80211_channel* chan; } ;
struct ieee80211_conf {TYPE_2__ chandef; } ;
struct ieee80211_channel {scalar_t__ band; int hw_value; } ;
typedef enum nl80211_channel_type { ____Placeholder_nl80211_channel_type } nl80211_channel_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_2__*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (struct mwl8k_cmd_set_rf_channel*) ;
 struct mwl8k_cmd_set_rf_channel* FUNC_4 (int,int ) ;
 int FUNC_5 (struct ieee80211_hw*,TYPE_1__*) ;
 int FUNC_6 (struct mwl8k_priv*,struct ieee80211_channel*) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_hw *VAR_11,
        struct ieee80211_conf *VAR_12)
{
 struct ieee80211_channel *VAR_13 = VAR_12->chandef.chan;
 enum nl80211_channel_type VAR_14 =
  FUNC_0(&VAR_12->chandef);
 struct mwl8k_cmd_set_rf_channel *VAR_15;
 struct mwl8k_priv *VAR_16 = VAR_11->priv;
 int VAR_17;

 VAR_15 = FUNC_4(sizeof(*VAR_15), VAR_1);
 if (VAR_15 == ((void*)0))
  return -VAR_0;

 VAR_15->header.code = FUNC_1(VAR_3);
 VAR_15->header.length = FUNC_1(sizeof(*VAR_15));
 VAR_15->action = FUNC_1(VAR_2);
 VAR_15->current_channel = VAR_13->hw_value;

 if (VAR_13->band == VAR_4)
  VAR_15->channel_flags |= FUNC_2(0x00000001);
 else if (VAR_13->band == VAR_5)
  VAR_15->channel_flags |= FUNC_2(0x00000004);

 if (!VAR_16->sw_scan_start) {
  if (VAR_14 == VAR_9 ||
      VAR_14 == VAR_6)
   VAR_15->channel_flags |= FUNC_2(0x00000080);
  else if (VAR_14 == VAR_7)
   VAR_15->channel_flags |= FUNC_2(0x000001900);
  else if (VAR_14 == VAR_8)
   VAR_15->channel_flags |= FUNC_2(0x000000900);
 } else {
  VAR_15->channel_flags |= FUNC_2(0x00000080);
 }

 if (VAR_16->sw_scan_start) {




  if (VAR_16->channel_time != 0)
   FUNC_6(VAR_16, VAR_16->acs_chan);

  VAR_16->channel_time = VAR_10;
  VAR_16->acs_chan = VAR_13;
 }

 VAR_17 = FUNC_5(VAR_11, &VAR_15->header);
 FUNC_3(VAR_15);

 return VAR_17;
}

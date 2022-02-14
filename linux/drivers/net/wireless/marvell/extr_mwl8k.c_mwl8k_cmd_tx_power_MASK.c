
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* length; void* code; } ;
struct mwl8k_cmd_tx_power {TYPE_1__ header; void** power_level_list; void* sub_ch; void* bw; void* channel; void* band; void* action; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {struct ieee80211_channel* chan; } ;
struct ieee80211_conf {TYPE_2__ chandef; } ;
struct ieee80211_channel {scalar_t__ band; unsigned short hw_value; } ;
typedef enum nl80211_channel_type { ____Placeholder_nl80211_channel_type } nl80211_channel_type ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_2__*) ;
 void* FUNC_1 (unsigned short) ;
 int FUNC_2 (struct mwl8k_cmd_tx_power*) ;
 struct mwl8k_cmd_tx_power* FUNC_3 (int,int ) ;
 int FUNC_4 (struct ieee80211_hw*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_11,
         struct ieee80211_conf *VAR_12,
         unsigned short VAR_13)
{
 struct ieee80211_channel *VAR_14 = VAR_12->chandef.chan;
 enum nl80211_channel_type VAR_15 =
  FUNC_0(&VAR_12->chandef);
 struct mwl8k_cmd_tx_power *VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_16 = FUNC_3(sizeof(*VAR_16), VAR_1);
 if (VAR_16 == ((void*)0))
  return -VAR_0;

 VAR_16->header.code = FUNC_1(VAR_3);
 VAR_16->header.length = FUNC_1(sizeof(*VAR_16));
 VAR_16->action = FUNC_1(VAR_2);

 if (VAR_14->band == VAR_5)
  VAR_16->band = FUNC_1(0x1);
 else if (VAR_14->band == VAR_6)
  VAR_16->band = FUNC_1(0x4);

 VAR_16->channel = FUNC_1(VAR_14->hw_value);

 if (VAR_15 == VAR_10 ||
     VAR_15 == VAR_7) {
  VAR_16->bw = FUNC_1(0x2);
 } else {
  VAR_16->bw = FUNC_1(0x4);
  if (VAR_15 == VAR_8)
   VAR_16->sub_ch = FUNC_1(0x3);
  else if (VAR_15 == VAR_9)
   VAR_16->sub_ch = FUNC_1(0x1);
 }

 for (VAR_18 = 0; VAR_18 < VAR_4; VAR_18++)
  VAR_16->power_level_list[VAR_18] = FUNC_1(VAR_13);

 VAR_17 = FUNC_4(VAR_11, &VAR_16->header);
 FUNC_2(VAR_16);

 return VAR_17;
}

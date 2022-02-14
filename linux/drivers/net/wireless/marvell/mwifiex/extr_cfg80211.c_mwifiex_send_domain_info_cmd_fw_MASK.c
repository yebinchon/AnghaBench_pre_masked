
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct wiphy {struct ieee80211_supported_band** bands; } ;
struct mwifiex_private {int dummy; } ;
struct mwifiex_802_11d_domain_reg {char* country_code; size_t no_of_triplet; struct ieee80211_country_ie_triplet* triplet; } ;
struct mwifiex_adapter {char* country_code; int config_bands; struct mwifiex_802_11d_domain_reg domain_reg; } ;
struct ieee80211_supported_band {size_t n_channels; struct ieee80211_channel* channels; } ;
struct TYPE_2__ {size_t first_channel; size_t num_channels; size_t max_power; } ;
struct ieee80211_country_ie_triplet {TYPE_1__ chans; } ;
struct ieee80211_channel {int flags; size_t hw_value; size_t max_power; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 struct mwifiex_adapter* FUNC_1 (struct wiphy*) ;
 int FUNC_2 (struct mwifiex_adapter*,int ,char*) ;
 struct mwifiex_private* FUNC_3 (struct mwifiex_adapter*,int ) ;
 scalar_t__ FUNC_4 (struct mwifiex_private*,int ,int ,int ,int *,int) ;

int FUNC_5(struct wiphy *VAR_6)
{
 u8 VAR_7 = 0;
 struct ieee80211_country_ie_triplet *VAR_8;
 u8 VAR_9 = 0;
 u8 VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
 u8 VAR_13, VAR_14 = 0;
 enum nl80211_band VAR_15;
 struct ieee80211_supported_band *VAR_16;
 struct ieee80211_channel *VAR_17;
 struct mwifiex_adapter *VAR_18 = FUNC_1(VAR_6);
 struct mwifiex_private *VAR_19;
 struct mwifiex_802_11d_domain_reg *VAR_20 = &VAR_18->domain_reg;


 VAR_20->country_code[0] = VAR_18->country_code[0];
 VAR_20->country_code[1] = VAR_18->country_code[1];
 VAR_20->country_code[2] = ' ';

 VAR_15 = FUNC_0(VAR_18->config_bands);
 if (!VAR_6->bands[VAR_15]) {
  FUNC_2(VAR_18, VAR_0,
       "11D: setting domain info in FW\n");
  return -1;
 }

 VAR_16 = VAR_6->bands[VAR_15];

 for (VAR_13 = 0; VAR_13 < VAR_16->n_channels ; VAR_13++) {
  VAR_17 = &VAR_16->channels[VAR_13];
  if (VAR_17->flags & VAR_3)
   continue;

  if (!VAR_14) {
   VAR_14 = 1;
   VAR_10 = (u32) VAR_17->hw_value;
   VAR_11 = VAR_10;
   VAR_12 = VAR_17->max_power;
   VAR_9 = 1;
   continue;
  }

  if (VAR_17->hw_value == VAR_11 + 1 &&
      VAR_17->max_power == VAR_12) {
   VAR_11++;
   VAR_9++;
  } else {
   VAR_8 = &VAR_20->triplet[VAR_7];
   VAR_8->chans.first_channel = VAR_10;
   VAR_8->chans.num_channels = VAR_9;
   VAR_8->chans.max_power = VAR_12;
   VAR_7++;
   VAR_10 = (u32) VAR_17->hw_value;
   VAR_11 = VAR_10;
   VAR_12 = VAR_17->max_power;
   VAR_9 = 1;
  }
 }

 if (VAR_14) {
  VAR_8 = &VAR_20->triplet[VAR_7];
  VAR_8->chans.first_channel = VAR_10;
  VAR_8->chans.num_channels = VAR_9;
  VAR_8->chans.max_power = VAR_12;
  VAR_7++;
 }

 VAR_20->no_of_triplet = VAR_7;

 VAR_19 = FUNC_3(VAR_18, VAR_5);

 if (FUNC_4(VAR_19, VAR_2,
        VAR_1, 0, ((void*)0), 0)) {
  FUNC_2(VAR_18, VAR_4,
       "11D: setting domain info in FW\n");
  return -1;
 }

 return 0;
}

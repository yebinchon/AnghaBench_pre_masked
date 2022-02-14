
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct wiphy {struct ieee80211_supported_band** bands; } ;
struct TYPE_7__ {void* len; void* type; } ;
struct mrvl_ie_domain_param_set {char* country_code; TYPE_3__ header; struct ieee80211_country_ie_triplet* triplet; } ;
struct lbs_private {char* country_code; TYPE_1__* wdev; } ;
struct ieee80211_supported_band {size_t n_channels; struct ieee80211_channel* channels; } ;
struct TYPE_6__ {size_t first_channel; size_t num_channels; size_t max_power; } ;
struct ieee80211_country_ie_triplet {TYPE_2__ chans; } ;
struct ieee80211_channel {int flags; size_t hw_value; size_t max_power; } ;
struct TYPE_8__ {void* size; } ;
struct cmd_ds_802_11d_domain_info {TYPE_4__ hdr; struct mrvl_ie_domain_param_set domain; void* action; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
typedef int cmd ;
struct TYPE_5__ {struct wiphy* wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int ,struct cmd_ds_802_11d_domain_info*) ;
 int FUNC_2 (char*,size_t,...) ;
 int FUNC_3 (int ,char*,size_t*,int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct cmd_ds_802_11d_domain_info*,int ,int) ;

int FUNC_6(struct lbs_private *VAR_7)
{
 struct wiphy *VAR_8 = VAR_7->wdev->wiphy;
 struct ieee80211_supported_band **VAR_9 = VAR_8->bands;
 struct cmd_ds_802_11d_domain_info VAR_10;
 struct mrvl_ie_domain_param_set *VAR_11 = &VAR_10.domain;
 struct ieee80211_country_ie_triplet *VAR_12;
 enum nl80211_band VAR_13;
 struct ieee80211_channel *VAR_14;
 u8 VAR_15 = 0;
 u8 VAR_16 = 0;
 u8 VAR_17 = 0, VAR_18 = 0, VAR_19 = 0;
 u8 VAR_20, VAR_21 = 0;
 size_t VAR_22;
 int VAR_23 = 0;

 if (!VAR_7->country_code[0])
  goto out;

 FUNC_5(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.action = FUNC_0(VAR_1);

 FUNC_2("Setting country code '%c%c'\n",
      VAR_7->country_code[0], VAR_7->country_code[1]);

 VAR_11->header.type = FUNC_0(VAR_6);


 VAR_11->country_code[0] = VAR_7->country_code[0];
 VAR_11->country_code[1] = VAR_7->country_code[1];
 VAR_11->country_code[2] = ' ';
 for (VAR_13 = 0;
      (VAR_13 < VAR_5) && (VAR_15 < VAR_4);
      VAR_13++) {

  if (!VAR_9[VAR_13])
   continue;

  for (VAR_20 = 0;
       (VAR_20 < VAR_9[VAR_13]->n_channels) && (VAR_15 < VAR_4);
       VAR_20++) {
   VAR_14 = &VAR_9[VAR_13]->channels[VAR_20];
   if (VAR_14->flags & VAR_2)
    continue;

   if (!VAR_21) {
    VAR_21 = 1;
    VAR_18 = VAR_17 = (u32) VAR_14->hw_value;
    VAR_19 = VAR_14->max_power;
    VAR_16 = 1;
    continue;
   }

   if ((VAR_14->hw_value == VAR_18 + 1) &&
     (VAR_14->max_power == VAR_19)) {

    VAR_18++;
    VAR_16++;
   } else {

    FUNC_2("11D triplet (%d, %d, %d)\n",
     VAR_17, VAR_16,
     VAR_19);
    VAR_12 = &VAR_11->triplet[VAR_15];
    VAR_12->chans.first_channel = VAR_17;
    VAR_12->chans.num_channels = VAR_16;
    VAR_12->chans.max_power = VAR_19;
    VAR_15++;
    VAR_21 = 0;
   }
  }

  if (VAR_21) {

   FUNC_2("11D triplet (%d, %d, %d)\n", VAR_17,
    VAR_16, VAR_19);
   VAR_12 = &VAR_11->triplet[VAR_15];
   VAR_12->chans.first_channel = VAR_17;
   VAR_12->chans.num_channels = VAR_16;
   VAR_12->chans.max_power = VAR_19;
   VAR_15++;
  }
 }

 FUNC_2("# triplets %d\n", VAR_15);


 VAR_22 = VAR_15 * sizeof(struct ieee80211_country_ie_triplet);
 VAR_11->header.len = FUNC_0(sizeof(VAR_11->country_code) +
     VAR_22);

 FUNC_3(VAR_3, "802.11D domain param set",
   (u8 *) &VAR_10.domain.country_code,
   FUNC_4(VAR_11->header.len));

 VAR_10.hdr.size = FUNC_0(sizeof(VAR_10.hdr) +
       sizeof(VAR_10.action) +
       sizeof(VAR_10.domain.header) +
       sizeof(VAR_10.domain.country_code) +
       VAR_22);

 VAR_23 = FUNC_1(VAR_7, VAR_0, &VAR_10);

out:
 return VAR_23;
}

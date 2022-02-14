
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct qlink_tlv_hdr {scalar_t__ val; int len; int type; } ;
struct qlink_resp_band_info_get {int num_chans; scalar_t__ info; } ;
struct qlink_channel {int dfs_state; int dfs_cac_ms; int beacon_found; scalar_t__ max_reg_power; scalar_t__ max_power; scalar_t__ max_antenna_gain; int center_freq; int hw_value; int flags; } ;
struct ieee80211_vht_cap {int dummy; } ;
struct ieee80211_channel {int max_antenna_gain; int max_power; int max_reg_power; int flags; void* hw_value; int dfs_state; int dfs_state_entered; void* dfs_cac_ms; int beacon_found; void* center_freq; int band; } ;
struct ieee80211_supported_band {int n_channels; struct ieee80211_channel* channels; struct ieee80211_channel vht_cap; struct ieee80211_channel ht_cap; int band; } ;
struct ieee80211_ht_cap {int dummy; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;



 int VAR_32 ;
 struct ieee80211_channel* FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct ieee80211_channel*) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_channel*,int ,int) ;
 int FUNC_5 (char*,void*,int ,int,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,int,...) ;
 int FUNC_8 (scalar_t__,struct ieee80211_channel*) ;
 int FUNC_9 (scalar_t__,struct ieee80211_channel*) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int
FUNC_11(struct ieee80211_supported_band *VAR_33,
        struct qlink_resp_band_info_get *VAR_34,
        size_t VAR_35)
{
 u16 VAR_36;
 size_t VAR_37;
 size_t VAR_38;
 const struct qlink_tlv_hdr *VAR_39;
 const struct qlink_channel *VAR_40;
 struct ieee80211_channel *VAR_41;
 unsigned int VAR_42 = 0;
 u32 VAR_43;

 FUNC_4(&VAR_33->ht_cap, 0, sizeof(VAR_33->ht_cap));
 FUNC_4(&VAR_33->vht_cap, 0, sizeof(VAR_33->vht_cap));

 if (VAR_33->channels) {
  if (VAR_33->n_channels == VAR_34->num_chans) {
   FUNC_4(VAR_33->channels, 0,
          sizeof(*VAR_33->channels) * VAR_33->n_channels);
  } else {
   FUNC_1(VAR_33->channels);
   VAR_33->n_channels = 0;
   VAR_33->channels = ((void*)0);
  }
 }

 VAR_33->n_channels = VAR_34->num_chans;
 if (VAR_33->n_channels == 0)
  return 0;

 if (!VAR_33->channels)
  VAR_33->channels = FUNC_0(VAR_33->n_channels, sizeof(*VAR_41),
      VAR_2);
 if (!VAR_33->channels) {
  VAR_33->n_channels = 0;
  return -VAR_1;
 }

 VAR_39 = (struct qlink_tlv_hdr *)VAR_34->info;

 while (VAR_35 >= sizeof(*VAR_39)) {
  VAR_36 = FUNC_2(VAR_39->type);
  VAR_38 = FUNC_2(VAR_39->len);
  VAR_37 = VAR_38 + sizeof(*VAR_39);

  if (VAR_37 > VAR_35) {
   FUNC_7("malformed TLV 0x%.2X; LEN: %zu\n",
    VAR_36, VAR_37);
   goto error_ret;
  }

  switch (VAR_36) {
  case 130:
   if (FUNC_10(VAR_38 != sizeof(*VAR_40))) {
    FUNC_6("invalid channel TLV len %zu\n",
           VAR_37);
    goto error_ret;
   }

   if (VAR_42 == VAR_33->n_channels) {
    FUNC_6("too many channel TLVs\n");
    goto error_ret;
   }

   VAR_40 = (const struct qlink_channel *)VAR_39->val;
   VAR_41 = &VAR_33->channels[VAR_42++];
   VAR_43 = FUNC_3(VAR_40->flags);

   VAR_41->hw_value = FUNC_2(VAR_40->hw_value);
   VAR_41->band = VAR_33->band;
   VAR_41->center_freq = FUNC_2(VAR_40->center_freq);
   VAR_41->max_antenna_gain = (int)VAR_40->max_antenna_gain;
   VAR_41->max_power = (int)VAR_40->max_power;
   VAR_41->max_reg_power = (int)VAR_40->max_reg_power;
   VAR_41->beacon_found = VAR_40->beacon_found;
   VAR_41->dfs_cac_ms = FUNC_3(VAR_40->dfs_cac_ms);
   VAR_41->flags = 0;

   if (VAR_43 & VAR_18)
    VAR_41->flags |= VAR_3;

   if (VAR_43 & VAR_27)
    VAR_41->flags |= VAR_12;

   if (VAR_43 & VAR_26)
    VAR_41->flags |= VAR_11;

   if (VAR_43 & VAR_25)
    VAR_41->flags |= VAR_10;

   if (VAR_43 & VAR_28)
    VAR_41->flags |= VAR_13;

   if (VAR_43 & VAR_24)
    VAR_41->flags |= VAR_9;

   if (VAR_43 & VAR_22)
    VAR_41->flags |= VAR_7;

   if (VAR_43 & VAR_19)
    VAR_41->flags |= VAR_4;

   if (VAR_43 & VAR_20)
    VAR_41->flags |= VAR_5;

   if (VAR_43 & VAR_23)
    VAR_41->flags |= VAR_8;

   if (VAR_43 & VAR_21)
    VAR_41->flags |= VAR_6;

   if (VAR_43 & VAR_29) {
    VAR_41->flags |= VAR_14;
    VAR_41->dfs_state_entered = VAR_32;

    if (VAR_40->dfs_state == VAR_31)
     VAR_41->dfs_state = VAR_17;
    else if (VAR_40->dfs_state ==
     VAR_30)
     VAR_41->dfs_state = VAR_15;
    else
     VAR_41->dfs_state =
      VAR_16;
   }

   FUNC_5("chan=%d flags=%#x max_pow=%d max_reg_pow=%d\n",
     VAR_41->hw_value, VAR_41->flags, VAR_41->max_power,
     VAR_41->max_reg_power);
   break;
  case 129:
   if (FUNC_10(VAR_38 !=
         sizeof(struct ieee80211_ht_cap))) {
    FUNC_6("bad HTCAP TLV len %zu\n", VAR_38);
    goto error_ret;
   }

   FUNC_8(VAR_39->val, &VAR_33->ht_cap);
   break;
  case 128:
   if (FUNC_10(VAR_38 !=
         sizeof(struct ieee80211_vht_cap))) {
    FUNC_6("bad VHTCAP TLV len %zu\n", VAR_38);
    goto error_ret;
   }

   FUNC_9(VAR_39->val,
             &VAR_33->vht_cap);
   break;
  default:
   FUNC_7("unknown TLV type: %#x\n", VAR_36);
   break;
  }

  VAR_35 -= VAR_37;
  VAR_39 = (struct qlink_tlv_hdr *)(VAR_39->val + VAR_38);
 }

 if (VAR_35) {
  FUNC_6("malformed TLV buf; bytes left: %zu\n", VAR_35);
  goto error_ret;
 }

 if (VAR_33->n_channels != VAR_42) {
  FUNC_6("channel count mismatch: reported=%d, parsed=%d\n",
         VAR_33->n_channels, VAR_42);
  goto error_ret;
 }

 return 0;

error_ret:
 FUNC_1(VAR_33->channels);
 VAR_33->channels = ((void*)0);
 VAR_33->n_channels = 0;

 return -VAR_0;
}

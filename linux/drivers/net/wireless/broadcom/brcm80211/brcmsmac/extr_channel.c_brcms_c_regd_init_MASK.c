
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {int regulatory_flags; int reg_notifier; struct ieee80211_supported_band** bands; } ;
struct ieee80211_supported_band {int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_channel {int flags; int hw_value; } ;
struct brcms_regd {int regdomain; } ;
struct brcms_chanvec {int vec; } ;
struct brcms_c_info {struct wiphy* wiphy; struct brcms_band** bandstate; TYPE_2__* pub; TYPE_1__* cmi; } ;
struct brcms_band {int bandtype; int pi; } ;
struct TYPE_4__ {int _nbands; } ;
struct TYPE_3__ {struct brcms_regd* world_regd; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct wiphy*,int ) ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct wiphy*,int ) ;
 int FUNC_3 (int ,int ,struct brcms_chanvec*) ;

void FUNC_4(struct brcms_c_info *VAR_8)
{
 struct wiphy *VAR_9 = VAR_8->wiphy;
 const struct brcms_regd *VAR_10 = VAR_8->cmi->world_regd;
 struct ieee80211_supported_band *VAR_11;
 struct ieee80211_channel *VAR_12;
 struct brcms_chanvec VAR_13;
 struct brcms_band *VAR_14;
 int VAR_15, VAR_16;


 for (VAR_15 = 0; VAR_15 < VAR_8->pub->_nbands; VAR_15++) {
  VAR_14 = VAR_8->bandstate[VAR_15];

  FUNC_3(VAR_14->pi, VAR_14->bandtype,
           &VAR_13);

  if (VAR_15 == VAR_0)
   VAR_11 = VAR_9->bands[VAR_2];
  else
   VAR_11 = VAR_9->bands[VAR_3];

  for (VAR_16 = 0; VAR_16 < VAR_11->n_channels; VAR_16++) {
   VAR_12 = &VAR_11->channels[VAR_16];
   if (!FUNC_1(VAR_13.vec, VAR_12->hw_value))
    VAR_12->flags |= VAR_1;
  }
 }

 VAR_8->wiphy->reg_notifier = VAR_7;
 VAR_8->wiphy->regulatory_flags |= VAR_5 |
     VAR_6;
 FUNC_2(VAR_8->wiphy, VAR_10->regdomain);
 FUNC_0(VAR_9, VAR_4);
}

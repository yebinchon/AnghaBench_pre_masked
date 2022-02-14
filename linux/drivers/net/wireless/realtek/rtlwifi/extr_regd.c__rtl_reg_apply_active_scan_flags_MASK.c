
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {struct ieee80211_supported_band** bands; } ;
struct ieee80211_supported_band {struct ieee80211_channel* channels; } ;
struct ieee80211_reg_rule {int flags; } ;
struct ieee80211_channel {int flags; int center_freq; } ;
typedef enum nl80211_reg_initiator { ____Placeholder_nl80211_reg_initiator } nl80211_reg_initiator ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_reg_rule const*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ieee80211_reg_rule* FUNC_1 (struct wiphy*,int ) ;

__attribute__((used)) static void FUNC_2(struct wiphy *VAR_4,
          enum nl80211_reg_initiator
          VAR_5)
{
 struct ieee80211_supported_band *VAR_6;
 struct ieee80211_channel *VAR_7;
 const struct ieee80211_reg_rule *VAR_8;

 if (!VAR_4->bands[VAR_1])
  return;
 VAR_6 = VAR_4->bands[VAR_1];





 if (VAR_5 != VAR_2) {
  VAR_7 = &VAR_6->channels[11];
  if (VAR_7->flags & VAR_0)
   VAR_7->flags &= ~VAR_0;
  VAR_7 = &VAR_6->channels[12];
  if (VAR_7->flags & VAR_0)
   VAR_7->flags &= ~VAR_0;
  return;
 }
 VAR_7 = &VAR_6->channels[11];
 VAR_8 = FUNC_1(VAR_4, VAR_7->center_freq);
 if (!FUNC_0(VAR_8)) {
  if (!(VAR_8->flags & VAR_3))
   if (VAR_7->flags & VAR_0)
    VAR_7->flags &= ~VAR_0;
 }

 VAR_7 = &VAR_6->channels[12];
 VAR_8 = FUNC_1(VAR_4, VAR_7->center_freq);
 if (!FUNC_0(VAR_8)) {
  if (!(VAR_8->flags & VAR_3))
   if (VAR_7->flags & VAR_0)
    VAR_7->flags &= ~VAR_0;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {struct ieee80211_supported_band** bands; } ;
struct ieee80211_supported_band {unsigned int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_reg_rule {int flags; } ;
struct ieee80211_channel {int flags; int center_freq; } ;
typedef enum nl80211_reg_initiator { ____Placeholder_nl80211_reg_initiator } nl80211_reg_initiator ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ieee80211_reg_rule const*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct ieee80211_reg_rule* FUNC_2 (struct wiphy*,int ) ;

__attribute__((used)) static void FUNC_3(struct wiphy *VAR_4,
        enum nl80211_reg_initiator VAR_5)
{
 enum nl80211_band VAR_6;
 struct ieee80211_supported_band *VAR_7;
 const struct ieee80211_reg_rule *VAR_8;
 struct ieee80211_channel *VAR_9;
 unsigned int VAR_10;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (!VAR_4->bands[VAR_6])
   continue;

  VAR_7 = VAR_4->bands[VAR_6];
  for (VAR_10 = 0; VAR_10 < VAR_7->n_channels; VAR_10++) {
   VAR_9 = &VAR_7->channels[VAR_10];

   VAR_8 = FUNC_2(VAR_4,
       FUNC_1(VAR_9->center_freq));
   if (FUNC_0(VAR_8))
    continue;

   VAR_9->flags &= ~VAR_0;

   if (!(VAR_8->flags & VAR_2))
    VAR_9->flags &= ~VAR_1;
  }
 }
}

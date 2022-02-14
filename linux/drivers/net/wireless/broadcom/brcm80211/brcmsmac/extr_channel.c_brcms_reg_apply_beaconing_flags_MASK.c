
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {struct ieee80211_supported_band** bands; } ;
struct ieee80211_supported_band {int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_reg_rule {int flags; } ;
struct ieee80211_channel {int flags; scalar_t__ beacon_found; int center_freq; } ;
typedef enum nl80211_reg_initiator { ____Placeholder_nl80211_reg_initiator } nl80211_reg_initiator ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ieee80211_reg_rule const*) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ieee80211_reg_rule* FUNC_2 (struct wiphy*,int ) ;

__attribute__((used)) static void
FUNC_3(struct wiphy *VAR_6,
    enum nl80211_reg_initiator VAR_7)
{
 struct ieee80211_supported_band *VAR_8;
 struct ieee80211_channel *VAR_9;
 const struct ieee80211_reg_rule *VAR_10;
 int VAR_11, VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  VAR_8 = VAR_6->bands[VAR_11];
  if (!VAR_8)
   continue;

  for (VAR_12 = 0; VAR_12 < VAR_8->n_channels; VAR_12++) {
   VAR_9 = &VAR_8->channels[VAR_12];

   if (VAR_9->flags &
       (VAR_0 | VAR_2))
    continue;

   if (VAR_7 == VAR_3) {
    VAR_10 = FUNC_2(VAR_6,
           FUNC_1(VAR_9->center_freq));
    if (FUNC_0(VAR_10))
     continue;

    if (!(VAR_10->flags & VAR_4))
     VAR_9->flags &= ~VAR_1;
   } else if (VAR_9->beacon_found) {
    VAR_9->flags &= ~VAR_1;
   }
  }
 }
}

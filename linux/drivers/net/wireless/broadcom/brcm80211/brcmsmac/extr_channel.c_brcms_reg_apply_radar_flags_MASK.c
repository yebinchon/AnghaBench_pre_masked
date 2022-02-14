
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {struct ieee80211_supported_band** bands; } ;
struct ieee80211_supported_band {int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_channel {int flags; int center_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct wiphy *VAR_4)
{
 struct ieee80211_supported_band *VAR_5;
 struct ieee80211_channel *VAR_6;
 int VAR_7;

 VAR_5 = VAR_4->bands[VAR_3];
 if (!VAR_5)
  return;

 for (VAR_7 = 0; VAR_7 < VAR_5->n_channels; VAR_7++) {
  VAR_6 = &VAR_5->channels[VAR_7];

  if (!FUNC_0(VAR_6->center_freq))
   continue;





  if (!(VAR_6->flags & VAR_0))
   VAR_6->flags |= VAR_2 |
         VAR_1;
 }
}

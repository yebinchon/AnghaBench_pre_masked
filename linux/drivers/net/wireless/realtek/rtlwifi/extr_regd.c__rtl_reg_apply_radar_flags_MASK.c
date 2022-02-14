
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {struct ieee80211_supported_band** bands; } ;
struct ieee80211_supported_band {unsigned int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_channel {int flags; int center_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct wiphy *VAR_5)
{
 struct ieee80211_supported_band *VAR_6;
 struct ieee80211_channel *VAR_7;
 unsigned int VAR_8;

 if (!VAR_5->bands[VAR_4])
  return;

 VAR_6 = VAR_5->bands[VAR_4];

 for (VAR_8 = 0; VAR_8 < VAR_6->n_channels; VAR_8++) {
  VAR_7 = &VAR_6->channels[VAR_8];
  if (!FUNC_0(VAR_7->center_freq))
   continue;
  if (!(VAR_7->flags & VAR_0))
   VAR_7->flags |= VAR_3 |
       VAR_1 |
       VAR_2;
 }
}

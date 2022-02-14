
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {struct ieee80211_supported_band** bands; } ;
struct ieee80211_supported_band {unsigned int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_channel {int dummy; } ;
struct ath_regulatory {int dummy; } ;
typedef enum nl80211_reg_initiator { ____Placeholder_nl80211_reg_initiator } nl80211_reg_initiator ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int FUNC_0 (struct wiphy*,struct ath_regulatory*,int,struct ieee80211_channel*) ;

__attribute__((used)) static void
FUNC_1(struct wiphy *VAR_1,
         struct ath_regulatory *VAR_2,
         enum nl80211_reg_initiator VAR_3)
{
 enum nl80211_band VAR_4;
 struct ieee80211_supported_band *VAR_5;
 struct ieee80211_channel *VAR_6;
 unsigned int VAR_7;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (!VAR_1->bands[VAR_4])
   continue;
  VAR_5 = VAR_1->bands[VAR_4];
  for (VAR_7 = 0; VAR_7 < VAR_5->n_channels; VAR_7++) {
   VAR_6 = &VAR_5->channels[VAR_7];
   FUNC_0(VAR_1, VAR_2,
       VAR_3, VAR_6);
  }
 }
}

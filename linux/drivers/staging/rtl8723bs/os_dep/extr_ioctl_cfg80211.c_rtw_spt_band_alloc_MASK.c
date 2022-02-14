
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_supported_band {int band; int n_channels; int n_bitrates; struct ieee80211_rate* bitrates; struct ieee80211_channel* channels; } ;
struct ieee80211_rate {int dummy; } ;
struct ieee80211_channel {int dummy; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211_channel*) ;
 int FUNC_1 (struct ieee80211_rate*) ;
 struct ieee80211_supported_band* FUNC_2 (int) ;

__attribute__((used)) static struct ieee80211_supported_band *FUNC_3(
 enum nl80211_band VAR_3
 )
{
 struct ieee80211_supported_band *VAR_4 = ((void*)0);
 int VAR_5, VAR_6;

 if (VAR_3 == VAR_0)
 {
  VAR_5 = VAR_1;
  VAR_6 = VAR_2;
 }
 else
 {
  goto exit;
 }

 VAR_4 = FUNC_2(sizeof(struct ieee80211_supported_band) +
          sizeof(struct ieee80211_channel) * VAR_5 +
          sizeof(struct ieee80211_rate) * VAR_6);
 if (!VAR_4)
  goto exit;

 VAR_4->channels = (struct ieee80211_channel*)(((u8 *)VAR_4)+sizeof(struct ieee80211_supported_band));
 VAR_4->bitrates = (struct ieee80211_rate*)(((u8 *)VAR_4->channels)+sizeof(struct ieee80211_channel)*VAR_5);
 VAR_4->band = VAR_3;
 VAR_4->n_channels = VAR_5;
 VAR_4->n_bitrates = VAR_6;

 if (VAR_3 == VAR_0)
 {
  FUNC_0(VAR_4->channels);
  FUNC_1(VAR_4->bitrates);
 }



exit:

 return VAR_4;
}

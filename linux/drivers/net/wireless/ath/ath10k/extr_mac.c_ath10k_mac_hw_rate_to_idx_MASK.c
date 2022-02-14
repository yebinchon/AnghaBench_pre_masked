
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ieee80211_supported_band {int n_bitrates; struct ieee80211_rate* bitrates; } ;
struct ieee80211_rate {scalar_t__ hw_value; int flags; scalar_t__ hw_value_short; int bitrate; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

u8 FUNC_1(const struct ieee80211_supported_band *VAR_1,
        u8 VAR_2, bool VAR_3)
{
 const struct ieee80211_rate *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1->n_bitrates; VAR_5++) {
  VAR_4 = &VAR_1->bitrates[VAR_5];

  if (FUNC_0(VAR_4->bitrate) != VAR_3)
   continue;

  if (VAR_4->hw_value == VAR_2)
   return VAR_5;
  else if (VAR_4->flags & VAR_0 &&
    VAR_4->hw_value_short == VAR_2)
   return VAR_5;
 }

 return 0;
}

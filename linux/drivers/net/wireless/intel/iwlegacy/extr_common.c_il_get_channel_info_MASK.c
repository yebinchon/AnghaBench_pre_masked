
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct il_priv {int channel_count; struct il_channel_info const* channel_info; } ;
struct il_channel_info {int channel; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int FUNC_0 () ;



const struct il_channel_info *
FUNC_1(const struct il_priv *VAR_0, enum nl80211_band VAR_1,
      u16 VAR_2)
{
 int VAR_3;

 switch (VAR_1) {
 case 128:
  for (VAR_3 = 14; VAR_3 < VAR_0->channel_count; VAR_3++) {
   if (VAR_0->channel_info[VAR_3].channel == VAR_2)
    return &VAR_0->channel_info[VAR_3];
  }
  break;
 case 129:
  if (VAR_2 >= 1 && VAR_2 <= 14)
   return &VAR_0->channel_info[VAR_2 - 1];
  break;
 default:
  FUNC_0();
 }

 return ((void*)0);
}

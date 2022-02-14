
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtw_channel_params {int* cch_by_bw; int center_chan; int bandwidth; int primary_chan_idx; } ;
struct ieee80211_channel {int hw_value; int center_freq; } ;
struct cfg80211_chan_def {int width; int center_freq1; struct ieee80211_channel* chan; } ;
typedef enum nl80211_chan_width { ____Placeholder_nl80211_chan_width } nl80211_chan_width ;






 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(struct cfg80211_chan_def *VAR_4,
       struct rtw_channel_params *VAR_5)
{
 struct ieee80211_channel *VAR_6 = VAR_4->chan;
 enum nl80211_chan_width VAR_7 = VAR_4->width;
 u8 *VAR_8 = VAR_5->cch_by_bw;
 u32 VAR_9, VAR_10;
 u8 VAR_11;
 u8 VAR_12 = VAR_0;
 u8 VAR_13 = 0;
 u8 VAR_14;

 VAR_11 = VAR_6->hw_value;
 VAR_9 = VAR_6->center_freq;
 VAR_10 = VAR_4->center_freq1;


 VAR_8[VAR_0] = VAR_6->hw_value;

 switch (VAR_7) {
 case 130:
 case 131:
  VAR_12 = VAR_0;
  VAR_13 = 0;
  break;
 case 129:
  VAR_12 = VAR_1;
  if (VAR_9 > VAR_10) {
   VAR_13 = 1;
   VAR_11 -= 2;
  } else {
   VAR_13 = 2;
   VAR_11 += 2;
  }
  break;
 case 128:
  VAR_12 = VAR_2;
  if (VAR_9 > VAR_10) {
   if (VAR_9 - VAR_10 == 10) {
    VAR_13 = 1;
    VAR_11 -= 2;
   } else {
    VAR_13 = 3;
    VAR_11 -= 6;
   }



   VAR_8[VAR_1] = VAR_11 + 4;
  } else {
   if (VAR_10 - VAR_9 == 10) {
    VAR_13 = 2;
    VAR_11 += 2;
   } else {
    VAR_13 = 4;
    VAR_11 += 6;
   }



   VAR_8[VAR_1] = VAR_11 - 4;
  }
  break;
 default:
  VAR_11 = 0;
  break;
 }

 VAR_5->center_chan = VAR_11;
 VAR_5->bandwidth = VAR_12;
 VAR_5->primary_chan_idx = VAR_13;


 VAR_8[VAR_12] = VAR_11;

 for (VAR_14 = VAR_12 + 1; VAR_14 <= VAR_3; VAR_14++)
  VAR_8[VAR_14] = 0;
}

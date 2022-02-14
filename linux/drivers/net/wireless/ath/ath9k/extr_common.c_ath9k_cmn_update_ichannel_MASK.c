
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ieee80211_channel {scalar_t__ band; int center_freq; } ;
struct cfg80211_chan_def {int width; struct ieee80211_channel* chan; int center_freq1; } ;
struct ath9k_channel {int channelFlags; struct ieee80211_channel* chan; int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;





 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct ath9k_channel *VAR_7,
          struct cfg80211_chan_def *VAR_8)
{
 struct ieee80211_channel *VAR_9 = VAR_8->chan;
 u16 VAR_10 = 0;

 VAR_7->channel = VAR_9->center_freq;
 VAR_7->chan = VAR_9;

 if (VAR_9->band == VAR_6)
  VAR_10 |= VAR_0;

 switch (VAR_8->width) {
 case 128:
  VAR_10 |= VAR_5;
  break;
 case 132:
  VAR_10 |= VAR_1;
  break;
 case 130:
  break;
 case 131:
  VAR_10 |= VAR_2;
  break;
 case 129:
  if (VAR_8->center_freq1 > VAR_8->chan->center_freq)
   VAR_10 |= VAR_4 | VAR_2;
  else
   VAR_10 |= VAR_3 | VAR_2;
  break;
 default:
  FUNC_0(1);
 }

 VAR_7->channelFlags = VAR_10;
}

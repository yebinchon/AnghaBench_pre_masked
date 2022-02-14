
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int hw_value; } ;
struct ath5k_hw {int ah_bwmode; int ah_short_slot; struct ieee80211_channel* ah_current_channel; } ;






 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;

unsigned int
FUNC_0(struct ath5k_hw *VAR_6)
{
 struct ieee80211_channel *VAR_7 = VAR_6->ah_current_channel;
 unsigned int VAR_8;

 switch (VAR_6->ah_bwmode) {
 case 130:
  VAR_8 = VAR_4;
  break;
 case 131:
  VAR_8 = VAR_2;
  break;
 case 129:
  VAR_8 = VAR_3;
  break;
 case 128:
 default:
  VAR_8 = VAR_1;
  if ((VAR_7->hw_value == VAR_5) && !VAR_6->ah_short_slot)
   VAR_8 = VAR_0;
  break;
 }

 return VAR_8;
}

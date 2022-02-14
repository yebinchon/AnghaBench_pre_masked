
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int hw_value; } ;
struct ath5k_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct ath5k_hw*,char*) ;

int
FUNC_1(struct ath5k_hw *VAR_3,
  struct ieee80211_channel *VAR_4)
{
 switch (VAR_4->hw_value) {
 case 130:
  return VAR_0;
 case 128:
  return VAR_2;
 case 129:
  return VAR_1;
 default:
  FUNC_0(VAR_3, "channel is not A/B/G!");
  return VAR_0;
 }
}

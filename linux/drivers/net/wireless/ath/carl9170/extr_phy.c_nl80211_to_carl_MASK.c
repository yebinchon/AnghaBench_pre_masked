
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum nl80211_channel_type { ____Placeholder_nl80211_channel_type } nl80211_channel_type ;
typedef enum carl9170_bw { ____Placeholder_carl9170_bw } carl9170_bw ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





__attribute__((used)) static enum carl9170_bw FUNC_1(enum nl80211_channel_type VAR_3)
{
 switch (VAR_3) {
 case 128:
 case 131:
  return VAR_0;
 case 130:
  return VAR_2;
 case 129:
  return VAR_1;
 default:
  FUNC_0();
 }
}

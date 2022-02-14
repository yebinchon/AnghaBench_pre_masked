
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_hw {int dummy; } ;
typedef enum wireless_mode { ____Placeholder_wireless_mode } wireless_mode ;






__attribute__((used)) static long FUNC_0(struct ieee80211_hw *VAR_0,
      enum wireless_mode VAR_1,
      u8 VAR_2)
{
 long VAR_3;
 long VAR_4;

 switch (VAR_1) {
 case 130:
  VAR_3 = -7;
  break;
 case 129:
 case 128:
  VAR_3 = -8;
  break;
 default:
  VAR_3 = -8;
  break;
 }
 VAR_4 = VAR_2 / 2 + VAR_3;
 return VAR_4;
}

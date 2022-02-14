
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_hw {int dummy; } ;
__attribute__((used)) static u8 FUNC_0(struct ieee80211_hw *VAR_0, u8 VAR_1)
{
 u8 VAR_2 = 0;

 switch (VAR_1) {
 case 128:
  VAR_2 = 0;
  break;
 case 131:
 case 129:
  VAR_2 = 4;
  break;
 case 130:
  VAR_2 = 2;
  break;
 case 132:
  VAR_2 = 6;
  break;
 case 133:
  VAR_2 = 7;
  break;
 case 134:
  VAR_2 = 8;
  break;
 default:
  VAR_2 = 0;
  break;
 }
 return VAR_2;
}

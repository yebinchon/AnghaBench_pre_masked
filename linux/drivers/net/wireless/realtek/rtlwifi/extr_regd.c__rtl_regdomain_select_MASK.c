
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_regulatory {int country_code; } ;
struct ieee80211_regdomain {int dummy; } ;
 struct ieee80211_regdomain const VAR_0 ;
 struct ieee80211_regdomain const VAR_1 ;
 struct ieee80211_regdomain const VAR_2 ;
 struct ieee80211_regdomain const VAR_3 ;
 struct ieee80211_regdomain const VAR_4 ;
 struct ieee80211_regdomain const VAR_5 ;
 struct ieee80211_regdomain const VAR_6 ;

__attribute__((used)) static const struct ieee80211_regdomain *FUNC_0(
      struct rtl_regulatory *VAR_7)
{
 switch (VAR_7->country_code) {
 case 140:
  return &VAR_6;
 case 137:
  return &VAR_0;
 case 130:
  return &VAR_5;
 case 141:
 case 132:
 case 139:
 case 136:
  return &VAR_1;
 case 134:
 case 133:
 case 131:
 case 135:
  return &VAR_4;
 case 138:
  return &VAR_3;
 case 129:
 case 128:
  return &VAR_2;
 default:
  return &VAR_6;
 }
}

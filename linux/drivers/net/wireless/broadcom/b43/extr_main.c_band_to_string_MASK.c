
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int FUNC_0 (int) ;



__attribute__((used)) static const char *FUNC_1(enum nl80211_band VAR_0)
{
 switch (VAR_0) {
 case 128:
  return "5";
 case 129:
  return "2.4";
 default:
  break;
 }
 FUNC_0(1);
 return "";
}

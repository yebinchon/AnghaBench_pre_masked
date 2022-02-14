
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_sta {int bandwidth; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u8 FUNC_0(struct ieee80211_sta *VAR_4)
{
 switch (VAR_4->bandwidth) {
 case 131:
  return VAR_0;
 case 128:
  return VAR_3;
 case 129:
  return VAR_2;
 case 130:
 default:
  return VAR_1;
 }
}

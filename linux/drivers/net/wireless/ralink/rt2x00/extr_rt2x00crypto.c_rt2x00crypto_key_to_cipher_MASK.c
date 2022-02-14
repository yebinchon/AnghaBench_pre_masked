
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_key_conf {int cipher; } ;
typedef enum cipher { ____Placeholder_cipher } cipher ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





enum cipher FUNC_0(struct ieee80211_key_conf *VAR_5)
{
 switch (VAR_5->cipher) {
 case 128:
  return VAR_4;
 case 129:
  return VAR_3;
 case 130:
  return VAR_2;
 case 131:
  return VAR_0;
 default:
  return VAR_1;
 }
}

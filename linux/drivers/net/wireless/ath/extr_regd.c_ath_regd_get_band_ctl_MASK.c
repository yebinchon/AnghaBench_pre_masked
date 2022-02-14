
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ath_regulatory {scalar_t__ country_code; int region; TYPE_1__* regpair; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_2__ {int reg_5ghz_ctl; int reg_2ghz_ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;





 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ath_regulatory*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

u32 FUNC_2(struct ath_regulatory *VAR_6,
     enum nl80211_band VAR_7)
{
 if (!VAR_6->regpair ||
     (VAR_6->country_code == VAR_3 &&
      FUNC_1(FUNC_0(VAR_6)))) {
  return VAR_5;
 }

 if (FUNC_0(VAR_6) == VAR_3) {
  switch (VAR_6->region) {
  case 129:
   return VAR_1;
  case 130:
   return VAR_0;
  case 128:
   return VAR_2;
  default:
   break;
  }
 }

 switch (VAR_7) {
 case 132:
  return VAR_6->regpair->reg_2ghz_ctl;
 case 131:
  return VAR_6->regpair->reg_5ghz_ctl;
 default:
  return VAR_4;
 }
}

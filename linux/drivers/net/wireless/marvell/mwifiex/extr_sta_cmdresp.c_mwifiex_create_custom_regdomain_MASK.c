
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct mwifiex_private {int dummy; } ;
struct ieee80211_regdomain {int n_reg_rules; char* alpha2; struct ieee80211_reg_rule* reg_rules; } ;
struct TYPE_4__ {scalar_t__ max_bandwidth_khz; void* start_freq_khz; void* end_freq_khz; } ;
struct TYPE_3__ {int max_eirp; } ;
struct ieee80211_reg_rule {TYPE_2__ freq_range; int flags; TYPE_1__ power_rule; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_regdomain* FUNC_1 (int ) ;
 int VAR_2 ;
 void* FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct ieee80211_regdomain*) ;
 struct ieee80211_regdomain* FUNC_6 (int ,int ) ;
 int VAR_13 ;
 int FUNC_7 (struct ieee80211_regdomain*,int ,int) ;

__attribute__((used)) static struct ieee80211_regdomain *
FUNC_8(struct mwifiex_private *VAR_14,
    u8 *VAR_15, u16 VAR_16)
{
 u16 VAR_17 = VAR_16 / 2;
 struct ieee80211_regdomain *VAR_18;
 struct ieee80211_reg_rule *VAR_19;
 bool VAR_20;
 int VAR_21, VAR_22, VAR_23 = 0;
 u32 VAR_24, VAR_25 = 0;
 u8 VAR_26, VAR_27 = 0, VAR_28 = 0;

 if (FUNC_3(VAR_17 > VAR_10))
  return FUNC_1(-VAR_0);

 VAR_18 = FUNC_6(FUNC_7(VAR_18, VAR_13, VAR_17), VAR_2);
 if (!VAR_18)
  return FUNC_1(-VAR_1);

 for (VAR_21 = 0; VAR_21 < VAR_17; VAR_21++) {
  u8 VAR_29;
  enum nl80211_band VAR_30;

  VAR_29 = *VAR_15++;
  if (!VAR_29) {
   FUNC_5(VAR_18);
   return ((void*)0);
  }
  VAR_26 = *VAR_15++;
  VAR_30 = (VAR_29 <= 14) ? VAR_8 : VAR_9;
  VAR_22 = FUNC_4(VAR_29, VAR_30);
  VAR_20 = 0;

  if (VAR_26 & VAR_4)
   continue;

  if (VAR_30 == VAR_9) {
   if (!(VAR_26 & VAR_6))
    VAR_24 = FUNC_2(80);
   else if (!(VAR_26 & VAR_5))
    VAR_24 = FUNC_2(40);
   else
    VAR_24 = FUNC_2(20);
  } else {
   if (!(VAR_26 & VAR_5))
    VAR_24 = FUNC_2(40);
   else
    VAR_24 = FUNC_2(20);
  }

  if (VAR_21 == 0 || VAR_27 != VAR_26 || VAR_25 != VAR_24 ||
      VAR_22 - VAR_23 > 20) {
   VAR_28++;
   VAR_20 = 1;
  }

  VAR_19 = &VAR_18->reg_rules[VAR_28 - 1];

  VAR_19->freq_range.end_freq_khz = FUNC_2(VAR_22 + 10);

  VAR_27 = VAR_26;
  VAR_23 = VAR_22;
  VAR_25 = VAR_24;

  if (!VAR_20)
   continue;

  VAR_19->freq_range.start_freq_khz = FUNC_2(VAR_22 - 10);
  VAR_19->power_rule.max_eirp = FUNC_0(19);

  if (VAR_26 & VAR_7)
   VAR_19->flags = VAR_12;

  if (VAR_26 & VAR_3)
   VAR_19->flags = VAR_11;

  VAR_19->freq_range.max_bandwidth_khz = VAR_24;
 }

 VAR_18->n_reg_rules = VAR_28;
 VAR_18->alpha2[0] = '9';
 VAR_18->alpha2[1] = '9';

 return VAR_18;
}

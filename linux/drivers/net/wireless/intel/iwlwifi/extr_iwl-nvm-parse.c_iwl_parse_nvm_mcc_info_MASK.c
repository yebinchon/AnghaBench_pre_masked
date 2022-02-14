
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct iwl_cfg {scalar_t__ nvm_type; scalar_t__ uhb_supported; } ;
struct ieee80211_regdomain {int* alpha2; int n_reg_rules; struct ieee80211_reg_rule* reg_rules; } ;
struct TYPE_4__ {scalar_t__ max_bandwidth_khz; void* end_freq_khz; void* start_freq_khz; } ;
struct TYPE_3__ {int max_eirp; int max_antenna_gain; } ;
struct ieee80211_reg_rule {TYPE_2__ freq_range; scalar_t__ flags; TYPE_1__ power_rule; } ;
struct device {int dummy; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_regdomain* FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct device*,int ,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_4 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int const,int) ;
 int* VAR_16 ;
 int* VAR_17 ;
 scalar_t__ FUNC_9 (int const*,int,int,struct iwl_cfg const*) ;
 int FUNC_10 (struct device*,int ,int const,int) ;
 int* VAR_18 ;
 int FUNC_11 (struct ieee80211_regdomain*) ;
 struct ieee80211_regdomain* FUNC_12 (struct ieee80211_regdomain*,int ,int ) ;
 struct ieee80211_regdomain* FUNC_13 (int ,int ) ;
 int FUNC_14 (int*,int,struct ieee80211_reg_rule*) ;
 int VAR_19 ;
 int FUNC_15 (struct ieee80211_regdomain*,int ,int) ;

struct ieee80211_regdomain *
FUNC_16(struct device *VAR_20, const struct iwl_cfg *VAR_21,
         int VAR_22, __le32 *VAR_23, u16 VAR_24,
         u16 VAR_25)
{
 int VAR_26;
 u16 VAR_27;
 u32 VAR_28, VAR_29 = 0;
 const u16 *VAR_30;
 struct ieee80211_regdomain *VAR_31, *VAR_32;
 struct ieee80211_reg_rule *VAR_33;
 enum nl80211_band VAR_34;
 int VAR_35, VAR_36 = 0;
 int VAR_37 = 0;
 bool VAR_38;
 int VAR_39;

 if (VAR_21->uhb_supported) {
  VAR_39 = VAR_9;
  VAR_30 = VAR_18;
 } else if (VAR_21->nvm_type == VAR_6) {
  VAR_39 = VAR_8;
  VAR_30 = VAR_16;
 } else {
  VAR_39 = VAR_7;
  VAR_30 = VAR_17;
 }

 if (FUNC_5(VAR_22 > VAR_39))
  VAR_22 = VAR_39;

 if (FUNC_6(VAR_22 > VAR_12))
  return FUNC_2(-VAR_0);

 FUNC_3(VAR_20, VAR_5, "building regdom for %d channels\n",
        VAR_22);


 VAR_31 = FUNC_13(FUNC_15(VAR_31, VAR_19, VAR_22), VAR_3);
 if (!VAR_31)
  return FUNC_2(-VAR_1);


 VAR_31->alpha2[0] = VAR_24 >> 8;
 VAR_31->alpha2[1] = VAR_24 & 0xff;

 for (VAR_26 = 0; VAR_26 < VAR_22; VAR_26++) {
  VAR_27 = (u16)FUNC_7(VAR_23 + VAR_26);
  VAR_34 = (VAR_26 < VAR_14) ?
         VAR_10 : VAR_11;
  VAR_35 = FUNC_8(VAR_30[VAR_26],
            VAR_34);
  VAR_38 = 0;

  if (!(VAR_27 & VAR_15)) {
   FUNC_10(VAR_20, VAR_5,
          VAR_30[VAR_26], VAR_27);
   continue;
  }

  VAR_28 = FUNC_9(VAR_30, VAR_26,
            VAR_27, VAR_21);


  if (VAR_26 == 0 || VAR_29 != VAR_28 ||
      VAR_35 - VAR_36 > 20) {
   VAR_37++;
   VAR_38 = 1;
  }

  VAR_33 = &VAR_31->reg_rules[VAR_37 - 1];

  if (VAR_38)
   VAR_33->freq_range.start_freq_khz =
      FUNC_4(VAR_35 - 10);

  VAR_33->freq_range.end_freq_khz = FUNC_4(VAR_35 + 10);


  VAR_33->power_rule.max_antenna_gain = FUNC_0(6);
  VAR_33->power_rule.max_eirp =
   FUNC_1(VAR_4);

  VAR_33->flags = VAR_28;


  VAR_33->flags |= VAR_13;
  VAR_33->freq_range.max_bandwidth_khz = 0;

  VAR_36 = VAR_35;
  VAR_29 = VAR_28;

  FUNC_10(VAR_20, VAR_5,
         VAR_30[VAR_26], VAR_27);

  if (!(VAR_25 & VAR_2) ||
      VAR_34 == VAR_10)
   continue;

  FUNC_14(VAR_31->alpha2, VAR_35, VAR_33);
 }

 VAR_31->n_reg_rules = VAR_37;





 VAR_32 = FUNC_12(VAR_31, FUNC_15(VAR_31, VAR_19, VAR_37),
     VAR_3);
 if (!VAR_32)
  VAR_32 = FUNC_2(-VAR_1);

 FUNC_11(VAR_31);
 return VAR_32;
}

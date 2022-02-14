
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bw; scalar_t__ index; } ;
struct iwl_scale_tbl_info {TYPE_1__ rate; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_lq_sta {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
typedef enum rs_action { ____Placeholder_rs_action } rs_action ;


 int FUNC_0 (struct iwl_mvm*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct ieee80211_sta*) ;
 int FUNC_3 (struct iwl_mvm*,struct iwl_scale_tbl_info*) ;
 int FUNC_4 (struct iwl_lq_sta*,struct iwl_scale_tbl_info*) ;

__attribute__((used)) static bool FUNC_5(struct iwl_mvm *VAR_9,
         struct ieee80211_sta *VAR_10,
         struct iwl_lq_sta *VAR_11,
         struct iwl_scale_tbl_info *VAR_12,
         enum rs_action VAR_13)
{
 if (FUNC_2(VAR_10) != VAR_5)
  return 0;

 if (!FUNC_1(&VAR_12->rate))
  return 0;

 if ((VAR_12->rate.bw == VAR_5) &&
     (VAR_12->rate.index == VAR_0) &&
     (VAR_13 == VAR_6)) {
  VAR_12->rate.bw = VAR_4;
  VAR_12->rate.index = VAR_2;
  FUNC_0(VAR_9, "Switch 80Mhz SISO MCS0 -> 20Mhz MCS4\n");
  goto tweaked;
 }






 if ((VAR_12->rate.bw == VAR_4) &&
     (((VAR_12->rate.index == VAR_3) &&
      (VAR_13 == VAR_7)) ||
      ((VAR_12->rate.index > VAR_3) &&
       (VAR_13 == VAR_8)))) {
  VAR_12->rate.bw = VAR_5;
  VAR_12->rate.index = VAR_1;
  FUNC_0(VAR_9, "Switch 20Mhz SISO MCS5 -> 80Mhz MCS1\n");
  goto tweaked;
 }

 return 0;

tweaked:
 FUNC_4(VAR_11, VAR_12);
 FUNC_3(VAR_9, VAR_12);
 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_scale_tbl_info {int* expected_tpt; } ;
struct iwl_mvm {int dummy; } ;
typedef scalar_t__ s32 ;
typedef enum rs_action { ____Placeholder_rs_action } rs_action ;


 int FUNC_0 (struct iwl_mvm*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static enum rs_action FUNC_2(struct iwl_mvm *VAR_7,
      struct iwl_scale_tbl_info *VAR_8,
      s32 VAR_9, int VAR_10, int VAR_11,
      int VAR_12,
      int VAR_13, int VAR_14)
{
 enum rs_action VAR_15 = VAR_5;

 if ((VAR_9 <= FUNC_1(VAR_1)) ||
     (VAR_12 == 0)) {
  FUNC_0(VAR_7,
          "Decrease rate because of low SR\n");
  return VAR_4;
 }

 if ((VAR_13 == VAR_0) &&
     (VAR_14 == VAR_0) &&
     (VAR_11 != VAR_3)) {
  FUNC_0(VAR_7,
          "No data about high/low rates. Increase rate\n");
  return VAR_6;
 }

 if ((VAR_14 == VAR_0) &&
     (VAR_11 != VAR_3) &&
     (VAR_13 != VAR_0) &&
     (VAR_13 < VAR_12)) {
  FUNC_0(VAR_7,
          "No data about high rate and low rate is worse. Increase rate\n");
  return VAR_6;
 }

 if ((VAR_14 != VAR_0) &&
     (VAR_14 > VAR_12)) {
  FUNC_0(VAR_7,
          "Higher rate is better. Increate rate\n");
  return VAR_6;
 }

 if ((VAR_13 != VAR_0) &&
     (VAR_14 != VAR_0) &&
     (VAR_13 < VAR_12) &&
     (VAR_14 < VAR_12)) {
  FUNC_0(VAR_7,
          "Both high and low are worse. Maintain rate\n");
  return VAR_5;
 }

 if ((VAR_13 != VAR_0) &&
     (VAR_13 > VAR_12)) {
  FUNC_0(VAR_7,
          "Lower rate is better\n");
  VAR_15 = VAR_4;
  goto out;
 }

 if ((VAR_13 == VAR_0) &&
     (VAR_10 != VAR_3)) {
  FUNC_0(VAR_7,
          "No data about lower rate\n");
  VAR_15 = VAR_4;
  goto out;
 }

 FUNC_0(VAR_7, "Maintain rate\n");

out:
 if ((VAR_15 == VAR_4) && (VAR_10 != VAR_3)) {
  if (VAR_9 >= FUNC_1(VAR_2)) {
   FUNC_0(VAR_7,
           "SR is above NO DECREASE. Avoid downscale\n");
   VAR_15 = VAR_5;
  } else if (VAR_12 > (100 * VAR_8->expected_tpt[VAR_10])) {
   FUNC_0(VAR_7,
           "Current TPT is higher than max expected in low rate. Avoid downscale\n");
   VAR_15 = VAR_5;
  } else {
   FUNC_0(VAR_7, "Decrease rate\n");
  }
 }

 return VAR_15;
}

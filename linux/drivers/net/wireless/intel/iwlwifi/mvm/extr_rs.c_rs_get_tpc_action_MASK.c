
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int dummy; } ;
typedef scalar_t__ s32 ;
typedef enum tpc_action { ____Placeholder_tpc_action } tpc_action ;


 int FUNC_0 (struct iwl_mvm*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static enum tpc_action FUNC_2(struct iwl_mvm *VAR_8,
      s32 VAR_9, int VAR_10, int VAR_11,
      int VAR_12,
      int VAR_13, int VAR_14)
{

 if (VAR_12 == VAR_0) {
  FUNC_0(VAR_8, "no current tpt. stay.\n");
  return VAR_6;
 }


 if (VAR_9 <= FUNC_1(VAR_1) ||
     VAR_12 == 0) {
  FUNC_0(VAR_8, "increase txp because of weak SR\n");
  return VAR_5;
 }


 if (VAR_9 >= FUNC_1(VAR_2) &&
     VAR_10 != VAR_7) {
  if (VAR_13 == VAR_0 &&
      (VAR_14 == VAR_0 ||
       VAR_12 >= VAR_14)) {
   FUNC_0(VAR_8,
           "no weak txp measurement. decrease txp\n");
   return VAR_3;
  }

  if (VAR_13 > VAR_12) {
   FUNC_0(VAR_8,
           "lower txp has better tpt. decrease txp\n");
   return VAR_3;
  }
 }


 if (VAR_9 < FUNC_1(VAR_2) &&
     VAR_11 != VAR_7) {
  if (VAR_13 == VAR_0 &&
      VAR_14 != VAR_0 &&
      VAR_12 < VAR_14) {
   FUNC_0(VAR_8,
           "higher txp has better tpt. increase txp\n");
   return VAR_4;
  }

  if (VAR_13 < VAR_12 &&
      (VAR_14 == VAR_0 ||
       VAR_14 > VAR_12)) {
   FUNC_0(VAR_8,
           "lower txp has worse tpt. increase txp\n");
   return VAR_4;
  }
 }

 FUNC_0(VAR_8, "no need to increase or decrease txp - stay\n");
 return VAR_6;
}

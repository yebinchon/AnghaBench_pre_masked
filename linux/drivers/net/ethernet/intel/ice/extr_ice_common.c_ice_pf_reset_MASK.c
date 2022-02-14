
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ice_hw {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (struct ice_hw*) ;
 int FUNC_1 (struct ice_hw*,int ,char*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct ice_hw*,int ) ;
 int FUNC_4 (struct ice_hw*,int ,scalar_t__) ;

__attribute__((used)) static enum ice_status FUNC_5(struct ice_hw *VAR_9)
{
 u32 VAR_10, VAR_11;






 if ((FUNC_3(VAR_9, VAR_0) & VAR_1) ||
     (FUNC_3(VAR_9, VAR_2) & VAR_6) ^ VAR_6) {

  if (FUNC_0(VAR_9))
   return VAR_4;

  return 0;
 }


 VAR_11 = FUNC_3(VAR_9, VAR_7);

 FUNC_4(VAR_9, VAR_7, (VAR_11 | VAR_8));

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  VAR_11 = FUNC_3(VAR_9, VAR_7);
  if (!(VAR_11 & VAR_8))
   break;

  FUNC_2(1);
 }

 if (VAR_10 == VAR_5) {
  FUNC_1(VAR_9, VAR_3,
     "PF reset polling failed to complete.\n");
  return VAR_4;
 }

 return 0;
}

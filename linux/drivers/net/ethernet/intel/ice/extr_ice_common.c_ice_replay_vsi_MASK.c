
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ice_hw {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ice_hw*,scalar_t__) ;
 int FUNC_1 (struct ice_hw*) ;
 int FUNC_2 (struct ice_hw*,scalar_t__) ;

enum ice_status FUNC_3(struct ice_hw *VAR_2, u16 VAR_3)
{
 enum ice_status VAR_4;

 if (!FUNC_0(VAR_2, VAR_3))
  return VAR_0;


 if (VAR_3 == VAR_1) {
  VAR_4 = FUNC_1(VAR_2);
  if (VAR_4)
   return VAR_4;
 }


 VAR_4 = FUNC_2(VAR_2, VAR_3);
 return VAR_4;
}

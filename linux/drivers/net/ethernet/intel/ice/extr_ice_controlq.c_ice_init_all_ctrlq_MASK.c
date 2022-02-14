
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_hw {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ice_hw*) ;
 int FUNC_1 (struct ice_hw*,int ) ;

enum ice_status FUNC_2(struct ice_hw *VAR_2)
{
 enum ice_status VAR_3;


 VAR_3 = FUNC_1(VAR_2, VAR_0);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  return VAR_3;


 return FUNC_1(VAR_2, VAR_1);
}

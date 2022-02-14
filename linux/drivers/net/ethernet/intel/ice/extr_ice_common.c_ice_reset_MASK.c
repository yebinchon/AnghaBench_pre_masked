
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ice_hw {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
typedef enum ice_reset_req { ____Placeholder_ice_reset_req } ice_reset_req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (struct ice_hw*) ;
 int FUNC_1 (struct ice_hw*,int ,char*) ;
 int FUNC_2 (struct ice_hw*) ;
 int FUNC_3 (struct ice_hw*) ;
 int FUNC_4 (struct ice_hw*,int ) ;
 int FUNC_5 (struct ice_hw*,int ,int ) ;

enum ice_status FUNC_6(struct ice_hw *VAR_5, enum ice_reset_req VAR_6)
{
 u32 VAR_7 = 0;

 switch (VAR_6) {
 case 128:
  return FUNC_3(VAR_5);
 case 130:
  FUNC_1(VAR_5, VAR_3, "CoreR requested\n");
  VAR_7 = VAR_1;
  break;
 case 129:
  FUNC_1(VAR_5, VAR_3, "GlobalR requested\n");
  VAR_7 = VAR_2;
  break;
 default:
  return VAR_4;
 }

 VAR_7 |= FUNC_4(VAR_5, VAR_0);
 FUNC_5(VAR_5, VAR_0, VAR_7);
 FUNC_2(VAR_5);


 return FUNC_0(VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum virtchnl_status_code { ____Placeholder_virtchnl_status_code } virtchnl_status_code ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static enum virtchnl_status_code FUNC_0(enum ice_status VAR_5)
{
 switch (VAR_5) {
 case 128:
  return VAR_4;
 case 137:
 case 133:
 case 135:
 case 130:
 case 136:
  return VAR_3;
 case 131:
  return VAR_2;
 case 132:
 case 129:
 case 134:
 case 141:
 case 138:
 case 140:
 case 139:
 case 142:
  return VAR_0;
 default:
  return VAR_1;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum virtchnl_link_speed { ____Placeholder_virtchnl_link_speed } virtchnl_link_speed ;
typedef enum i40e_aq_link_speed { ____Placeholder_i40e_aq_link_speed } i40e_aq_link_speed ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static inline enum virtchnl_link_speed
FUNC_0(enum i40e_aq_link_speed VAR_9)
{
 switch (VAR_9) {
 case 136:
  return VAR_0;
 case 134:
  return VAR_2;
 case 131:
  return VAR_5;
 case 129:
  return VAR_7;
 case 135:
  return VAR_1;
 case 130:
  return VAR_6;
 case 133:
  return VAR_3;
 case 132:
  return VAR_4;
 case 128:
 default:
  return VAR_8;
 }
}

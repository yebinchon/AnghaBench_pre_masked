
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nubus_rsrc {int dr_sw; int const dr_hw; } ;
typedef enum mac8390_type { ____Placeholder_mac8390_type } mac8390_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 int const VAR_8 ;
__attribute__((used)) static enum mac8390_type FUNC_0(struct nubus_rsrc *VAR_9)
{
 switch (VAR_9->dr_sw) {
 case 136:
  switch (VAR_9->dr_hw) {
  case 141:
  case 142:
  case 137:
   return VAR_7;
  default:
   return VAR_0;
  }
  break;

 case 135:
  switch (VAR_9->dr_hw) {
  case 140:
   return VAR_7;
  case 139:
   return VAR_2;
  default:
   return VAR_0;
  }
  break;

 case 134:
  return VAR_1;
  break;

 case 128:
 case 132:
 case 131:
  if (VAR_9->dr_hw == 139)
   return VAR_2;
  else
   return VAR_0;
  break;

 case 130:
  return VAR_4;
  break;

 case 129:
  switch (VAR_9->dr_hw) {
  case 138:
   return VAR_5;
  default:
   return VAR_6;
  }
  break;

 case 133:




  if (VAR_9->dr_hw == VAR_8 ||
      VAR_9->dr_hw == 138)
   return VAR_7;
  else
   return VAR_3;
  break;
 }
 return VAR_7;
}

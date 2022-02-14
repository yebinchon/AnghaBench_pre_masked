
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




__attribute__((used)) static int FUNC_0(enum pin_config_param VAR_4, int *VAR_5, u32 VAR_6)
{
 switch (VAR_4) {
 case 128:
  if (VAR_6 & VAR_3)
   *VAR_5 = 0;
  else
   *VAR_5 = 1;
  break;

 case 130:
  if (VAR_6 & VAR_2)
   return -VAR_0;
  break;

 case 129:
  if (VAR_6 & VAR_2)
   *VAR_5 = 1;
  else
   return -VAR_0;
  break;

 default:
  return -VAR_1;
 }

 return 0;
}

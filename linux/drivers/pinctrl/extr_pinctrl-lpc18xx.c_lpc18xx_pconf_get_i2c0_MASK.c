
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 unsigned int VAR_8 ;

__attribute__((used)) static int FUNC_0(enum pin_config_param VAR_9, int *VAR_10, u32 VAR_11,
      unsigned VAR_12)
{
 u8 VAR_13;

 if (VAR_12 == VAR_8)
  VAR_13 = VAR_5;
 else
  VAR_13 = VAR_6;

 switch (VAR_9) {
 case 131:
  if (VAR_11 & (VAR_4 << VAR_13))
   *VAR_10 = 1;
  else
   return -VAR_0;
  break;

 case 128:
  if (VAR_11 & (VAR_3 << VAR_13))
   *VAR_10 = 1;
  else
   *VAR_10 = 0;
  break;

 case 130:
  if (VAR_11 & (VAR_2 << VAR_13))
   *VAR_10 = 3;
  else
   *VAR_10 = 50;
  break;

 case 129:
  if (VAR_11 & (VAR_7 << VAR_13))
   return -VAR_0;
  else
   *VAR_10 = 1;
  break;

 default:
  return -VAR_1;
 }

 return 0;
}

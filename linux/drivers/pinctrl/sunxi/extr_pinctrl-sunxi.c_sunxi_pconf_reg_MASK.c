
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static int FUNC_4(unsigned VAR_3, enum pin_config_param VAR_4,
      u32 *VAR_5, u32 *VAR_6, u32 *VAR_7)
{
 switch (VAR_4) {
 case 128:
  *VAR_5 = FUNC_1(VAR_3);
  *VAR_6 = FUNC_0(VAR_3);
  *VAR_7 = VAR_0;
  break;

 case 129:
 case 130:
 case 131:
  *VAR_5 = FUNC_3(VAR_3);
  *VAR_6 = FUNC_2(VAR_3);
  *VAR_7 = VAR_2;
  break;

 default:
  return -VAR_1;
 }

 return 0;
}

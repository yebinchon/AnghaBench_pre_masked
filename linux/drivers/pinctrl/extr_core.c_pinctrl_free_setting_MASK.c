
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_setting {int type; } ;





 int FUNC_0 (struct pinctrl_setting*) ;
 int FUNC_1 (struct pinctrl_setting*) ;
 int FUNC_2 (struct pinctrl_setting*) ;

__attribute__((used)) static void FUNC_3(bool VAR_0,
     struct pinctrl_setting *VAR_1)
{
 switch (VAR_1->type) {
 case 128:
  if (VAR_0)
   FUNC_1(VAR_1);
  FUNC_2(VAR_1);
  break;
 case 129:
 case 130:
  FUNC_0(VAR_1);
  break;
 default:
  break;
 }
}

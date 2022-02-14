
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_pinctrl_group {unsigned long config; int pin; } ;
struct stm32_pinctrl {struct stm32_pinctrl_group* groups; } ;
struct pinctrl_dev {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 struct stm32_pinctrl* FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (struct pinctrl_dev*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_0, unsigned VAR_1,
     unsigned long *VAR_2, unsigned VAR_3)
{
 struct stm32_pinctrl *VAR_4 = FUNC_2(VAR_0);
 struct stm32_pinctrl_group *VAR_5 = &VAR_4->groups[VAR_1];
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_7 = FUNC_3(VAR_0, VAR_5->pin,
   FUNC_1(VAR_2[VAR_6]),
   FUNC_0(VAR_2[VAR_6]));
  if (VAR_7 < 0)
   return VAR_7;

  VAR_5->config = VAR_2[VAR_6];
 }

 return 0;
}

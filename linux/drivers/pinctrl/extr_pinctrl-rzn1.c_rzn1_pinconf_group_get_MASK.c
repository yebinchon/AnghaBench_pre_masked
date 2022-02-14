
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rzn1_pinctrl {int dev; struct rzn1_pin_group* groups; } ;
struct rzn1_pin_group {unsigned int npins; int * pins; int name; } ;
struct pinctrl_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,unsigned int) ;
 struct rzn1_pinctrl* FUNC_1 (struct pinctrl_dev*) ;
 scalar_t__ FUNC_2 (struct pinctrl_dev*,int ,unsigned long*) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_1,
      unsigned int VAR_2,
      unsigned long *VAR_3)
{
 struct rzn1_pinctrl *VAR_4 = FUNC_1(VAR_1);
 struct rzn1_pin_group *VAR_5 = &VAR_4->groups[VAR_2];
 unsigned long VAR_6 = 0;
 unsigned int VAR_7;

 FUNC_0(VAR_4->dev, "group get %s selector:%u\n", VAR_5->name, VAR_2);

 for (VAR_7 = 0; VAR_7 < VAR_5->npins; VAR_7++) {
  if (FUNC_2(VAR_1, VAR_5->pins[VAR_7], VAR_3))
   return -VAR_0;


  if (VAR_7 && (VAR_6 != *VAR_3))
   return -VAR_0;

  VAR_6 = *VAR_3;
 }

 return 0;
}

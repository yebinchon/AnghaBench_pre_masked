
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rzn1_pinctrl {int dev; struct rzn1_pin_group* groups; } ;
struct rzn1_pin_group {unsigned int npins; unsigned int* pins; int name; } ;
struct pinctrl_dev {int dummy; } ;


 int FUNC_0 (int ,char*,int ,unsigned int,unsigned long*,unsigned int) ;
 struct rzn1_pinctrl* FUNC_1 (struct pinctrl_dev*) ;
 int FUNC_2 (struct pinctrl_dev*,unsigned int,unsigned long*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_0,
      unsigned int VAR_1,
      unsigned long *VAR_2,
      unsigned int VAR_3)
{
 struct rzn1_pinctrl *VAR_4 = FUNC_1(VAR_0);
 struct rzn1_pin_group *VAR_5 = &VAR_4->groups[VAR_1];
 unsigned int VAR_6;
 int VAR_7;

 FUNC_0(VAR_4->dev, "group set %s selector:%u configs:%p/%d\n",
  VAR_5->name, VAR_1, VAR_2, VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_5->npins; VAR_6++) {
  unsigned int VAR_8 = VAR_5->pins[VAR_6];

  VAR_7 = FUNC_2(VAR_0, VAR_8, VAR_2, VAR_3);
  if (VAR_7)
   return VAR_7;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct bm1880_pinctrl {struct bm1880_pctrl_group* groups; } ;
struct bm1880_pctrl_group {int npins; int * pins; } ;


 int FUNC_0 (struct pinctrl_dev*,int ,unsigned long*,unsigned int) ;
 struct bm1880_pinctrl* FUNC_1 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_0,
        unsigned int VAR_1,
        unsigned long *VAR_2,
        unsigned int VAR_3)
{
 int VAR_4, VAR_5;
 struct bm1880_pinctrl *VAR_6 = FUNC_1(VAR_0);
 const struct bm1880_pctrl_group *VAR_7 = &VAR_6->groups[VAR_1];

 for (VAR_4 = 0; VAR_4 < VAR_7->npins; VAR_4++) {
  VAR_5 = FUNC_0(VAR_0, VAR_7->pins[VAR_4], VAR_2,
          VAR_3);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}

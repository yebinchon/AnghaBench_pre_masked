
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_pinctrl_soc_info {unsigned int ngroups; struct sprd_pin_group* groups; } ;
struct sprd_pinctrl {struct sprd_pinctrl_soc_info* info; } ;
struct sprd_pin_group {int npins; unsigned int* pins; } ;
struct pinctrl_dev {int dummy; } ;


 int VAR_0 ;
 struct sprd_pinctrl* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (struct pinctrl_dev*,unsigned int,unsigned long*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_1,
      unsigned int VAR_2,
      unsigned long *VAR_3,
      unsigned int VAR_4)
{
 struct sprd_pinctrl *VAR_5 = FUNC_0(VAR_1);
 struct sprd_pinctrl_soc_info *VAR_6 = VAR_5->info;
 struct sprd_pin_group *VAR_7;
 int VAR_8, VAR_9;

 if (VAR_2 >= VAR_6->ngroups)
  return -VAR_0;

 VAR_7 = &VAR_6->groups[VAR_2];

 for (VAR_9 = 0; VAR_9 < VAR_7->npins; VAR_9++) {
  unsigned int VAR_10 = VAR_7->pins[VAR_9];

  VAR_8 = FUNC_1(VAR_1, VAR_10, VAR_3, VAR_4);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}

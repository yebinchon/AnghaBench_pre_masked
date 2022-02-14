
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_pinctrl_soc_info {unsigned int ngroups; struct sprd_pin_group* groups; } ;
struct sprd_pinctrl {struct sprd_pinctrl_soc_info* info; } ;
struct sprd_pin_group {unsigned int* pins; } ;
struct pinctrl_dev {int dummy; } ;


 int VAR_0 ;
 struct sprd_pinctrl* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (struct pinctrl_dev*,unsigned int,unsigned long*) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_1,
      unsigned int VAR_2, unsigned long *VAR_3)
{
 struct sprd_pinctrl *VAR_4 = FUNC_0(VAR_1);
 struct sprd_pinctrl_soc_info *VAR_5 = VAR_4->info;
 struct sprd_pin_group *VAR_6;
 unsigned int VAR_7;

 if (VAR_2 >= VAR_5->ngroups)
  return -VAR_0;

 VAR_6 = &VAR_5->groups[VAR_2];
 VAR_7 = VAR_6->pins[0];

 return FUNC_1(VAR_1, VAR_7, VAR_3);
}

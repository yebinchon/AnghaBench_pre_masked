
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_pinctrl_soc_info {int npins; struct sprd_pin* pins; } ;
struct sprd_pinctrl {struct sprd_pinctrl_soc_info* info; } ;
struct sprd_pin {unsigned int number; } ;



__attribute__((used)) static struct sprd_pin *
FUNC_0(struct sprd_pinctrl *VAR_0, unsigned int VAR_1)
{
 struct sprd_pinctrl_soc_info *VAR_2 = VAR_0->info;
 struct sprd_pin *VAR_3 = ((void*)0);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->npins; VAR_4++) {
  if (VAR_2->pins[VAR_4].number == VAR_1) {
   VAR_3 = &VAR_2->pins[VAR_4];
   break;
  }
 }

 return VAR_3;
}

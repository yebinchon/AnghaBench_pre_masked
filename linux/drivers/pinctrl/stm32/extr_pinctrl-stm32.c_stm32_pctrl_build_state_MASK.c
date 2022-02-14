
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_pinctrl_group {int pin; int name; } ;
struct stm32_pinctrl {int ngroups; int npins; int * grp_names; struct stm32_pinctrl_group* groups; struct stm32_desc_pin* pins; } ;
struct TYPE_2__ {int name; int number; } ;
struct stm32_desc_pin {TYPE_1__ pin; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,int,int,int ) ;
 struct stm32_pinctrl* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 struct stm32_pinctrl *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 VAR_3->ngroups = VAR_3->npins;


 VAR_3->groups = FUNC_0(&VAR_2->dev, VAR_3->ngroups,
        sizeof(*VAR_3->groups), VAR_1);
 if (!VAR_3->groups)
  return -VAR_0;


 VAR_3->grp_names = FUNC_0(&VAR_2->dev, VAR_3->ngroups,
           sizeof(*VAR_3->grp_names), VAR_1);
 if (!VAR_3->grp_names)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_3->npins; VAR_4++) {
  const struct stm32_desc_pin *VAR_5 = VAR_3->pins + VAR_4;
  struct stm32_pinctrl_group *VAR_6 = VAR_3->groups + VAR_4;

  VAR_6->name = VAR_5->pin.name;
  VAR_6->pin = VAR_5->pin.number;
  VAR_3->grp_names[VAR_4] = VAR_5->pin.name;
 }

 return 0;
}

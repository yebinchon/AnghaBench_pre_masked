
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct mtk_pinctrl_group {int pin; int name; } ;
struct mtk_pinctrl {int ngroups; int * grp_names; struct mtk_pinctrl_group* groups; TYPE_1__* devdata; } ;
struct TYPE_4__ {int name; int number; } ;
struct mtk_desc_pin {TYPE_2__ pin; } ;
struct TYPE_3__ {int npins; struct mtk_desc_pin* pins; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,int,int,int ) ;
 struct mtk_pinctrl* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 struct mtk_pinctrl *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 VAR_3->ngroups = VAR_3->devdata->npins;


 VAR_3->groups = FUNC_0(&VAR_2->dev, VAR_3->ngroups,
        sizeof(*VAR_3->groups), VAR_1);
 if (!VAR_3->groups)
  return -VAR_0;


 VAR_3->grp_names = FUNC_0(&VAR_2->dev, VAR_3->ngroups,
           sizeof(*VAR_3->grp_names), VAR_1);
 if (!VAR_3->grp_names)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_3->devdata->npins; VAR_4++) {
  const struct mtk_desc_pin *VAR_5 = VAR_3->devdata->pins + VAR_4;
  struct mtk_pinctrl_group *VAR_6 = VAR_3->groups + VAR_4;

  VAR_6->name = VAR_5->pin.name;
  VAR_6->pin = VAR_5->pin.number;

  VAR_3->grp_names[VAR_4] = VAR_5->pin.name;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct mtk_pinctrl_group {int pin; int name; } ;
struct mtk_pinctrl {int * grp_names; struct mtk_pinctrl_group* groups; TYPE_1__* soc; } ;
struct mtk_pin_desc {int name; int number; } ;
struct TYPE_2__ {int npins; struct mtk_pin_desc* pins; int ngrps; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,int ,int,int ) ;
 struct mtk_pinctrl* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 struct mtk_pinctrl *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;


 VAR_3->groups = FUNC_0(&VAR_2->dev, VAR_3->soc->ngrps,
     sizeof(*VAR_3->groups), VAR_1);
 if (!VAR_3->groups)
  return -VAR_0;


 VAR_3->grp_names = FUNC_0(&VAR_2->dev, VAR_3->soc->ngrps,
        sizeof(*VAR_3->grp_names), VAR_1);
 if (!VAR_3->grp_names)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_3->soc->npins; VAR_4++) {
  const struct mtk_pin_desc *VAR_5 = VAR_3->soc->pins + VAR_4;
  struct mtk_pinctrl_group *VAR_6 = VAR_3->groups + VAR_4;

  VAR_6->name = VAR_5->name;
  VAR_6->pin = VAR_5->number;

  VAR_3->grp_names[VAR_4] = VAR_5->name;
 }

 return 0;
}

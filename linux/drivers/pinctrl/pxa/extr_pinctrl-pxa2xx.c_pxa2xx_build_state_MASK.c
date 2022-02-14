
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pxa_pinctrl_group {int pin; int name; } ;
struct TYPE_2__ {int npins; struct pinctrl_pin_desc* pins; } ;
struct pxa_pinctrl {int npins; int ngroups; struct pxa_pinctrl_group* groups; int dev; TYPE_1__ desc; struct pxa_desc_pin const* ppins; } ;
struct pinctrl_pin_desc {int number; int name; } ;
struct pxa_desc_pin {struct pinctrl_pin_desc pin; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pinctrl_pin_desc* FUNC_0 (int ,int,int,int ) ;
 struct pxa_pinctrl_group* FUNC_1 (int ,int,int,int ) ;
 int FUNC_2 (struct pxa_pinctrl*) ;
 int FUNC_3 (struct pxa_pinctrl*) ;

__attribute__((used)) static int FUNC_4(struct pxa_pinctrl *VAR_2,
         const struct pxa_desc_pin *VAR_3, int VAR_4)
{
 struct pxa_pinctrl_group *VAR_5;
 struct pinctrl_pin_desc *VAR_6;
 int VAR_7, VAR_8;

 VAR_2->npins = VAR_4;
 VAR_2->ppins = VAR_3;
 VAR_2->ngroups = VAR_4;

 VAR_2->desc.npins = VAR_4;
 VAR_6 = FUNC_0(VAR_2->dev, VAR_4, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_2->desc.pins = VAR_6;
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  VAR_6[VAR_8] = VAR_3[VAR_8].pin;

 VAR_2->groups = FUNC_1(VAR_2->dev, VAR_2->ngroups,
       sizeof(*VAR_2->groups), VAR_1);
 if (!VAR_2->groups)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_5 = VAR_2->groups + VAR_8;
  VAR_5->name = VAR_3[VAR_8].pin.name;
  VAR_5->pin = VAR_3[VAR_8].pin.number;
 }

 VAR_7 = FUNC_2(VAR_2);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_2);
 if (VAR_7)
  return VAR_7;

 return 0;
}

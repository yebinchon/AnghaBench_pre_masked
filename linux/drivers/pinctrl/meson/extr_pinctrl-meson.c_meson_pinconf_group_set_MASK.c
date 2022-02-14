
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct meson_pmx_group {int num_pins; int * pins; int name; } ;
struct meson_pinctrl {int dev; TYPE_1__* data; } ;
struct TYPE_2__ {struct meson_pmx_group* groups; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct pinctrl_dev*,int ,unsigned long*,unsigned int) ;
 struct meson_pinctrl* FUNC_2 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_0,
       unsigned int VAR_1,
       unsigned long *VAR_2, unsigned VAR_3)
{
 struct meson_pinctrl *VAR_4 = FUNC_2(VAR_0);
 struct meson_pmx_group *VAR_5 = &VAR_4->data->groups[VAR_1];
 int VAR_6;

 FUNC_0(VAR_4->dev, "set pinconf for group %s\n", VAR_5->name);

 for (VAR_6 = 0; VAR_6 < VAR_5->num_pins; VAR_6++) {
  FUNC_1(VAR_0, VAR_5->pins[VAR_6], VAR_2,
      VAR_3);
 }

 return 0;
}

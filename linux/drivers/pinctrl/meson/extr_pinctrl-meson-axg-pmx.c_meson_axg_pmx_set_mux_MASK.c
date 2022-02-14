
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct meson_pmx_group {int num_pins; int * pins; int name; scalar_t__ data; } ;
struct meson_pmx_func {int name; } ;
struct meson_pmx_axg_data {int func; } ;
struct meson_pinctrl {int dev; TYPE_1__* data; } ;
struct TYPE_2__ {struct meson_pmx_group* groups; struct meson_pmx_func* funcs; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct meson_pinctrl*,int ,int ) ;
 struct meson_pinctrl* FUNC_2 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_0,
   unsigned int VAR_1, unsigned int VAR_2)
{
 int VAR_3;
 int VAR_4;
 struct meson_pinctrl *VAR_5 = FUNC_2(VAR_0);
 struct meson_pmx_func *VAR_6 = &VAR_5->data->funcs[VAR_1];
 struct meson_pmx_group *VAR_7 = &VAR_5->data->groups[VAR_2];
 struct meson_pmx_axg_data *VAR_8 =
  (struct meson_pmx_axg_data *)VAR_7->data;

 FUNC_0(VAR_5->dev, "enable function %s, group %s\n", VAR_6->name,
  VAR_7->name);

 for (VAR_3 = 0; VAR_3 < VAR_7->num_pins; VAR_3++) {
  VAR_4 = FUNC_1(VAR_5, VAR_7->pins[VAR_3],
   VAR_8->func);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}

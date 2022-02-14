
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct meson_pmx_group {int num_pins; int * pins; int name; scalar_t__ data; } ;
struct meson_pmx_func {int name; } ;
struct meson_pinctrl {int reg_mux; int dev; TYPE_1__* data; } ;
struct meson8_pmx_data {int reg; int bit; } ;
struct TYPE_2__ {struct meson_pmx_group* groups; struct meson_pmx_func* funcs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (struct meson_pinctrl*,int ,unsigned int) ;
 struct meson_pinctrl* FUNC_3 (struct pinctrl_dev*) ;
 int FUNC_4 (int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_0, unsigned VAR_1,
         unsigned VAR_2)
{
 struct meson_pinctrl *VAR_3 = FUNC_3(VAR_0);
 struct meson_pmx_func *VAR_4 = &VAR_3->data->funcs[VAR_1];
 struct meson_pmx_group *VAR_5 = &VAR_3->data->groups[VAR_2];
 struct meson8_pmx_data *VAR_6 =
  (struct meson8_pmx_data *)VAR_5->data;
 int VAR_7, VAR_8 = 0;

 FUNC_1(VAR_3->dev, "enable function %s, group %s\n", VAR_4->name,
  VAR_5->name);





 for (VAR_7 = 0; VAR_7 < VAR_5->num_pins; VAR_7++)
  FUNC_2(VAR_3, VAR_5->pins[VAR_7], VAR_2);


 if (VAR_1)
  VAR_8 = FUNC_4(VAR_3->reg_mux, VAR_6->reg * 4,
      FUNC_0(VAR_6->bit),
      FUNC_0(VAR_6->bit));

 return VAR_8;
}

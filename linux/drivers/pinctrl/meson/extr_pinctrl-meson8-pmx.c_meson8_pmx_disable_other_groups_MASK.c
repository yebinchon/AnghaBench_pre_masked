
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct meson_pmx_group {int num_pins; unsigned int* pins; scalar_t__ data; } ;
struct meson_pinctrl {int reg_mux; TYPE_1__* data; } ;
struct meson8_pmx_data {int reg; int bit; scalar_t__ is_gpio; } ;
struct TYPE_2__ {int num_groups; struct meson_pmx_group* groups; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct meson_pinctrl *VAR_0,
         unsigned int VAR_1, int VAR_2)
{
 struct meson_pmx_group *VAR_3;
 struct meson8_pmx_data *VAR_4;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0->data->num_groups; VAR_5++) {
  VAR_3 = &VAR_0->data->groups[VAR_5];
  VAR_4 = (struct meson8_pmx_data *)VAR_3->data;
  if (VAR_4->is_gpio || VAR_5 == VAR_2)
   continue;

  for (VAR_6 = 0; VAR_6 < VAR_3->num_pins; VAR_6++) {
   if (VAR_3->pins[VAR_6] == VAR_1) {

    FUNC_1(VAR_0->reg_mux,
         VAR_4->reg * 4,
         FUNC_0(VAR_4->bit), 0);
   }
  }
 }
}

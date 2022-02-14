
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_pfc_pin {scalar_t__ enum_id; } ;
struct sh_pfc_gpio_pin {unsigned int dreg; unsigned int dbit; } ;
struct sh_pfc_chip {struct sh_pfc_gpio_pin* pins; struct sh_pfc* pfc; } ;
struct sh_pfc {TYPE_1__* info; } ;
struct pinmux_data_reg {int reg_width; scalar_t__* enum_ids; } ;
struct TYPE_2__ {struct pinmux_data_reg* data_regs; struct sh_pfc_pin* pins; } ;


 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct sh_pfc_chip *VAR_0, unsigned VAR_1)
{
 struct sh_pfc *VAR_2 = VAR_0->pfc;
 struct sh_pfc_gpio_pin *VAR_3 = &VAR_0->pins[VAR_1];
 const struct sh_pfc_pin *VAR_4 = &VAR_2->info->pins[VAR_1];
 const struct pinmux_data_reg *VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;

 for (VAR_7 = 0, VAR_5 = VAR_2->info->data_regs; VAR_5->reg_width; ++VAR_7, ++VAR_5) {
  for (VAR_6 = 0; VAR_6 < VAR_5->reg_width; VAR_6++) {
   if (VAR_5->enum_ids[VAR_6] == VAR_4->enum_id) {
    VAR_3->dreg = VAR_7;
    VAR_3->dbit = VAR_6;
    return;
   }
  }
 }

 FUNC_0();
}

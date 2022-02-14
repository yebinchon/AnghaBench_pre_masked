
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_pfc_gpio_pin {size_t dreg; unsigned int dbit; } ;
struct sh_pfc_gpio_data_reg {int dummy; } ;
struct sh_pfc_chip {struct sh_pfc_gpio_data_reg* regs; struct sh_pfc_gpio_pin* pins; int pfc; } ;


 int FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct sh_pfc_chip *VAR_0, unsigned int VAR_1,
         struct sh_pfc_gpio_data_reg **VAR_2,
         unsigned int *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_0->pfc, VAR_1);
 struct sh_pfc_gpio_pin *VAR_5 = &VAR_0->pins[VAR_4];

 *VAR_2 = &VAR_0->regs[VAR_5->dreg];
 *VAR_3 = VAR_5->dbit;
}

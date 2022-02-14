
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct pistachio_pinctrl {int pctldev; int dev; struct pistachio_function* functions; struct pistachio_pin_group* groups; } ;
struct pistachio_pin_group {scalar_t__ mux_reg; unsigned int* mux_option; unsigned int mux_mask; unsigned int mux_shift; scalar_t__ pin; } ;
struct pistachio_function {unsigned int* scenarios; unsigned int nscenarios; scalar_t__ scenario_reg; unsigned int scenario_mask; unsigned int scenario_shift; } ;
struct pinctrl_gpio_range {scalar_t__ pin_base; int gc; } ;
struct pinctrl_dev {int dummy; } ;


 unsigned int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (struct pistachio_pinctrl*,scalar_t__) ;
 int FUNC_6 (struct pistachio_pinctrl*,unsigned int,scalar_t__) ;
 struct pistachio_pinctrl* FUNC_7 (struct pinctrl_dev*) ;
 struct pinctrl_gpio_range* FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct pinctrl_dev *VAR_1,
       unsigned VAR_2, unsigned VAR_3)
{
 struct pistachio_pinctrl *VAR_4 = FUNC_7(VAR_1);
 const struct pistachio_pin_group *VAR_5 = &VAR_4->groups[VAR_3];
 const struct pistachio_function *VAR_6 = &VAR_4->functions[VAR_2];
 struct pinctrl_gpio_range *VAR_7;
 unsigned int VAR_8;
 u32 VAR_9;

 if (VAR_5->mux_reg > 0) {
  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5->mux_option); VAR_8++) {
   if (VAR_5->mux_option[VAR_8] == VAR_2)
    break;
  }
  if (VAR_8 == FUNC_0(VAR_5->mux_option)) {
   FUNC_2(VAR_4->dev, "Cannot mux pin %u to function %u\n",
    VAR_3, VAR_2);
   return -VAR_0;
  }

  VAR_9 = FUNC_5(VAR_4, VAR_5->mux_reg);
  VAR_9 &= ~(VAR_5->mux_mask << VAR_5->mux_shift);
  VAR_9 |= VAR_8 << VAR_5->mux_shift;
  FUNC_6(VAR_4, VAR_9, VAR_5->mux_reg);

  if (VAR_6->scenarios) {
   for (VAR_8 = 0; VAR_8 < VAR_6->nscenarios; VAR_8++) {
    if (VAR_6->scenarios[VAR_8] == VAR_3)
     break;
   }
   if (FUNC_1(VAR_8 == VAR_6->nscenarios))
    return -VAR_0;

   VAR_9 = FUNC_5(VAR_4, VAR_6->scenario_reg);
   VAR_9 &= ~(VAR_6->scenario_mask << VAR_6->scenario_shift);
   VAR_9 |= VAR_8 << VAR_6->scenario_shift;
   FUNC_6(VAR_4, VAR_9, VAR_6->scenario_reg);
  }
 }

 VAR_7 = FUNC_8(VAR_4->pctldev, VAR_5->pin);
 if (VAR_7)
  FUNC_3(FUNC_4(VAR_7->gc), VAR_5->pin - VAR_7->pin_base);

 return 0;
}

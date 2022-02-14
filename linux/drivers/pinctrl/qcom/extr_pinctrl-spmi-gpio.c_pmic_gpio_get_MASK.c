
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pmic_gpio_state {TYPE_3__* ctrl; } ;
struct pmic_gpio_pad {int out_value; scalar_t__ input_enabled; int is_enabled; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_6__ {TYPE_2__* desc; } ;
struct TYPE_5__ {TYPE_1__* pins; } ;
struct TYPE_4__ {struct pmic_gpio_pad* drv_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pmic_gpio_state* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct pmic_gpio_state*,struct pmic_gpio_pad*,int ) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_3, unsigned VAR_4)
{
 struct pmic_gpio_state *VAR_5 = FUNC_0(VAR_3);
 struct pmic_gpio_pad *VAR_6;
 int VAR_7;

 VAR_6 = VAR_5->ctrl->desc->pins[VAR_4].drv_data;

 if (!VAR_6->is_enabled)
  return -VAR_0;

 if (VAR_6->input_enabled) {
  VAR_7 = FUNC_1(VAR_5, VAR_6, VAR_1);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_6->out_value = VAR_7 & VAR_2;
 }

 return !!VAR_6->out_value;
}

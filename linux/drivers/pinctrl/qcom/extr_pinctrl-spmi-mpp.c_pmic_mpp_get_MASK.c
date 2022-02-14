
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pmic_mpp_state {TYPE_3__* ctrl; } ;
struct pmic_mpp_pad {int out_value; scalar_t__ input_enabled; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_6__ {TYPE_2__* desc; } ;
struct TYPE_5__ {TYPE_1__* pins; } ;
struct TYPE_4__ {struct pmic_mpp_pad* drv_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pmic_mpp_state* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct pmic_mpp_state*,struct pmic_mpp_pad*,int ) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 struct pmic_mpp_state *VAR_4 = FUNC_0(VAR_2);
 struct pmic_mpp_pad *VAR_5;
 int VAR_6;

 VAR_5 = VAR_4->ctrl->desc->pins[VAR_3].drv_data;

 if (VAR_5->input_enabled) {
  VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_0);
  if (VAR_6 < 0)
   return VAR_6;

  VAR_5->out_value = VAR_6 & VAR_1;
 }

 return !!VAR_5->out_value;
}

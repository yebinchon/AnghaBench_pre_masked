
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pmic_mpp_state {TYPE_3__* ctrl; } ;
struct pmic_mpp_pad {int irq; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_6__ {TYPE_2__* desc; } ;
struct TYPE_5__ {TYPE_1__* pins; } ;
struct TYPE_4__ {struct pmic_mpp_pad* drv_data; } ;


 struct pmic_mpp_state* FUNC_0 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_1(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct pmic_mpp_state *VAR_2 = FUNC_0(VAR_0);
 struct pmic_mpp_pad *VAR_3;

 VAR_3 = VAR_2->ctrl->desc->pins[VAR_1].drv_data;

 return VAR_3->irq;
}

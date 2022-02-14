
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sx150x_pinctrl {TYPE_1__* data; } ;
struct device {int dummy; } ;
struct TYPE_2__ {unsigned int reg_irq_src; unsigned int reg_data; } ;


 struct sx150x_pinctrl* FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;

__attribute__((used)) static bool FUNC_2(struct device *VAR_0, unsigned int VAR_1)
{
 struct sx150x_pinctrl *VAR_2 = FUNC_0(FUNC_1(VAR_0));

 return VAR_1 == VAR_2->data->reg_irq_src || VAR_1 == VAR_2->data->reg_data;
}

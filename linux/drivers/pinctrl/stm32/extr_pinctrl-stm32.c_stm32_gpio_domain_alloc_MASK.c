
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_gpio_bank {int dummy; } ;
struct irq_fwspec {int param_count; int * param; int fwnode; } ;
struct irq_domain {TYPE_1__* parent; struct stm32_gpio_bank* host_data; } ;
typedef int irq_hw_number_t ;
struct TYPE_2__ {int fwnode; } ;


 int FUNC_0 (struct irq_domain*,unsigned int,unsigned int,struct irq_fwspec*) ;
 int FUNC_1 (struct irq_domain*,unsigned int,int ,int *,struct stm32_gpio_bank*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_1,
       unsigned int VAR_2,
       unsigned int VAR_3, void *VAR_4)
{
 struct stm32_gpio_bank *VAR_5 = VAR_1->host_data;
 struct irq_fwspec *VAR_6 = VAR_4;
 struct irq_fwspec VAR_7;
 irq_hw_number_t VAR_8;

 VAR_8 = VAR_6->param[0];
 VAR_7.fwnode = VAR_1->parent->fwnode;
 VAR_7.param_count = 2;
 VAR_7.param[0] = VAR_6->param[0];
 VAR_7.param[1] = VAR_6->param[1];

 FUNC_1(VAR_1, VAR_2, VAR_8, &VAR_0,
          VAR_5);

 return FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_7);
}

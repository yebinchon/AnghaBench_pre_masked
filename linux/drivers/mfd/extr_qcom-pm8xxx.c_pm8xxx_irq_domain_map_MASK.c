
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pm_irq_chip {TYPE_1__* pm_irq_data; } ;
struct irq_domain {int dummy; } ;
typedef int irq_hw_number_t ;
struct TYPE_2__ {int irq_chip; } ;


 int VAR_0 ;
 int FUNC_0 (struct irq_domain*,unsigned int,int ,int ,struct pm_irq_chip*,int ,int *,int *) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static void FUNC_2(struct pm_irq_chip *VAR_1,
      struct irq_domain *VAR_2, unsigned int VAR_3,
      irq_hw_number_t VAR_4, unsigned int VAR_5)
{
 FUNC_0(VAR_2, VAR_3, VAR_4, VAR_1->pm_irq_data->irq_chip,
       VAR_1, VAR_0, ((void*)0), ((void*)0));
 FUNC_1(VAR_3);
}

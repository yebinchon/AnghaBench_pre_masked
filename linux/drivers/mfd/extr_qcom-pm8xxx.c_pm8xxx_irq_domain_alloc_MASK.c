
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm_irq_chip {int dummy; } ;
struct irq_fwspec {int dummy; } ;
struct irq_domain {struct pm_irq_chip* host_data; } ;
typedef scalar_t__ irq_hw_number_t ;


 int FUNC_0 (struct irq_domain*,struct irq_fwspec*,scalar_t__*,unsigned int*) ;
 int FUNC_1 (struct pm_irq_chip*,struct irq_domain*,unsigned int,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_0, unsigned int VAR_1,
       unsigned int VAR_2, void *VAR_3)
{
 struct pm_irq_chip *VAR_4 = VAR_0->host_data;
 struct irq_fwspec *VAR_5 = VAR_3;
 irq_hw_number_t VAR_6;
 unsigned int VAR_7;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_0(VAR_0, VAR_5, &VAR_6, &VAR_7);
 if (VAR_8)
  return VAR_8;

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
  FUNC_1(VAR_4, VAR_0, VAR_1 + VAR_9, VAR_6 + VAR_9, VAR_7);

 return 0;
}

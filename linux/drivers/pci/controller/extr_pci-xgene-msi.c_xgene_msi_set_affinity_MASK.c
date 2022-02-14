
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {scalar_t__ hwirq; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpumask const*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_2,
      const struct cpumask *VAR_3, bool VAR_4)
{
 int VAR_5 = FUNC_0(VAR_3);
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2->hwirq);
 if (VAR_6 == VAR_5)
  return VAR_1;


 VAR_2->hwirq = FUNC_1(VAR_2->hwirq) + VAR_5;

 return VAR_0;
}

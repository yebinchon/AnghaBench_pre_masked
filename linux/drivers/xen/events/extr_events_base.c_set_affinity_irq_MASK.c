
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct cpumask const*,int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct irq_data*,int ) ;
 int FUNC_4 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct irq_data *VAR_1, const struct cpumask *VAR_2,
       bool VAR_3)
{
 unsigned VAR_4 = FUNC_0(VAR_2, VAR_0);
 int VAR_5 = FUNC_4(FUNC_2(VAR_1->irq), VAR_4);

 if (!VAR_5)
  FUNC_3(VAR_1, FUNC_1(VAR_4));

 return VAR_5;
}

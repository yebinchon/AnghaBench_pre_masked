
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl6030_irq {int wakeirqs; } ;
struct irq_data {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct twl6030_irq* FUNC_2 (struct irq_data*) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_0, unsigned int VAR_1)
{
 struct twl6030_irq *VAR_2 = FUNC_2(VAR_0);

 if (VAR_1)
  FUNC_1(&VAR_2->wakeirqs);
 else
  FUNC_0(&VAR_2->wakeirqs);

 return 0;
}

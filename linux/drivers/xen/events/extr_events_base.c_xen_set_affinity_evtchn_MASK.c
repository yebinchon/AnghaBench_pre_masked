
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;
struct irq_data {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 struct irq_data* FUNC_1 (struct irq_desc*) ;
 int FUNC_2 (struct irq_data*,int ,int) ;

int FUNC_3(struct irq_desc *VAR_0, unsigned int VAR_1)
{
 struct irq_data *VAR_2 = FUNC_1(VAR_0);

 return FUNC_2(VAR_2, FUNC_0(VAR_1), 0);
}

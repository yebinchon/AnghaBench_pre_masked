
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sx150x_pinctrl {int lock; } ;
struct irq_data {int dummy; } ;


 struct sx150x_pinctrl* FUNC_0 (int ) ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0)
{
 struct sx150x_pinctrl *VAR_1 =
   FUNC_0(FUNC_1(VAR_0));

 FUNC_2(&VAR_1->lock);
}

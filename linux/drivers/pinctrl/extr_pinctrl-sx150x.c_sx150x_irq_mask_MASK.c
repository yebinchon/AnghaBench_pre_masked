
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int masked; } ;
struct sx150x_pinctrl {TYPE_1__ irq; } ;
struct irq_data {unsigned int hwirq; } ;


 int FUNC_0 (unsigned int) ;
 struct sx150x_pinctrl* FUNC_1 (int ) ;
 int FUNC_2 (struct irq_data*) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0)
{
 struct sx150x_pinctrl *VAR_1 =
   FUNC_1(FUNC_2(VAR_0));
 unsigned int VAR_2 = VAR_0->hwirq;

 VAR_1->irq.masked |= FUNC_0(VAR_2);
}

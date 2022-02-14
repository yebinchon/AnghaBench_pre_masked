
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp8788_irq_data {int dummy; } ;
struct irq_domain {struct lp8788_irq_data* host_data; } ;
struct irq_chip {int dummy; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,struct irq_chip*,int ) ;
 int FUNC_1 (unsigned int,struct lp8788_irq_data*) ;
 int FUNC_2 (unsigned int,int) ;
 int FUNC_3 (unsigned int) ;
 struct irq_chip VAR_1 ;

__attribute__((used)) static int FUNC_4(struct irq_domain *VAR_2, unsigned int VAR_3,
   irq_hw_number_t VAR_4)
{
 struct lp8788_irq_data *VAR_5 = VAR_2->host_data;
 struct irq_chip *VAR_6 = &VAR_1;

 FUNC_1(VAR_3, VAR_5);
 FUNC_0(VAR_3, VAR_6, VAR_0);
 FUNC_2(VAR_3, 1);
 FUNC_3(VAR_3);

 return 0;
}

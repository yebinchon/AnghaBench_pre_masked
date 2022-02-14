
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl6030_irq {int twl_irq; int irq_chip; } ;
struct irq_domain {struct twl6030_irq* host_data; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int *,int ) ;
 int FUNC_1 (unsigned int,struct twl6030_irq*) ;
 int FUNC_2 (unsigned int,int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct irq_domain *VAR_1, unsigned int VAR_2,
         irq_hw_number_t VAR_3)
{
 struct twl6030_irq *VAR_4 = VAR_1->host_data;

 FUNC_1(VAR_2, VAR_4);
 FUNC_0(VAR_2, &VAR_4->irq_chip, VAR_0);
 FUNC_2(VAR_2, 1);
 FUNC_4(VAR_2, VAR_4->twl_irq);
 FUNC_3(VAR_2);

 return 0;
}

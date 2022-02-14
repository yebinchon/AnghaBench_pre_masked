
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soctherm_oc_irq_chip_data {int irq_chip; } ;
struct irq_domain {struct soctherm_oc_irq_chip_data* host_data; } ;
typedef int irq_hw_number_t ;


 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (unsigned int,struct soctherm_oc_irq_chip_data*) ;
 int FUNC_2 (unsigned int,int) ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_0, unsigned int VAR_1,
  irq_hw_number_t VAR_2)
{
 struct soctherm_oc_irq_chip_data *VAR_3 = VAR_0->host_data;

 FUNC_1(VAR_1, VAR_3);
 FUNC_0(VAR_1, &VAR_3->irq_chip);
 FUNC_2(VAR_1, 1);
 return 0;
}

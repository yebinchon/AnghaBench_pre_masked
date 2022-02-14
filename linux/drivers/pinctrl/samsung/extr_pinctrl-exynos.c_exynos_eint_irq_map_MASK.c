
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct samsung_pin_bank {TYPE_1__* irq_chip; } ;
struct irq_domain {struct samsung_pin_bank* host_data; } ;
typedef int irq_hw_number_t ;
struct TYPE_2__ {int chip; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int *,int ) ;
 int FUNC_1 (unsigned int,struct samsung_pin_bank*) ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_1, unsigned int VAR_2,
     irq_hw_number_t VAR_3)
{
 struct samsung_pin_bank *VAR_4 = VAR_1->host_data;

 FUNC_1(VAR_2, VAR_4);
 FUNC_0(VAR_2, &VAR_4->irq_chip->chip,
     VAR_0);
 return 0;
}

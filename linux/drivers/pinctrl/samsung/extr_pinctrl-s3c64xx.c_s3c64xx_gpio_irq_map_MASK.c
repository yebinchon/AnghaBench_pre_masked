
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_pin_bank {int eint_mask; } ;
struct irq_domain {struct samsung_pin_bank* host_data; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int *,int ) ;
 int FUNC_1 (unsigned int,struct samsung_pin_bank*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_3, unsigned int VAR_4,
     irq_hw_number_t VAR_5)
{
 struct samsung_pin_bank *VAR_6 = VAR_3->host_data;

 if (!(VAR_6->eint_mask & (1 << VAR_5)))
  return -VAR_0;

 FUNC_0(VAR_4,
    &VAR_2, VAR_1);
 FUNC_1(VAR_4, VAR_6);

 return 0;
}

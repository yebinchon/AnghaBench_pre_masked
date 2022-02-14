
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct samsung_pin_bank {TYPE_1__* irq_domain; } ;
struct s3c24xx_eint_domain_data {struct s3c24xx_eint_data* eint_data; } ;
struct s3c24xx_eint_data {int* parents; } ;
struct irq_data {size_t hwirq; } ;
struct irq_chip {int (* irq_mask ) (int ) ;} ;
struct TYPE_2__ {struct s3c24xx_eint_domain_data* host_data; } ;


 struct samsung_pin_bank* FUNC_0 (struct irq_data*) ;
 struct irq_chip* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_0)
{
 struct samsung_pin_bank *VAR_1 = FUNC_0(VAR_0);
 struct s3c24xx_eint_domain_data *VAR_2 = VAR_1->irq_domain->host_data;
 struct s3c24xx_eint_data *VAR_3 = VAR_2->eint_data;
 int VAR_4 = VAR_3->parents[VAR_0->hwirq];
 struct irq_chip *VAR_5 = FUNC_1(VAR_4);

 VAR_5->irq_mask(FUNC_2(VAR_4));
}

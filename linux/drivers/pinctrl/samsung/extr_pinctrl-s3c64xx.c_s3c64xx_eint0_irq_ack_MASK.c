
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct samsung_pinctrl_drv_data {scalar_t__ virt_base; } ;
struct s3c64xx_eint0_domain_data {int* eints; TYPE_1__* bank; } ;
struct irq_data {size_t hwirq; } ;
struct TYPE_2__ {struct samsung_pinctrl_drv_data* drvdata; } ;


 scalar_t__ VAR_0 ;
 struct s3c64xx_eint0_domain_data* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_1)
{
 struct s3c64xx_eint0_domain_data *VAR_2 =
     FUNC_0(VAR_1);
 struct samsung_pinctrl_drv_data *VAR_3 = VAR_2->bank->drvdata;

 FUNC_1(1 << VAR_2->eints[VAR_1->hwirq],
     VAR_3->virt_base + VAR_0);
}

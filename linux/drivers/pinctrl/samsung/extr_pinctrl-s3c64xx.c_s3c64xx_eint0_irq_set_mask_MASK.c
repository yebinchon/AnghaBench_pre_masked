
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct samsung_pinctrl_drv_data {scalar_t__ virt_base; } ;
struct s3c64xx_eint0_domain_data {int* eints; TYPE_1__* bank; } ;
struct irq_data {size_t hwirq; } ;
struct TYPE_2__ {struct samsung_pinctrl_drv_data* drvdata; } ;


 scalar_t__ VAR_0 ;
 struct s3c64xx_eint0_domain_data* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct irq_data *VAR_1, bool VAR_2)
{
 struct s3c64xx_eint0_domain_data *VAR_3 =
     FUNC_0(VAR_1);
 struct samsung_pinctrl_drv_data *VAR_4 = VAR_3->bank->drvdata;
 u32 VAR_5;

 VAR_5 = FUNC_1(VAR_4->virt_base + VAR_0);
 if (VAR_2)
  VAR_5 |= 1 << VAR_3->eints[VAR_1->hwirq];
 else
  VAR_5 &= ~(1 << VAR_3->eints[VAR_1->hwirq]);
 FUNC_2(VAR_5, VAR_4->virt_base + VAR_0);
}

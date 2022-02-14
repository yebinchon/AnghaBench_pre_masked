
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct samsung_pin_bank {int irq_domain; scalar_t__ eint_offset; TYPE_1__* irq_chip; scalar_t__ eint_base; } ;
struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;
struct exynos_muxed_weint_data {int nr_banks; struct samsung_pin_bank** banks; } ;
struct TYPE_2__ {scalar_t__ eint_mask; scalar_t__ eint_pend; } ;


 int FUNC_0 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_2 (unsigned long,int ) ;
 struct irq_chip* FUNC_3 (struct irq_desc*) ;
 struct exynos_muxed_weint_data* FUNC_4 (struct irq_desc*) ;
 unsigned long FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct irq_desc *VAR_0)
{
 struct irq_chip *VAR_1 = FUNC_3(VAR_0);
 struct exynos_muxed_weint_data *VAR_2 = FUNC_4(VAR_0);
 unsigned long VAR_3;
 unsigned long VAR_4;
 int VAR_5;

 FUNC_0(VAR_1, VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_2->nr_banks; ++VAR_5) {
  struct samsung_pin_bank *VAR_6 = VAR_2->banks[VAR_5];
  VAR_3 = FUNC_5(VAR_6->eint_base + VAR_6->irq_chip->eint_pend
    + VAR_6->eint_offset);
  VAR_4 = FUNC_5(VAR_6->eint_base + VAR_6->irq_chip->eint_mask
    + VAR_6->eint_offset);
  FUNC_2(VAR_3 & ~VAR_4, VAR_6->irq_domain);
 }

 FUNC_1(VAR_1, VAR_0);
}

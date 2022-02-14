
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_pin_bank {int irq_domain; } ;
struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;
struct exynos_weint_data {int irq; struct samsung_pin_bank* bank; } ;


 int FUNC_0 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_2 (int) ;
 struct irq_chip* FUNC_3 (struct irq_desc*) ;
 struct exynos_weint_data* FUNC_4 (struct irq_desc*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct irq_desc *VAR_0)
{
 struct exynos_weint_data *VAR_1 = FUNC_4(VAR_0);
 struct samsung_pin_bank *VAR_2 = VAR_1->bank;
 struct irq_chip *VAR_3 = FUNC_3(VAR_0);
 int VAR_4;

 FUNC_0(VAR_3, VAR_0);

 VAR_4 = FUNC_5(VAR_2->irq_domain, VAR_1->irq);
 FUNC_2(VAR_4);

 FUNC_1(VAR_3, VAR_0);
}

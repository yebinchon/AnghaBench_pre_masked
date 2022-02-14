
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_pin_bank {unsigned long eint_offset; scalar_t__ eint_base; } ;
struct irq_data {unsigned int hwirq; } ;
struct irq_chip {int dummy; } ;
struct exynos_irq_chip {unsigned long eint_con; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;





 int VAR_8 ;
 int VAR_9 ;
 struct irq_chip* FUNC_0 (struct irq_data*) ;
 struct samsung_pin_bank* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_data*,int ) ;
 int FUNC_3 (char*) ;
 unsigned int FUNC_4 (scalar_t__) ;
 struct exynos_irq_chip* FUNC_5 (struct irq_chip*) ;
 int FUNC_6 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct irq_data *VAR_10, unsigned int VAR_11)
{
 struct irq_chip *VAR_12 = FUNC_0(VAR_10);
 struct exynos_irq_chip *VAR_13 = FUNC_5(VAR_12);
 struct samsung_pin_bank *VAR_14 = FUNC_1(VAR_10);
 unsigned int VAR_15 = VAR_1 * VAR_10->hwirq;
 unsigned int VAR_16, VAR_17;
 unsigned long VAR_18 = VAR_13->eint_con + VAR_14->eint_offset;

 switch (VAR_11) {
 case 130:
  VAR_17 = VAR_5;
  break;
 case 131:
  VAR_17 = VAR_4;
  break;
 case 132:
  VAR_17 = VAR_3;
  break;
 case 129:
  VAR_17 = VAR_6;
  break;
 case 128:
  VAR_17 = VAR_7;
  break;
 default:
  FUNC_3("unsupported external interrupt type\n");
  return -VAR_0;
 }

 if (VAR_11 & 132)
  FUNC_2(VAR_10, VAR_8);
 else
  FUNC_2(VAR_10, VAR_9);

 VAR_16 = FUNC_4(VAR_14->eint_base + VAR_18);
 VAR_16 &= ~(VAR_2 << VAR_15);
 VAR_16 |= VAR_17 << VAR_15;
 FUNC_6(VAR_16, VAR_14->eint_base + VAR_18);

 return 0;
}

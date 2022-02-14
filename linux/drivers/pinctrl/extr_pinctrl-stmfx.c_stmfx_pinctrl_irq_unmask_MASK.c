
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct stmfx_pinctrl {size_t* irq_gpi_src; } ;
struct irq_data {int hwirq; } ;
struct gpio_chip {int dummy; } ;


 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 struct stmfx_pinctrl* FUNC_2 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_3 (struct irq_data*) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_0)
{
 struct gpio_chip *VAR_1 = FUNC_3(VAR_0);
 struct stmfx_pinctrl *VAR_2 = FUNC_2(VAR_1);
 u32 VAR_3 = FUNC_1(VAR_0->hwirq);
 u32 VAR_4 = FUNC_0(VAR_0->hwirq);

 VAR_2->irq_gpi_src[VAR_3] |= VAR_4;
}

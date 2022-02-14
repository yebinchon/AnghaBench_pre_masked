
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct stmfx_pinctrl {size_t* irq_gpi_evt; size_t* irq_gpi_type; size_t* irq_toggle_edge; } ;
struct irq_data {int hwirq; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 struct stmfx_pinctrl* FUNC_2 (struct gpio_chip*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct gpio_chip* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct irq_data*,int ) ;

__attribute__((used)) static int FUNC_5(struct irq_data *VAR_7, unsigned int VAR_8)
{
 struct gpio_chip *VAR_9 = FUNC_3(VAR_7);
 struct stmfx_pinctrl *VAR_10 = FUNC_2(VAR_9);
 u32 VAR_11 = FUNC_1(VAR_7->hwirq);
 u32 VAR_12 = FUNC_0(VAR_7->hwirq);

 if (VAR_8 == VAR_4)
  return -VAR_0;

 if (VAR_8 & VAR_1) {
  VAR_10->irq_gpi_evt[VAR_11] |= VAR_12;
  FUNC_4(VAR_7, VAR_5);
 } else {
  VAR_10->irq_gpi_evt[VAR_11] &= ~VAR_12;
  FUNC_4(VAR_7, VAR_6);
 }

 if ((VAR_8 & VAR_2) || (VAR_8 & VAR_3))
  VAR_10->irq_gpi_type[VAR_11] |= VAR_12;
 else
  VAR_10->irq_gpi_type[VAR_11] &= ~VAR_12;
 if ((VAR_8 & VAR_1) == VAR_1)
  VAR_10->irq_toggle_edge[VAR_11] |= VAR_12;
 else
  VAR_10->irq_toggle_edge[VAR_11] &= VAR_12;

 return 0;
}

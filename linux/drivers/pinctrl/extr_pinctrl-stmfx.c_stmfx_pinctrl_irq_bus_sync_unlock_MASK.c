
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct stmfx_pinctrl {size_t* irq_toggle_edge; size_t* irq_gpi_type; size_t* irq_gpi_evt; size_t* irq_gpi_src; int lock; TYPE_1__* stmfx; } ;
struct irq_data {int hwirq; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 struct stmfx_pinctrl* FUNC_2 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,size_t*,int ) ;
 scalar_t__ FUNC_6 (struct gpio_chip*,int ) ;

__attribute__((used)) static void FUNC_7(struct irq_data *VAR_4)
{
 struct gpio_chip *VAR_5 = FUNC_3(VAR_4);
 struct stmfx_pinctrl *VAR_6 = FUNC_2(VAR_5);
 u32 VAR_7 = FUNC_1(VAR_4->hwirq);
 u32 VAR_8 = FUNC_0(VAR_4->hwirq);






 if (VAR_6->irq_toggle_edge[VAR_7] & VAR_8) {
  if (FUNC_6(VAR_5, VAR_4->hwirq))
   VAR_6->irq_gpi_type[VAR_7] &= ~VAR_8;
  else
   VAR_6->irq_gpi_type[VAR_7] |= VAR_8;
 }

 FUNC_5(VAR_6->stmfx->map, VAR_1,
     VAR_6->irq_gpi_evt, VAR_0);
 FUNC_5(VAR_6->stmfx->map, VAR_3,
     VAR_6->irq_gpi_type, VAR_0);
 FUNC_5(VAR_6->stmfx->map, VAR_2,
     VAR_6->irq_gpi_src, VAR_0);

 FUNC_4(&VAR_6->lock);
}

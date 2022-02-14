
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_irq_data {int reg; int mask; } ;
struct wm831x {int * irq_masks_cur; } ;
struct irq_data {int hwirq; } ;


 struct wm831x* FUNC_0 (struct irq_data*) ;
 struct wm831x_irq_data* FUNC_1 (struct wm831x*,int ) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_0)
{
 struct wm831x *VAR_1 = FUNC_0(VAR_0);
 struct wm831x_irq_data *VAR_2 = FUNC_1(VAR_1,
            VAR_0->hwirq);

 VAR_1->irq_masks_cur[VAR_2->reg - 1] |= VAR_2->mask;
}

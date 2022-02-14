
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350_irq_data {size_t reg; int mask; } ;
struct wm8350 {int * irq_masks; } ;
struct irq_data {int irq; } ;


 struct wm8350* FUNC_0 (struct irq_data*) ;
 struct wm8350_irq_data* FUNC_1 (struct wm8350*,int ) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_0)
{
 struct wm8350 *VAR_1 = FUNC_0(VAR_0);
 struct wm8350_irq_data *VAR_2 = FUNC_1(VAR_1,
            VAR_0->irq);

 VAR_1->irq_masks[VAR_2->reg] &= ~VAR_2->mask;
}

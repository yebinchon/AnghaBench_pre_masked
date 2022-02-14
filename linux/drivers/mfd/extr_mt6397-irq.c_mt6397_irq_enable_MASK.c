
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt6397_chip {int * irq_masks_cur; } ;
struct irq_data {int hwirq; } ;


 int FUNC_0 (int) ;
 struct mt6397_chip* FUNC_1 (struct irq_data*) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_0)
{
 struct mt6397_chip *VAR_1 = FUNC_1(VAR_0);
 int VAR_2 = VAR_0->hwirq & 0xf;
 int VAR_3 = VAR_0->hwirq >> 4;

 VAR_1->irq_masks_cur[VAR_3] |= FUNC_0(VAR_2);
}

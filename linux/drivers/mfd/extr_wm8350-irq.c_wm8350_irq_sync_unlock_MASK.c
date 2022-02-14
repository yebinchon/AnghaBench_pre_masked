
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350 {int irq_lock; int * irq_masks; int regmap; } ;
struct irq_data {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 struct wm8350* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__,int,int ) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_1)
{
 struct wm8350 *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->irq_masks); VAR_3++) {


  FUNC_1(FUNC_4(VAR_2->regmap,
        VAR_0 + VAR_3,
        0xffff, VAR_2->irq_masks[VAR_3]));
 }

 FUNC_3(&VAR_2->irq_lock);
}

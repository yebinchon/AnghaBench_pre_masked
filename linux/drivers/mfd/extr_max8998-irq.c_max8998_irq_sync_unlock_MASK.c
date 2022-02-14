
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8998_dev {scalar_t__* irq_masks_cur; scalar_t__* irq_masks_cache; int irqlock; int i2c; } ;
struct irq_data {int dummy; } ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 struct max8998_dev* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_1)
{
 struct max8998_dev *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->irq_masks_cur); VAR_3++) {




  if (VAR_2->irq_masks_cur[VAR_3] != VAR_2->irq_masks_cache[VAR_3]) {
   VAR_2->irq_masks_cache[VAR_3] = VAR_2->irq_masks_cur[VAR_3];
   FUNC_2(VAR_2->i2c, VAR_0 + VAR_3,
     VAR_2->irq_masks_cur[VAR_3]);
  }
 }

 FUNC_3(&VAR_2->irqlock);
}

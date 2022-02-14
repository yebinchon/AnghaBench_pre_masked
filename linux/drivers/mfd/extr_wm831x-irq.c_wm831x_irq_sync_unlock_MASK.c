
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x {scalar_t__* gpio_update; scalar_t__* irq_masks_cur; scalar_t__* irq_masks_cache; int irq_lock; int dev; } ;
struct irq_data {int dummy; } ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__) ;
 struct wm831x* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct wm831x*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct wm831x*,scalar_t__,int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_4)
{
 struct wm831x *VAR_5 = FUNC_2(VAR_4);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5->gpio_update); VAR_6++) {
  if (VAR_5->gpio_update[VAR_6]) {
   FUNC_5(VAR_5, VAR_0 + VAR_6,
     VAR_1 | VAR_2,
     VAR_5->gpio_update[VAR_6]);
   VAR_5->gpio_update[VAR_6] = 0;
  }
 }

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5->irq_masks_cur); VAR_6++) {


  if (VAR_5->irq_masks_cur[VAR_6] != VAR_5->irq_masks_cache[VAR_6]) {
   FUNC_1(VAR_5->dev, "IRQ mask sync: %x = %x\n",
    VAR_3 + VAR_6,
    VAR_5->irq_masks_cur[VAR_6]);

   VAR_5->irq_masks_cache[VAR_6] = VAR_5->irq_masks_cur[VAR_6];
   FUNC_4(VAR_5,
      VAR_3 + VAR_6,
      VAR_5->irq_masks_cur[VAR_6]);
  }
 }

 FUNC_3(&VAR_5->irq_lock);
}

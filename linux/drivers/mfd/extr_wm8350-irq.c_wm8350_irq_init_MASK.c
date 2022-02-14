
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350_platform_data {int irq_base; scalar_t__ irq_high; } ;
struct wm8350 {int chip_irq; int irq_base; int dev; int irq_lock; int * irq_masks; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_9 ;
 int FUNC_3 (int,int ,int,int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int *,int ) ;
 int FUNC_6 (int,struct wm8350*) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,int *,int ,int,char*,struct wm8350*) ;
 int FUNC_10 (struct wm8350*,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int FUNC_11 (struct wm8350*,scalar_t__) ;
 int FUNC_12 (struct wm8350*,scalar_t__,int) ;
 int FUNC_13 (struct wm8350*,int ,int ) ;

int FUNC_14(struct wm8350 *VAR_13, int VAR_14,
      struct wm8350_platform_data *VAR_15)
{
 int VAR_16, VAR_17, VAR_18;
 int VAR_19 = VAR_0;
 int VAR_20 = -1;

 if (!VAR_14) {
  FUNC_2(VAR_13->dev, "No interrupt support, no core IRQ\n");
  return 0;
 }


 FUNC_12(VAR_13, VAR_8, 0xFFFF);




 for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_13->irq_masks); VAR_18++) {
  FUNC_12(VAR_13, VAR_5 + VAR_18,
     0xFFFF);
  VAR_13->irq_masks[VAR_18] =
   FUNC_11(VAR_13,
     VAR_5 + VAR_18);
 }

 FUNC_8(&VAR_13->irq_lock);
 VAR_13->chip_irq = VAR_14;

 if (VAR_15 && VAR_15->irq_base > 0)
  VAR_20 = VAR_15->irq_base;

 VAR_13->irq_base =
  FUNC_3(VAR_20, 0, FUNC_0(VAR_12), 0);
 if (VAR_13->irq_base < 0) {
  FUNC_2(VAR_13->dev, "Allocating irqs failed with %d\n",
   VAR_13->irq_base);
  return 0;
 }

 if (VAR_15 && VAR_15->irq_high) {
  VAR_19 |= VAR_1;

  FUNC_13(VAR_13, VAR_7,
    VAR_6);
 } else {
  VAR_19 |= VAR_2;

  FUNC_10(VAR_13, VAR_7,
      VAR_6);
 }


 for (VAR_17 = VAR_13->irq_base;
      VAR_17 < FUNC_0(VAR_12) + VAR_13->irq_base;
      VAR_17++) {
  FUNC_6(VAR_17, VAR_13);
  FUNC_5(VAR_17, &VAR_11,
      VAR_9);
  FUNC_7(VAR_17, 1);

  FUNC_4(VAR_17, VAR_4 | VAR_3);
 }

 VAR_16 = FUNC_9(VAR_14, ((void*)0), VAR_10, VAR_19,
       "wm8350", VAR_13);
 if (VAR_16 != 0)
  FUNC_1(VAR_13->dev, "Failed to request IRQ: %d\n", VAR_16);


 FUNC_12(VAR_13, VAR_8, 0);

 return VAR_16;
}

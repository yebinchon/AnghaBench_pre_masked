
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8994_pdata {long irq_flags; int irq_gpio; } ;
struct wm8994 {scalar_t__ irq; int dev; int irq_data; scalar_t__ irq_base; int regmap; int edge_irq; struct wm8994_pdata pdata; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int,int *,struct wm8994*) ;
 int FUNC_6 (int ,scalar_t__,unsigned long,scalar_t__,int *,int *) ;
 int FUNC_7 (scalar_t__,int *,int ,unsigned long,char*,struct wm8994*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (struct wm8994*,int ,int ) ;

int FUNC_9(struct wm8994 *VAR_9)
{
 int VAR_10;
 unsigned long VAR_11;
 struct wm8994_pdata *VAR_12 = &VAR_9->pdata;

 if (!VAR_9->irq) {
  FUNC_1(VAR_9->dev,
    "No interrupt specified, no interrupts\n");
  VAR_9->irq_base = 0;
  return 0;
 }


 VAR_11 = VAR_3 | VAR_1;
 if (VAR_12->irq_flags)
  VAR_11 = VAR_12->irq_flags;


 if (VAR_11 & (VAR_4 | VAR_2)) {
  if (FUNC_3(VAR_12->irq_gpio) != VAR_9->irq) {
   FUNC_1(VAR_9->dev, "IRQ %d is not GPIO %d (%d)\n",
     VAR_9->irq, VAR_12->irq_gpio,
     FUNC_3(VAR_12->irq_gpio));
   VAR_9->irq = FUNC_3(VAR_12->irq_gpio);
  }

  VAR_10 = FUNC_2(VAR_9->dev, VAR_12->irq_gpio,
         VAR_0, "WM8994 IRQ");

  if (VAR_10 != 0) {
   FUNC_0(VAR_9->dev, "Failed to get IRQ GPIO: %d\n",
    VAR_10);
   return VAR_10;
  }

  VAR_9->edge_irq = FUNC_5(((void*)0), 1,
        &VAR_7,
        VAR_9);

  VAR_10 = FUNC_6(VAR_9->regmap,
       FUNC_4(VAR_9->edge_irq,
            0),
       VAR_1,
       VAR_9->irq_base, &VAR_8,
       &VAR_9->irq_data);
  if (VAR_10 != 0) {
   FUNC_0(VAR_9->dev, "Failed to get IRQ: %d\n",
    VAR_10);
   return VAR_10;
  }

  VAR_10 = FUNC_7(VAR_9->irq,
        ((void*)0), VAR_6,
        VAR_11,
        "WM8994 edge", VAR_9);
 } else {
  VAR_10 = FUNC_6(VAR_9->regmap, VAR_9->irq,
       VAR_11,
       VAR_9->irq_base, &VAR_8,
       &VAR_9->irq_data);
 }

 if (VAR_10 != 0) {
  FUNC_0(VAR_9->dev, "Failed to register IRQ chip: %d\n", VAR_10);
  return VAR_10;
 }


 FUNC_8(VAR_9, VAR_5, 0);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq_flags; int irq_gpio; } ;
struct arizona {int dev; TYPE_1__ pdata; int virq; int regmap; scalar_t__ aod_irq_chip; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,unsigned int*) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_7, void *VAR_8)
{
 struct arizona *VAR_9 = VAR_8;
 bool VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 VAR_12 = FUNC_5(VAR_9->dev);
 if (VAR_12 < 0) {
  FUNC_0(VAR_9->dev, "Failed to resume device: %d\n", VAR_12);
  return VAR_6;
 }

 do {
  VAR_10 = 0;

  if (VAR_9->aod_irq_chip) {




   VAR_12 = FUNC_8(VAR_9->regmap,
       VAR_0, &VAR_11);
   if (VAR_12)
    FUNC_1(VAR_9->dev,
     "Failed to read AOD IRQ1 %d\n", VAR_12);
   else if (VAR_11)
    FUNC_3(
     FUNC_4(VAR_9->virq, 0));
  }





  VAR_12 = FUNC_8(VAR_9->regmap, VAR_2,
      &VAR_11);
  if (VAR_12 == 0 && VAR_11 & VAR_1) {
   FUNC_3(FUNC_4(VAR_9->virq, 1));
  } else if (VAR_12 != 0) {
   FUNC_0(VAR_9->dev,
    "Failed to read main IRQ status: %d\n", VAR_12);
  }





  if (!VAR_9->pdata.irq_gpio) {
   break;
  } else if (VAR_9->pdata.irq_flags & VAR_4 &&
      FUNC_2(VAR_9->pdata.irq_gpio)) {
   VAR_10 = 1;
  } else if (VAR_9->pdata.irq_flags & VAR_3 &&
      !FUNC_2(VAR_9->pdata.irq_gpio)) {
   VAR_10 = 1;
  }
 } while (VAR_10);

 FUNC_6(VAR_9->dev);
 FUNC_7(VAR_9->dev);

 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_10__ {int parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct mt6397_rtc {scalar_t__ irq; TYPE_1__* rtc_dev; TYPE_3__* dev; int lock; int regmap; int addr_base; } ;
struct mt6397_chip {int regmap; } ;
struct TYPE_9__ {int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*,char*,int,int) ;
 struct mt6397_chip* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int) ;
 struct mt6397_rtc* FUNC_5 (TYPE_3__*,int,int ) ;
 TYPE_1__* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int,struct mt6397_rtc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct platform_device*,int ) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct mt6397_rtc*) ;
 int FUNC_12 (int,int *,int ,int,char*,struct mt6397_rtc*) ;
 int FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_7)
{
 struct resource *VAR_8;
 struct mt6397_chip *VAR_9 = FUNC_3(VAR_7->dev.parent);
 struct mt6397_rtc *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_5(&VAR_7->dev, sizeof(struct mt6397_rtc), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_8 = FUNC_10(VAR_7, VAR_2, 0);
 VAR_10->addr_base = VAR_8->start;

 VAR_10->irq = FUNC_9(VAR_7, 0);
 if (VAR_10->irq < 0)
  return VAR_10->irq;

 VAR_10->regmap = VAR_9->regmap;
 VAR_10->dev = &VAR_7->dev;
 FUNC_8(&VAR_10->lock);

 FUNC_11(VAR_7, VAR_10);

 VAR_10->rtc_dev = FUNC_6(VAR_10->dev);
 if (FUNC_0(VAR_10->rtc_dev))
  return FUNC_1(VAR_10->rtc_dev);

 VAR_11 = FUNC_12(VAR_10->irq, ((void*)0),
       VAR_5,
       VAR_3 | VAR_4,
       "mt6397-rtc", VAR_10);
 if (VAR_11) {
  FUNC_2(&VAR_7->dev, "Failed to request alarm IRQ: %d: %d\n",
   VAR_10->irq, VAR_11);
  return VAR_11;
 }

 FUNC_4(&VAR_7->dev, 1);

 VAR_10->rtc_dev->ops = &VAR_6;

 VAR_11 = FUNC_13(VAR_10->rtc_dev);
 if (VAR_11)
  goto out_free_irq;

 return 0;

out_free_irq:
 FUNC_7(VAR_10->irq, VAR_10);
 return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct max8907_rtc {int irq; int rtc_dev; int regmap; struct max8907* max8907; } ;
struct max8907 {int irqc_rtc; int regmap_rtc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,char*,int,...) ;
 struct max8907* FUNC_3 (int ) ;
 struct max8907_rtc* FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (TYPE_1__*,int,int *,int ,int ,char*,struct max8907_rtc*) ;
 int FUNC_6 (TYPE_1__*,char*,int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct platform_device*,struct max8907_rtc*) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_7)
{
 struct max8907 *VAR_8 = FUNC_3(VAR_7->dev.parent);
 struct max8907_rtc *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4(&VAR_7->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;
 FUNC_7(VAR_7, VAR_9);

 VAR_9->max8907 = VAR_8;
 VAR_9->regmap = VAR_8->regmap_rtc;

 VAR_9->rtc_dev = FUNC_6(&VAR_7->dev, "max8907-rtc",
     &VAR_6, VAR_4);
 if (FUNC_0(VAR_9->rtc_dev)) {
  VAR_10 = FUNC_1(VAR_9->rtc_dev);
  FUNC_2(&VAR_7->dev, "Failed to register RTC device: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_9->irq = FUNC_8(VAR_8->irqc_rtc,
           VAR_3);
 if (VAR_9->irq < 0)
  return VAR_9->irq;

 VAR_10 = FUNC_5(&VAR_7->dev, VAR_9->irq, ((void*)0),
    VAR_5,
    VAR_2, "max8907-alarm0", VAR_9);
 if (VAR_10 < 0)
  FUNC_2(&VAR_7->dev, "Failed to request IRQ%d: %d\n",
   VAR_9->irq, VAR_10);

 return VAR_10;
}

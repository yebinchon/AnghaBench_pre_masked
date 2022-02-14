
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u32 ;
struct tps65910_rtc {int irq; TYPE_1__* rtc; } ;
struct tps65910 {int regmap; } ;
struct TYPE_15__ {int parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_14__ {int range_max; int range_min; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 struct tps65910* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,char*,int) ;
 int FUNC_7 (TYPE_3__*,int) ;
 struct tps65910_rtc* FUNC_8 (TYPE_3__*,int,int ) ;
 int FUNC_9 (TYPE_3__*,int,int *,int ,int ,int ,TYPE_3__*) ;
 TYPE_1__* FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (struct platform_device*,int ) ;
 int FUNC_12 (struct platform_device*,struct tps65910_rtc*) ;
 int FUNC_13 (int ,int ,int *) ;
 int FUNC_14 (int ,int ,int ,int) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (TYPE_1__*) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_14)
{
 struct tps65910 *VAR_15 = ((void*)0);
 struct tps65910_rtc *VAR_16 = ((void*)0);
 int VAR_17;
 int VAR_18;
 u32 VAR_19;

 VAR_15 = FUNC_4(VAR_14->dev.parent);

 VAR_16 = FUNC_8(&VAR_14->dev, sizeof(struct tps65910_rtc),
   VAR_4);
 if (!VAR_16)
  return -VAR_2;

 VAR_16->rtc = FUNC_10(&VAR_14->dev);
 if (FUNC_0(VAR_16->rtc))
  return FUNC_1(VAR_16->rtc);


 VAR_17 = FUNC_13(VAR_15->regmap, VAR_11, &VAR_19);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = FUNC_15(VAR_15->regmap, VAR_11, VAR_19);
 if (VAR_17 < 0)
  return VAR_17;

 FUNC_2(&VAR_14->dev, "Enabling rtc-tps65910.\n");


 VAR_17 = FUNC_14(VAR_15->regmap, VAR_8,
  VAR_0, 0 << VAR_1);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_19 = VAR_10;
 VAR_17 = FUNC_15(VAR_15->regmap, VAR_9, VAR_19);
 if (VAR_17 < 0)
  return VAR_17;

 FUNC_12(VAR_14, VAR_16);

 VAR_18 = FUNC_11(VAR_14, 0);
 if (VAR_18 <= 0) {
  FUNC_6(&VAR_14->dev, "Wake up is not possible as irq = %d\n",
   VAR_18);
  return -VAR_3;
 }

 VAR_17 = FUNC_9(&VAR_14->dev, VAR_18, ((void*)0),
  VAR_12, VAR_5,
  FUNC_5(&VAR_14->dev), &VAR_14->dev);
 if (VAR_17 < 0) {
  FUNC_3(&VAR_14->dev, "IRQ is not free.\n");
  return VAR_17;
 }
 VAR_16->irq = VAR_18;
 FUNC_7(&VAR_14->dev, 1);

 VAR_16->rtc->ops = &VAR_13;
 VAR_16->rtc->range_min = VAR_6;
 VAR_16->rtc->range_max = VAR_7;

 return FUNC_16(VAR_16->rtc);
}

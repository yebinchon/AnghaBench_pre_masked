
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct ac100_rtc_dev {scalar_t__ irq; TYPE_1__* rtc; int regmap; TYPE_3__* dev; } ;
struct ac100_dev {int regmap; } ;
struct TYPE_10__ {int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct ac100_rtc_dev*) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 struct ac100_dev* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;
 struct ac100_rtc_dev* FUNC_6 (TYPE_3__*,int,int ) ;
 int FUNC_7 (TYPE_3__*,int,int *,int ,int,int ,struct ac100_rtc_dev*) ;
 TYPE_1__* FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (struct platform_device*,struct ac100_rtc_dev*) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ,int ) ;
 int FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_11)
{
 struct ac100_dev *VAR_12 = FUNC_4(VAR_11->dev.parent);
 struct ac100_rtc_dev *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_6(&VAR_11->dev, sizeof(*VAR_13), VAR_6);
 if (!VAR_13)
  return -VAR_5;

 FUNC_10(VAR_11, VAR_13);
 VAR_13->dev = &VAR_11->dev;
 VAR_13->regmap = VAR_12->regmap;

 VAR_13->irq = FUNC_9(VAR_11, 0);
 if (VAR_13->irq < 0)
  return VAR_13->irq;

 VAR_13->rtc = FUNC_8(&VAR_11->dev);
 if (FUNC_0(VAR_13->rtc))
  return FUNC_1(VAR_13->rtc);

 VAR_13->rtc->ops = &VAR_10;

 VAR_14 = FUNC_7(&VAR_11->dev, VAR_13->irq, ((void*)0),
     VAR_9,
     VAR_8 | VAR_7,
     FUNC_5(&VAR_11->dev), VAR_13);
 if (VAR_14) {
  FUNC_3(&VAR_11->dev, "Could not request IRQ\n");
  return VAR_14;
 }


 FUNC_12(VAR_13->regmap, VAR_3, VAR_4,
     VAR_4);


 FUNC_11(VAR_13->regmap, VAR_0, 0);


 FUNC_11(VAR_13->regmap, VAR_2, VAR_1);

 VAR_14 = FUNC_2(VAR_13);
 if (VAR_14)
  return VAR_14;

 return FUNC_13(VAR_13->rtc);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct pic32_rtc_dev {scalar_t__ alarm_irq; TYPE_1__* clk; TYPE_1__* rtc; int alarm_lock; TYPE_1__* reg_base; } ;
struct TYPE_10__ {int max_user_freq; int range_max; int range_min; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 TYPE_1__* FUNC_8 (int *,int *) ;
 TYPE_1__* FUNC_9 (int *,struct resource*) ;
 struct pic32_rtc_dev* FUNC_10 (int *,int,int ) ;
 int FUNC_11 (int *,int,int ,int ,int ,struct pic32_rtc_dev*) ;
 TYPE_1__* FUNC_12 (int *) ;
 int VAR_5 ;
 int FUNC_13 (struct pic32_rtc_dev*,int) ;
 int FUNC_14 (int *,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_15 (struct platform_device*,int ) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (struct platform_device*,struct pic32_rtc_dev*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_7)
{
 struct pic32_rtc_dev *VAR_8;
 struct resource *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_10(&VAR_7->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_17(VAR_7, VAR_8);

 VAR_8->alarm_irq = FUNC_15(VAR_7, 0);
 if (VAR_8->alarm_irq < 0)
  return VAR_8->alarm_irq;

 VAR_9 = FUNC_16(VAR_7, VAR_2, 0);
 VAR_8->reg_base = FUNC_9(&VAR_7->dev, VAR_9);
 if (FUNC_0(VAR_8->reg_base))
  return FUNC_1(VAR_8->reg_base);

 VAR_8->clk = FUNC_8(&VAR_7->dev, ((void*)0));
 if (FUNC_0(VAR_8->clk)) {
  FUNC_5(&VAR_7->dev, "failed to find rtc clock source\n");
  VAR_10 = FUNC_1(VAR_8->clk);
  VAR_8->clk = ((void*)0);
  return VAR_10;
 }

 FUNC_19(&VAR_8->alarm_lock);

 FUNC_4(VAR_8->clk);

 FUNC_13(VAR_8, 1);

 FUNC_7(&VAR_7->dev, 1);

 VAR_8->rtc = FUNC_12(&VAR_7->dev);
 if (FUNC_0(VAR_8->rtc))
  return FUNC_1(VAR_8->rtc);

 VAR_8->rtc->ops = &VAR_6;
 VAR_8->rtc->range_min = VAR_3;
 VAR_8->rtc->range_max = VAR_4;

 VAR_10 = FUNC_18(VAR_8->rtc);
 if (VAR_10)
  goto err_nortc;

 VAR_8->rtc->max_user_freq = 128;

 FUNC_14(&VAR_7->dev, 1);
 VAR_10 = FUNC_11(&VAR_7->dev, VAR_8->alarm_irq,
          VAR_5, 0,
          FUNC_6(&VAR_7->dev), VAR_8);
 if (VAR_10) {
  FUNC_5(&VAR_7->dev,
   "IRQ %d error %d\n", VAR_8->alarm_irq, VAR_10);
  goto err_nortc;
 }

 FUNC_2(VAR_8->clk);

 return 0;

err_nortc:
 FUNC_13(VAR_8, 0);
 FUNC_3(VAR_8->clk);

 return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct xlnx_rtc_dev {scalar_t__ alarm_irq; scalar_t__ sec_irq; TYPE_1__* rtc; int calibval; TYPE_1__* reg_base; } ;
struct resource {int dummy; } ;
struct TYPE_14__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_13__ {int range_max; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int) ;
 TYPE_1__* FUNC_5 (TYPE_3__*,struct resource*) ;
 struct xlnx_rtc_dev* FUNC_6 (TYPE_3__*,int,int ) ;
 int FUNC_7 (TYPE_3__*,int,int ,int ,int ,struct xlnx_rtc_dev*) ;
 TYPE_1__* FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int ,char*,int *) ;
 void* FUNC_10 (struct platform_device*,char*) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct xlnx_rtc_dev*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (struct xlnx_rtc_dev*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_7)
{
 struct xlnx_rtc_dev *VAR_8;
 struct resource *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_6(&VAR_7->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_12(VAR_7, VAR_8);

 VAR_8->rtc = FUNC_8(&VAR_7->dev);
 if (FUNC_0(VAR_8->rtc))
  return FUNC_1(VAR_8->rtc);

 VAR_8->rtc->ops = &VAR_6;
 VAR_8->rtc->range_max = VAR_4;

 VAR_9 = FUNC_11(VAR_7, VAR_2, 0);

 VAR_8->reg_base = FUNC_5(&VAR_7->dev, VAR_9);
 if (FUNC_0(VAR_8->reg_base))
  return FUNC_1(VAR_8->reg_base);

 VAR_8->alarm_irq = FUNC_10(VAR_7, "alarm");
 if (VAR_8->alarm_irq < 0)
  return VAR_8->alarm_irq;
 VAR_10 = FUNC_7(&VAR_7->dev, VAR_8->alarm_irq,
          VAR_5, 0,
          FUNC_3(&VAR_7->dev), VAR_8);
 if (VAR_10) {
  FUNC_2(&VAR_7->dev, "request irq failed\n");
  return VAR_10;
 }

 VAR_8->sec_irq = FUNC_10(VAR_7, "sec");
 if (VAR_8->sec_irq < 0)
  return VAR_8->sec_irq;
 VAR_10 = FUNC_7(&VAR_7->dev, VAR_8->sec_irq,
          VAR_5, 0,
          FUNC_3(&VAR_7->dev), VAR_8);
 if (VAR_10) {
  FUNC_2(&VAR_7->dev, "request irq failed\n");
  return VAR_10;
 }

 VAR_10 = FUNC_9(VAR_7->dev.of_node, "calibration",
       &VAR_8->calibval);
 if (VAR_10)
  VAR_8->calibval = VAR_3;

 FUNC_14(VAR_8);

 FUNC_4(&VAR_7->dev, 1);

 return FUNC_13(VAR_8->rtc);
}

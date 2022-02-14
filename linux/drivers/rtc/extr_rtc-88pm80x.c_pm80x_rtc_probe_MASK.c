
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct pm80x_rtc_pdata {int rtc_wakeup; } ;
struct pm80x_rtc_info {scalar_t__ irq; TYPE_2__* rtc_dev; int map; TYPE_4__* dev; struct pm80x_chip* chip; } ;
struct pm80x_chip {int dev; int regmap; } ;
struct TYPE_14__ {struct device_node* of_node; int parent; } ;
struct platform_device {TYPE_4__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_12__ {int * platform_data; } ;
struct TYPE_13__ {TYPE_1__ dev; int range_max; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_4__*,char*,...) ;
 struct pm80x_chip* FUNC_3 (int ) ;
 struct pm80x_rtc_pdata* FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,struct pm80x_rtc_info*) ;
 int FUNC_6 (TYPE_4__*,int) ;
 void* FUNC_7 (TYPE_4__*,int,int ) ;
 TYPE_2__* FUNC_8 (TYPE_4__*) ;
 scalar_t__ FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (struct pm80x_chip*,scalar_t__,struct pm80x_rtc_info*) ;
 int FUNC_11 (struct pm80x_chip*,scalar_t__,int ,int ,char*,struct pm80x_rtc_info*) ;
 int VAR_7 ;
 int FUNC_12 (int ,int ,int ,int ) ;
 int FUNC_13 (TYPE_2__*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_9)
{
 struct pm80x_chip *VAR_10 = FUNC_3(VAR_9->dev.parent);
 struct pm80x_rtc_pdata *VAR_11 = FUNC_4(&VAR_9->dev);
 struct pm80x_rtc_info *VAR_12;
 struct device_node *VAR_13 = VAR_9->dev.of_node;
 int VAR_14;

 if (!VAR_11 && !VAR_13) {
  FUNC_2(&VAR_9->dev,
   "pm80x-rtc requires platform data or of_node\n");
  return -VAR_0;
 }

 if (!VAR_11) {
  VAR_11 = FUNC_7(&VAR_9->dev, sizeof(*VAR_11), VAR_2);
  if (!VAR_11) {
   FUNC_2(&VAR_9->dev, "failed to allocate memory\n");
   return -VAR_1;
  }
 }

 VAR_12 =
     FUNC_7(&VAR_9->dev, sizeof(struct pm80x_rtc_info), VAR_2);
 if (!VAR_12)
  return -VAR_1;
 VAR_12->irq = FUNC_9(VAR_9, 0);
 if (VAR_12->irq < 0) {
  VAR_14 = -VAR_0;
  goto out;
 }

 VAR_12->chip = VAR_10;
 VAR_12->map = VAR_10->regmap;
 if (!VAR_12->map) {
  FUNC_2(&VAR_9->dev, "no regmap!\n");
  VAR_14 = -VAR_0;
  goto out;
 }

 VAR_12->dev = &VAR_9->dev;
 FUNC_5(&VAR_9->dev, VAR_12);

 VAR_12->rtc_dev = FUNC_8(&VAR_9->dev);
 if (FUNC_0(VAR_12->rtc_dev))
  return FUNC_1(VAR_12->rtc_dev);

 VAR_14 = FUNC_11(VAR_10, VAR_12->irq, VAR_8,
    VAR_3, "rtc", VAR_12);
 if (VAR_14 < 0) {
  FUNC_2(VAR_10->dev, "Failed to request IRQ: #%d: %d\n",
   VAR_12->irq, VAR_14);
  goto out;
 }

 VAR_12->rtc_dev->ops = &VAR_7;
 VAR_12->rtc_dev->range_max = VAR_6;

 VAR_14 = FUNC_13(VAR_12->rtc_dev);
 if (VAR_14)
  goto out_rtc;





 FUNC_12(VAR_12->map, VAR_5, VAR_4,
      VAR_4);


 VAR_12->rtc_dev->dev.platform_data = &VAR_11->rtc_wakeup;

 FUNC_6(&VAR_9->dev, 1);

 return 0;
out_rtc:
 FUNC_10(VAR_10, VAR_12->irq, VAR_12);
out:
 return VAR_14;
}

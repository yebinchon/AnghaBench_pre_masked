
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct max8997_rtc_info {int virq; int rtc_dev; int rtc; struct max8997_dev* max8997; TYPE_1__* dev; int lock; } ;
struct max8997_dev {int irq_domain; int rtc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 struct max8997_dev* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int) ;
 struct max8997_rtc_info* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (TYPE_1__*,int,int *,int ,int ,char*,struct max8997_rtc_info*) ;
 int FUNC_7 (TYPE_1__*,char*,int *,int ) ;
 int FUNC_8 (int ,int ) ;
 int VAR_5 ;
 int FUNC_9 (struct max8997_rtc_info*,int) ;
 int FUNC_10 (struct max8997_rtc_info*,int) ;
 int FUNC_11 (struct max8997_rtc_info*) ;
 int VAR_6 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct platform_device*,struct max8997_rtc_info*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_7)
{
 struct max8997_dev *VAR_8 = FUNC_3(VAR_7->dev.parent);
 struct max8997_rtc_info *VAR_9;
 int VAR_10, VAR_11;

 VAR_9 = FUNC_5(&VAR_7->dev, sizeof(struct max8997_rtc_info),
   VAR_2);
 if (!VAR_9)
  return -VAR_0;

 FUNC_12(&VAR_9->lock);
 VAR_9->dev = &VAR_7->dev;
 VAR_9->max8997 = VAR_8;
 VAR_9->rtc = VAR_8->rtc;

 FUNC_13(VAR_7, VAR_9);

 VAR_10 = FUNC_11(VAR_9);

 if (VAR_10 < 0) {
  FUNC_2(&VAR_7->dev, "Failed to initialize RTC reg:%d\n", VAR_10);
  return VAR_10;
 }

 FUNC_10(VAR_9, 1);
 FUNC_9(VAR_9, 1);

 FUNC_4(&VAR_7->dev, 1);

 VAR_9->rtc_dev = FUNC_7(&VAR_7->dev, "max8997-rtc",
     &VAR_6, VAR_4);

 if (FUNC_0(VAR_9->rtc_dev)) {
  VAR_10 = FUNC_1(VAR_9->rtc_dev);
  FUNC_2(&VAR_7->dev, "Failed to register RTC device: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_11 = FUNC_8(VAR_8->irq_domain, VAR_3);
 if (!VAR_11) {
  FUNC_2(&VAR_7->dev, "Failed to create mapping alarm IRQ\n");
  VAR_10 = -VAR_1;
  goto err_out;
 }
 VAR_9->virq = VAR_11;

 VAR_10 = FUNC_6(&VAR_7->dev, VAR_11, ((void*)0),
    VAR_5, 0,
    "rtc-alarm0", VAR_9);
 if (VAR_10 < 0)
  FUNC_2(&VAR_7->dev, "Failed to request alarm IRQ: %d: %d\n",
   VAR_9->virq, VAR_10);

err_out:
 return VAR_10;
}

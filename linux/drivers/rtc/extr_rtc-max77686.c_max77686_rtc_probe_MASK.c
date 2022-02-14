
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device_id {int name; scalar_t__ driver_data; } ;
struct platform_device {int dev; } ;
struct max77686_rtc_info {int rtc_irq_data; int rtc_irq; int virq; int rtc_dev; struct max77686_rtc_driver_data const* drv_data; int * dev; int lock; } ;
struct max77686_rtc_driver_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int *,char*,int,...) ;
 int FUNC_3 (int *,int) ;
 struct max77686_rtc_info* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int ,int *,int ) ;
 int FUNC_6 (struct max77686_rtc_info*) ;
 int VAR_6 ;
 int FUNC_7 (struct max77686_rtc_info*) ;
 int VAR_7 ;
 int FUNC_8 (int *) ;
 struct platform_device_id* FUNC_9 (struct platform_device*) ;
 int FUNC_10 (struct platform_device*,struct max77686_rtc_info*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int *,int ,int ,char*,struct max77686_rtc_info*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_8)
{
 struct max77686_rtc_info *VAR_9;
 const struct platform_device_id *VAR_10 = FUNC_9(VAR_8);
 int VAR_11;

 VAR_9 = FUNC_4(&VAR_8->dev, sizeof(struct max77686_rtc_info),
       VAR_3);
 if (!VAR_9)
  return -VAR_1;

 FUNC_8(&VAR_9->lock);
 VAR_9->dev = &VAR_8->dev;
 VAR_9->drv_data = (const struct max77686_rtc_driver_data *)
  VAR_10->driver_data;

 VAR_11 = FUNC_6(VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 FUNC_10(VAR_8, VAR_9);

 VAR_11 = FUNC_7(VAR_9);
 if (VAR_11 < 0) {
  FUNC_2(&VAR_8->dev, "Failed to initialize RTC reg:%d\n", VAR_11);
  goto err_rtc;
 }

 FUNC_3(&VAR_8->dev, 1);

 VAR_9->rtc_dev = FUNC_5(&VAR_8->dev, VAR_10->name,
     &VAR_7, VAR_5);

 if (FUNC_0(VAR_9->rtc_dev)) {
  VAR_11 = FUNC_1(VAR_9->rtc_dev);
  FUNC_2(&VAR_8->dev, "Failed to register RTC device: %d\n", VAR_11);
  if (VAR_11 == 0)
   VAR_11 = -VAR_0;
  goto err_rtc;
 }

 VAR_9->virq = FUNC_12(VAR_9->rtc_irq_data,
      VAR_4);
 if (VAR_9->virq <= 0) {
  VAR_11 = -VAR_2;
  goto err_rtc;
 }

 VAR_11 = FUNC_13(VAR_9->virq, ((void*)0), VAR_6, 0,
       "rtc-alarm1", VAR_9);
 if (VAR_11 < 0) {
  FUNC_2(&VAR_8->dev, "Failed to request alarm IRQ: %d: %d\n",
   VAR_9->virq, VAR_11);
  goto err_rtc;
 }

 return 0;

err_rtc:
 FUNC_11(VAR_9->rtc_irq, VAR_9->rtc_irq_data);

 return VAR_11;
}

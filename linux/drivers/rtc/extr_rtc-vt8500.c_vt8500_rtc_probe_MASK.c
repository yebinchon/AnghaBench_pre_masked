
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt8500_rtc {int irq_alarm; scalar_t__ rtc; scalar_t__ regbase; int lock; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,char*,int,...) ;
 scalar_t__ FUNC_3 (int *,struct resource*) ;
 struct vt8500_rtc* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int,int ,int ,char*,struct vt8500_rtc*) ;
 scalar_t__ FUNC_6 (int *,char*,int *,int ) ;
 int FUNC_7 (struct platform_device*,int ) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct vt8500_rtc*) ;
 int FUNC_10 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_8)
{
 struct vt8500_rtc *VAR_9;
 struct resource *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_4(&VAR_8->dev,
      sizeof(struct vt8500_rtc), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 FUNC_10(&VAR_9->lock);
 FUNC_9(VAR_8, VAR_9);

 VAR_9->irq_alarm = FUNC_7(VAR_8, 0);
 if (VAR_9->irq_alarm < 0)
  return VAR_9->irq_alarm;

 VAR_10 = FUNC_8(VAR_8, VAR_2, 0);
 VAR_9->regbase = FUNC_3(&VAR_8->dev, VAR_10);
 if (FUNC_0(VAR_9->regbase))
  return FUNC_1(VAR_9->regbase);


 FUNC_11(VAR_5,
        VAR_9->regbase + VAR_4);

 VAR_9->rtc = FUNC_6(&VAR_8->dev, "vt8500-rtc",
           &VAR_7, VAR_3);
 if (FUNC_0(VAR_9->rtc)) {
  VAR_11 = FUNC_1(VAR_9->rtc);
  FUNC_2(&VAR_8->dev,
   "Failed to register RTC device -> %d\n", VAR_11);
  goto err_return;
 }

 VAR_11 = FUNC_5(&VAR_8->dev, VAR_9->irq_alarm,
    VAR_6, 0, "rtc alarm", VAR_9);
 if (VAR_11 < 0) {
  FUNC_2(&VAR_8->dev, "can't get irq %i, err %d\n",
   VAR_9->irq_alarm, VAR_11);
  goto err_return;
 }

 return 0;

err_return:
 return VAR_11;
}

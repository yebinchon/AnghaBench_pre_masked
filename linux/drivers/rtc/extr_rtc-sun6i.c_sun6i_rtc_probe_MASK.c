
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun6i_rtc_dev {scalar_t__ irq; int rtc; int losc; scalar_t__ base; int * dev; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int,int ,int ,int ,struct sun6i_rtc_dev*) ;
 int FUNC_8 (int *,char*,int *,int ) ;
 scalar_t__ FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (struct platform_device*,struct sun6i_rtc_dev*) ;
 struct sun6i_rtc_dev* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_15)
{
 struct sun6i_rtc_dev *VAR_16 = VAR_12;
 int VAR_17;

 if (!VAR_16)
  return -VAR_0;

 FUNC_10(VAR_15, VAR_16);
 VAR_16->dev = &VAR_15->dev;

 VAR_16->irq = FUNC_9(VAR_15, 0);
 if (VAR_16->irq < 0)
  return VAR_16->irq;

 VAR_17 = FUNC_7(&VAR_15->dev, VAR_16->irq, VAR_13,
          0, FUNC_5(&VAR_15->dev), VAR_16);
 if (VAR_17) {
  FUNC_3(&VAR_15->dev, "Could not request IRQ\n");
  return VAR_17;
 }


 FUNC_11(0, VAR_16->base + VAR_6);


 FUNC_11(0, VAR_16->base + VAR_7);


 FUNC_11(0, VAR_16->base + VAR_8);


 FUNC_11(0, VAR_16->base + VAR_2);


 FUNC_11(0, VAR_16->base + VAR_3);


 FUNC_11(VAR_10,
        VAR_16->base + VAR_9);


 FUNC_11(VAR_5,
        VAR_16->base + VAR_4);


 FUNC_11(0, VAR_16->base + VAR_1);

 FUNC_2(VAR_16->losc);

 FUNC_6(&VAR_15->dev, 1);

 VAR_16->rtc = FUNC_8(&VAR_15->dev, "rtc-sun6i",
          &VAR_14, VAR_11);
 if (FUNC_0(VAR_16->rtc)) {
  FUNC_3(&VAR_15->dev, "unable to register device\n");
  return FUNC_1(VAR_16->rtc);
 }

 FUNC_4(&VAR_15->dev, "RTC enabled\n");

 return 0;
}

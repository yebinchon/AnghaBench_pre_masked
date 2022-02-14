
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct as3722_rtc {int alarm_irq; int rtc; TYPE_1__* dev; struct as3722* as3722; } ;
struct as3722 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct as3722*,int ,int,int) ;
 int FUNC_3 (TYPE_1__*,char*,int,...) ;
 struct as3722* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,char*,int ) ;
 int FUNC_6 (TYPE_1__*,int) ;
 struct as3722_rtc* FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int *,int ,int ,char*,struct as3722_rtc*) ;
 int FUNC_9 (TYPE_1__*,char*,int *,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct platform_device*,int ) ;
 int FUNC_12 (struct platform_device*,struct as3722_rtc*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_9)
{
 struct as3722 *VAR_10 = FUNC_4(VAR_9->dev.parent);
 struct as3722_rtc *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_7(&VAR_9->dev, sizeof(*VAR_11), VAR_4);
 if (!VAR_11)
  return -VAR_3;

 VAR_11->as3722 = VAR_10;
 VAR_11->dev = &VAR_9->dev;
 FUNC_12(VAR_9, VAR_11);


 VAR_12 = FUNC_2(VAR_10, VAR_1,
   VAR_2 | VAR_0,
   VAR_2 | VAR_0);
 if (VAR_12 < 0) {
  FUNC_3(&VAR_9->dev, "RTC_CONTROL reg write failed: %d\n", VAR_12);
  return VAR_12;
 }

 FUNC_6(&VAR_9->dev, 1);

 VAR_11->rtc = FUNC_9(&VAR_9->dev, "as3722-rtc",
    &VAR_8, VAR_6);
 if (FUNC_0(VAR_11->rtc)) {
  VAR_12 = FUNC_1(VAR_11->rtc);
  FUNC_3(&VAR_9->dev, "RTC register failed: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_11->alarm_irq = FUNC_11(VAR_9, 0);
 FUNC_5(&VAR_9->dev, "RTC interrupt %d\n", VAR_11->alarm_irq);

 VAR_12 = FUNC_8(&VAR_9->dev, VAR_11->alarm_irq, ((void*)0),
   VAR_7, VAR_5,
   "rtc-alarm", VAR_11);
 if (VAR_12 < 0) {
  FUNC_3(&VAR_9->dev, "Failed to request alarm IRQ %d: %d\n",
    VAR_11->alarm_irq, VAR_12);
  return VAR_12;
 }
 FUNC_10(VAR_11->alarm_irq);
 return 0;
}

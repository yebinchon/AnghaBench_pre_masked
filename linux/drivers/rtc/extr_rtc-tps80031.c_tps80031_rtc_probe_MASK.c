
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct tps80031_rtc {int irq; int rtc; } ;
struct rtc_time {int tm_year; int tm_mon; int tm_mday; } ;
struct TYPE_10__ {int parent; } ;
struct platform_device {TYPE_1__ dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_1__*,struct tps80031_rtc*) ;
 int FUNC_3 (TYPE_1__*,char*,int,...) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 struct tps80031_rtc* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int *,int ,int ,int ,struct tps80031_rtc*) ;
 int FUNC_8 (TYPE_1__*,int ,int *,int ) ;
 int FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (struct platform_device*,struct tps80031_rtc*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 (TYPE_1__*,struct rtc_time*) ;
 int FUNC_12 (TYPE_1__*,struct rtc_time*) ;
 int FUNC_13 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_13)
{
 struct tps80031_rtc *VAR_14;
 struct rtc_time VAR_15;
 int VAR_16;

 VAR_14 = FUNC_6(&VAR_13->dev, sizeof(*VAR_14), VAR_1);
 if (!VAR_14)
  return -VAR_0;

 VAR_14->irq = FUNC_9(VAR_13, 0);
 FUNC_10(VAR_13, VAR_14);


 VAR_16 = FUNC_13(VAR_13->dev.parent, VAR_10,
   VAR_6, VAR_4);
 if (VAR_16 < 0) {
  FUNC_3(&VAR_13->dev, "failed to start RTC. err = %d\n", VAR_16);
  return VAR_16;
 }


 FUNC_11(&VAR_13->dev, &VAR_15);
 if ((VAR_15.tm_year == VAR_3 + VAR_9) &&
  (VAR_15.tm_mon == (VAR_8 - 1)) &&
  (VAR_15.tm_mday == VAR_7)) {
  VAR_15.tm_year = 2000;
  VAR_15.tm_mday = 1;
  VAR_15.tm_mon = 1;
  VAR_16 = FUNC_12(&VAR_13->dev, &VAR_15);
  if (VAR_16 < 0) {
   FUNC_3(&VAR_13->dev,
    "RTC set time failed, err = %d\n", VAR_16);
   return VAR_16;
  }
 }


 VAR_16 = FUNC_2(&VAR_13->dev, VAR_14);
 if (VAR_16 < 0) {
  FUNC_3(&VAR_13->dev, "Clear alarm int failed, err = %d\n", VAR_16);
  return VAR_16;
 }

 VAR_14->rtc = FUNC_8(&VAR_13->dev, VAR_13->name,
          &VAR_12, VAR_5);
 if (FUNC_0(VAR_14->rtc)) {
  VAR_16 = FUNC_1(VAR_14->rtc);
  FUNC_3(&VAR_13->dev, "RTC registration failed, err %d\n", VAR_16);
  return VAR_16;
 }

 VAR_16 = FUNC_7(&VAR_13->dev, VAR_14->irq, ((void*)0),
   VAR_11,
   VAR_2,
   FUNC_4(&VAR_13->dev), VAR_14);
 if (VAR_16 < 0) {
  FUNC_3(&VAR_13->dev, "request IRQ:%d failed, err = %d\n",
    VAR_14->irq, VAR_16);
  return VAR_16;
 }
 FUNC_5(&VAR_13->dev, 1);
 return 0;
}

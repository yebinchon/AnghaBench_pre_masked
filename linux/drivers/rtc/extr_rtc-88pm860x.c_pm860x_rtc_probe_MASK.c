
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct rtc_time {int tm_year; int tm_mday; scalar_t__ tm_sec; scalar_t__ tm_min; scalar_t__ tm_hour; scalar_t__ tm_mon; } ;
struct pm860x_rtc_pdata {int vrtc; int (* sync ) (unsigned long) ;} ;
struct pm860x_rtc_info {scalar_t__ irq; int vrtc; int calib_work; int i2c; int rtc_dev; int (* sync ) (unsigned long) ;TYPE_1__* dev; struct pm860x_chip* chip; } ;
struct pm860x_chip {scalar_t__ id; int dev; int companion; int client; } ;
struct TYPE_10__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 struct pm860x_chip* FUNC_4 (int ) ;
 struct pm860x_rtc_pdata* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,struct pm860x_rtc_info*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 struct pm860x_rtc_info* FUNC_8 (TYPE_1__*,int,int ) ;
 int FUNC_9 (TYPE_1__*,int,int *,int ,int ,char*,struct pm860x_rtc_info*) ;
 int FUNC_10 (TYPE_1__*,char*,int *,int ) ;
 scalar_t__ FUNC_11 (struct platform_device*,int ) ;
 int FUNC_12 (int ,int ,int ) ;
 scalar_t__ FUNC_13 (struct platform_device*,struct pm860x_rtc_info*) ;
 int VAR_19 ;
 int FUNC_14 (TYPE_1__*,struct rtc_time*) ;
 int FUNC_15 (TYPE_1__*,struct rtc_time*) ;
 int FUNC_16 (int ,int ,int ,int ) ;
 int FUNC_17 (struct rtc_time*,unsigned long*) ;
 int VAR_20 ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (unsigned long) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_21)
{
 struct pm860x_chip *VAR_22 = FUNC_4(VAR_21->dev.parent);
 struct pm860x_rtc_pdata *VAR_23 = ((void*)0);
 struct pm860x_rtc_info *VAR_24;
 struct rtc_time VAR_25;
 unsigned long VAR_26 = 0;
 int VAR_27;

 VAR_23 = FUNC_5(&VAR_21->dev);

 VAR_24 = FUNC_8(&VAR_21->dev, sizeof(struct pm860x_rtc_info),
       VAR_2);
 if (!VAR_24)
  return -VAR_1;
 VAR_24->irq = FUNC_11(VAR_21, 0);
 if (VAR_24->irq < 0)
  return VAR_24->irq;

 VAR_24->chip = VAR_22;
 VAR_24->i2c = (VAR_22->id == VAR_0) ? VAR_22->client : VAR_22->companion;
 VAR_24->dev = &VAR_21->dev;
 FUNC_6(&VAR_21->dev, VAR_24);

 VAR_27 = FUNC_9(&VAR_21->dev, VAR_24->irq, ((void*)0),
     VAR_20, VAR_3, "rtc",
     VAR_24);
 if (VAR_27 < 0) {
  FUNC_3(VAR_22->dev, "Failed to request IRQ: #%d: %d\n",
   VAR_24->irq, VAR_27);
  return VAR_27;
 }


 FUNC_12(VAR_24->i2c, VAR_7, VAR_8);
 FUNC_12(VAR_24->i2c, VAR_9, VAR_10);
 FUNC_12(VAR_24->i2c, VAR_11, VAR_12);
 FUNC_12(VAR_24->i2c, VAR_13, VAR_14);

 VAR_27 = FUNC_14(&VAR_21->dev, &VAR_25);
 if (VAR_27 < 0) {
  FUNC_3(&VAR_21->dev, "Failed to read initial time.\n");
  return VAR_27;
 }
 if ((VAR_25.tm_year < 70) || (VAR_25.tm_year > 138)) {
  VAR_25.tm_year = 70;
  VAR_25.tm_mon = 0;
  VAR_25.tm_mday = 1;
  VAR_25.tm_hour = 0;
  VAR_25.tm_min = 0;
  VAR_25.tm_sec = 0;
  VAR_27 = FUNC_15(&VAR_21->dev, &VAR_25);
  if (VAR_27 < 0) {
   FUNC_3(&VAR_21->dev, "Failed to set initial time.\n");
   return VAR_27;
  }
 }
 FUNC_17(&VAR_25, &VAR_26);
 if (FUNC_13(VAR_21, VAR_24)) {
  if (VAR_23 && VAR_23->sync) {
   VAR_23->sync(VAR_26);
   VAR_24->sync = VAR_23->sync;
  }
 }

 VAR_24->rtc_dev = FUNC_10(&VAR_21->dev, "88pm860x-rtc",
         &VAR_19, VAR_16);
 VAR_27 = FUNC_2(VAR_24->rtc_dev);
 if (FUNC_1(VAR_24->rtc_dev)) {
  FUNC_3(&VAR_21->dev, "Failed to register RTC device: %d\n", VAR_27);
  return VAR_27;
 }





 FUNC_16(VAR_24->i2c, VAR_6, VAR_15, VAR_15);
 FUNC_7(&VAR_21->dev, 1);

 return 0;
}

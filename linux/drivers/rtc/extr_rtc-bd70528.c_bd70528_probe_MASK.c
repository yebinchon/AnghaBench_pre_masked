
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct rtc_time {int dummy; } ;
struct rtc_device {int * ops; int range_max; int range_min; } ;
struct rohm_regmap_dev {int regmap; } ;
struct TYPE_9__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct bd70528_rtc {TYPE_1__* dev; struct rohm_regmap_dev* mfd; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct rtc_device*) ;
 int FUNC_1 (struct rtc_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_1__*,struct rtc_time*) ;
 int VAR_11 ;
 int FUNC_3 (TYPE_1__*,struct rtc_time*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 struct rohm_regmap_dev* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 struct bd70528_rtc* FUNC_8 (TYPE_1__*,int,int ) ;
 int FUNC_9 (TYPE_1__*,int,int *,int *,int ,char*,struct rtc_device*) ;
 struct rtc_device* FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct platform_device*,char*) ;
 int FUNC_12 (struct platform_device*,struct bd70528_rtc*) ;
 int FUNC_13 (int ,int ,unsigned int*) ;
 int FUNC_14 (int ,int ,int ,int ) ;
 int FUNC_15 (struct rtc_device*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_12)
{
 struct bd70528_rtc *VAR_13;
 struct rohm_regmap_dev *VAR_14;
 int VAR_15;
 struct rtc_device *VAR_16;
 int VAR_17;
 unsigned int VAR_18;

 VAR_14 = FUNC_5(VAR_12->dev.parent);
 if (!VAR_14) {
  FUNC_4(&VAR_12->dev, "No MFD driver data\n");
  return -VAR_4;
 }
 VAR_13 = FUNC_8(&VAR_12->dev, sizeof(*VAR_13), VAR_6);
 if (!VAR_13)
  return -VAR_5;

 VAR_13->mfd = VAR_14;
 VAR_13->dev = &VAR_12->dev;

 VAR_17 = FUNC_11(VAR_12, "bd70528-rtc-alm");
 if (VAR_17 < 0)
  return VAR_17;

 FUNC_12(VAR_12, VAR_13);

 VAR_15 = FUNC_13(VAR_14->regmap, VAR_3, &VAR_18);

 if (VAR_15) {
  FUNC_4(&VAR_12->dev, "Failed to reag RTC clock\n");
  return VAR_15;
 }

 if (!(VAR_18 & VAR_1)) {
  struct rtc_time VAR_19;

  VAR_15 = FUNC_2(&VAR_12->dev, &VAR_19);

  if (!VAR_15)
   VAR_15 = FUNC_3(&VAR_12->dev, &VAR_19);

  if (VAR_15) {
   FUNC_4(&VAR_12->dev,
    "Setting 24H clock for RTC failed\n");
   return VAR_15;
  }
 }

 FUNC_6(&VAR_12->dev, 1);
 FUNC_7(&VAR_12->dev);

 VAR_16 = FUNC_10(&VAR_12->dev);
 if (FUNC_0(VAR_16)) {
  FUNC_4(&VAR_12->dev, "RTC device creation failed\n");
  return FUNC_1(VAR_16);
 }

 VAR_16->range_min = VAR_8;
 VAR_16->range_max = VAR_9;
 VAR_16->ops = &VAR_11;


 VAR_15 = FUNC_9(&VAR_12->dev, VAR_17, ((void*)0), &VAR_10,
     VAR_7, "bd70528-rtc", VAR_16);
 if (VAR_15)
  return VAR_15;







 VAR_15 = FUNC_14(VAR_14->regmap,
     VAR_2,
     VAR_0, 0);
 if (VAR_15) {
  FUNC_4(&VAR_12->dev, "Failed to enable RTC interrupts\n");
  return VAR_15;
 }

 return FUNC_15(VAR_16);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_device {int uie_unsupported; unsigned long long range_max; int set_start_time; int start_secs; struct rtc_class_ops* ops; } ;
struct rtc_class_ops {int dummy; } ;
struct platform_device_id {scalar_t__ driver_data; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct rtc_device*) ;
 int FUNC_1 (struct rtc_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int ,int ,int*) ;
 int FUNC_3 (int *,int ,int ,int,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int,int *,int ,int ,char*,struct rtc_device*) ;
 struct rtc_device* FUNC_8 (int *) ;
 struct platform_device_id* FUNC_9 (struct platform_device*) ;
 int FUNC_10 (struct platform_device*,char*) ;
 int FUNC_11 (struct platform_device*,struct rtc_device*) ;
 int FUNC_12 (struct rtc_device*,int *) ;
 int VAR_7 ;
 int FUNC_13 (struct rtc_device*) ;
 int FUNC_14 (int,int) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_8)
{
 const struct platform_device_id *VAR_9 = FUNC_9(VAR_8);
 int VAR_10;
 struct rtc_device *VAR_11;
 u8 VAR_12;
 int VAR_13;

 VAR_13 = FUNC_10(VAR_8, "ALARM");
 if (VAR_13 < 0)
  return VAR_13;


 VAR_10 = FUNC_3(&VAR_8->dev, VAR_0,
  VAR_1, VAR_4, VAR_4);
 if (VAR_10 < 0)
  return VAR_10;


 FUNC_14(1000, 5000);

 VAR_10 = FUNC_2(&VAR_8->dev, VAR_0,
  VAR_1, &VAR_12);
 if (VAR_10 < 0)
  return VAR_10;


 if (!(VAR_12 & VAR_4)) {
  FUNC_4(&VAR_8->dev, "RTC supply failure\n");
  return -VAR_2;
 }

 FUNC_6(&VAR_8->dev, 1);

 VAR_11 = FUNC_8(&VAR_8->dev);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 VAR_11->ops = (struct rtc_class_ops *)VAR_9->driver_data;

 VAR_10 = FUNC_7(&VAR_8->dev, VAR_13, ((void*)0),
   VAR_7, VAR_3,
   "ab8500-rtc", VAR_11);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_5(&VAR_8->dev, VAR_13);
 FUNC_11(VAR_8, VAR_11);

 VAR_11->uie_unsupported = 1;

 VAR_11->range_max = (1ULL << 24) * 60 - 1;
 VAR_11->start_secs = VAR_5;
 VAR_11->set_start_time = 1;

 VAR_10 = FUNC_12(VAR_11, &VAR_6);
 if (VAR_10)
  return VAR_10;

 return FUNC_13(VAR_11);
}

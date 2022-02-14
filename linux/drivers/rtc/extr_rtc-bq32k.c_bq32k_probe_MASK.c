
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct rtc_device {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct device {int of_node; } ;
struct i2c_client {struct device dev; int adapter; } ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct rtc_device*) ;
 int FUNC_1 (struct rtc_device*) ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 int FUNC_2 (struct device*,int*,int ,int) ;
 int VAR_8 ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,int*,int ,int) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,char*) ;
 struct rtc_device* FUNC_7 (struct device*,int ,int *,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct i2c_client*,struct rtc_device*) ;
 int FUNC_10 (struct device*,int ) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_9,
    const struct i2c_device_id *VAR_10)
{
 struct device *VAR_11 = &VAR_9->dev;
 struct rtc_device *VAR_12;
 uint8_t VAR_13;
 int VAR_14;

 if (!FUNC_8(VAR_9->adapter, VAR_5))
  return -VAR_4;


 VAR_14 = FUNC_2(VAR_11, &VAR_13, VAR_2, 1);
 if (!VAR_14 && (VAR_13 & VAR_3)) {
  FUNC_6(VAR_11, "Oscillator was halted. Restarting...\n");
  VAR_13 &= ~VAR_3;
  VAR_14 = FUNC_4(VAR_11, &VAR_13, VAR_2, 1);
 }
 if (VAR_14)
  return VAR_14;


 VAR_14 = FUNC_2(VAR_11, &VAR_13, VAR_0, 1);
 if (VAR_14)
  return VAR_14;
 if (VAR_13 & VAR_1)
  FUNC_6(VAR_11, "Oscillator Failure. Check RTC battery.\n");

 if (VAR_9->dev.of_node)
  FUNC_10(VAR_11, VAR_9->dev.of_node);

 VAR_12 = FUNC_7(&VAR_9->dev, VAR_7.driver.name,
      &VAR_8, VAR_6);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 VAR_14 = FUNC_3(&VAR_9->dev);
 if (VAR_14) {
  FUNC_5(&VAR_9->dev,
   "Unable to create sysfs entries for rtc bq32000\n");
  return VAR_14;
 }


 FUNC_9(VAR_9, VAR_12);

 return 0;
}

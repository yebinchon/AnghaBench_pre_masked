
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtc_device {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int adapter; } ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rtc_device*) ;
 int FUNC_1 (struct rtc_device*) ;
 int VAR_2 ;
 struct rtc_device* FUNC_2 (int *,int ,int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct i2c_client*,struct rtc_device*) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_5(struct i2c_client *VAR_5, const struct i2c_device_id *VAR_6)
{
 struct rtc_device *VAR_7;

 if (!FUNC_3(VAR_5->adapter, VAR_1))
  return -VAR_0;

 VAR_7 = FUNC_2(&VAR_5->dev, VAR_3.driver.name,
     &VAR_4, VAR_2);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 FUNC_4(VAR_5, VAR_7);

 return 0;
}

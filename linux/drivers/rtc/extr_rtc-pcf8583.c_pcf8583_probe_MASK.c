
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcf8583 {int rtc; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int adapter; } ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 struct pcf8583* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int ,int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct i2c_client*,struct pcf8583*) ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_7,
    const struct i2c_device_id *VAR_8)
{
 struct pcf8583 *VAR_9;

 if (!FUNC_3(VAR_7->adapter, VAR_3))
  return -VAR_0;

 VAR_9 = FUNC_1(&VAR_7->dev, sizeof(struct pcf8583),
    VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_4(VAR_7, VAR_9);

 VAR_9->rtc = FUNC_2(&VAR_7->dev,
    VAR_5.driver.name,
    &VAR_6, VAR_4);

 return FUNC_0(VAR_9->rtc);
}

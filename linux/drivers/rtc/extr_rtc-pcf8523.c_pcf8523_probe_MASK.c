
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf8523 {int rtc; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int *,char*,int) ;
 struct pcf8523* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int ,int *,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct i2c_client*,struct pcf8523*) ;
 int FUNC_7 (struct i2c_client*) ;
 int VAR_6 ;
 int FUNC_8 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_7,
    const struct i2c_device_id *VAR_8)
{
 struct pcf8523 *VAR_9;
 int VAR_10;

 if (!FUNC_5(VAR_7->adapter, VAR_4))
  return -VAR_1;

 VAR_9 = FUNC_3(&VAR_7->dev, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_10 = FUNC_7(VAR_7);
 if (VAR_10 < 0)
  FUNC_2(&VAR_7->dev, "failed to set xtal load capacitance: %d",
    VAR_10);

 VAR_10 = FUNC_8(VAR_7, 0);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_9->rtc = FUNC_4(&VAR_7->dev, VAR_0,
           &VAR_6, VAR_5);
 if (FUNC_0(VAR_9->rtc))
  return FUNC_1(VAR_9->rtc);

 FUNC_6(VAR_7, VAR_9);

 return 0;
}

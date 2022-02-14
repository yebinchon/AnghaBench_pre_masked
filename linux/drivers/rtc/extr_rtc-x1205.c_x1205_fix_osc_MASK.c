
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tm ;
struct rtc_time {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct rtc_time*,int ,int) ;
 int FUNC_2 (struct i2c_client*,struct rtc_time*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1)
{
 int VAR_2;
 struct rtc_time VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));

 VAR_2 = FUNC_2(VAR_1, &VAR_3, VAR_0, 0);
 if (VAR_2 < 0)
  FUNC_0(&VAR_1->dev, "unable to restart the oscillator\n");

 return VAR_2;
}

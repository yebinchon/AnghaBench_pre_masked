
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {int dummy; } ;
struct i2c_client {int dev; } ;
struct abx80x_priv {struct rtc_device* rtc; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 struct abx80x_priv* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;
 int FUNC_4 (struct rtc_device*,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_7, void *VAR_8)
{
 struct i2c_client *VAR_9 = VAR_8;
 struct abx80x_priv *VAR_10 = FUNC_1(VAR_9);
 struct rtc_device *VAR_11 = VAR_10->rtc;
 int VAR_12;

 VAR_12 = FUNC_2(VAR_9, VAR_0);
 if (VAR_12 < 0)
  return VAR_4;

 if (VAR_12 & VAR_1)
  FUNC_4(VAR_11, 1, VAR_5 | VAR_6);





 if (VAR_12 & VAR_2)
  FUNC_0(&VAR_9->dev, "watchdog timeout interrupt.\n");

 FUNC_3(VAR_9, VAR_0, 0);

 return VAR_3;
}

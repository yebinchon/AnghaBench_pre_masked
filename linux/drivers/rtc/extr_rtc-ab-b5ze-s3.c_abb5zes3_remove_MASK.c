
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct abb5zes3_rtc_data {scalar_t__ irq; } ;


 struct abb5zes3_rtc_data* FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0)
{
 struct abb5zes3_rtc_data *VAR_1 = FUNC_0(&VAR_0->dev);

 if (VAR_1->irq > 0)
  FUNC_1(&VAR_0->dev, 0);

 return 0;
}

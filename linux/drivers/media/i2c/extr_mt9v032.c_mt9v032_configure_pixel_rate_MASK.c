
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9v032 {int sysclk; int hratio; int pixel_rate; int subdev; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mt9v032 *VAR_0)
{
 struct i2c_client *VAR_1 = FUNC_2(&VAR_0->subdev);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0->pixel_rate,
         VAR_0->sysclk / VAR_0->hratio);
 if (VAR_2 < 0)
  FUNC_0(&VAR_1->dev, "failed to set pixel rate (%d)\n", VAR_2);
}

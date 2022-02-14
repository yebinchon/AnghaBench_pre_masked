
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_client*,int,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(VAR_0, 0x80, 0x01);
 if (VAR_1 < 0) {
  FUNC_1(&VAR_0->dev, "failed default switch on write\n");
  return VAR_1;
 }

 VAR_1 = FUNC_2(VAR_0, 0x81, 0x08);
 if (VAR_1 < 0)
  FUNC_1(&VAR_0->dev, "failed default LUX on write\n");




 FUNC_0(&VAR_0->dev);

 return VAR_1;
}

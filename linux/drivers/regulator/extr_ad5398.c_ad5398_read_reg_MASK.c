
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;


 unsigned short FUNC_0 (unsigned short) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_client*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0, unsigned short *VAR_1)
{
 unsigned short VAR_2;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0, (char *)&VAR_2, 2);
 if (VAR_3 < 0) {
  FUNC_1(&VAR_0->dev, "I2C read error\n");
  return VAR_3;
 }
 *VAR_1 = FUNC_0(VAR_2);

 return VAR_3;
}

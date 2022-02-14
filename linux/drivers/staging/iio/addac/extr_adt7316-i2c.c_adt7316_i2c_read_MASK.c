
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct i2c_client*,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, u8 VAR_1, u8 *VAR_2)
{
 struct i2c_client *VAR_3 = VAR_0;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3, VAR_1);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_3->dev, "I2C fail to select reg\n");
  return VAR_4;
 }

 VAR_4 = FUNC_1(VAR_0);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_3->dev, "I2C read error\n");
  return VAR_4;
 }

 *VAR_2 = VAR_4;

 return 0;
}

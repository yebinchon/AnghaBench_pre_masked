
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct i2c_client *VAR_3 = VAR_0;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);
 if (VAR_4 < 0)
  FUNC_0(&VAR_3->dev, "I2C write error\n");

 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;


 int VAR_0 ;
 unsigned short FUNC_0 (unsigned short const) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_client*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1, const unsigned short VAR_2)
{
 unsigned short VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_2);
 VAR_4 = FUNC_2(VAR_1, (char *)&VAR_3, 2);
 if (VAR_4 != 2) {
  FUNC_1(&VAR_1->dev, "I2C write error\n");
  return VAR_4 < 0 ? VAR_4 : -VAR_0;
 }

 return 0;
}

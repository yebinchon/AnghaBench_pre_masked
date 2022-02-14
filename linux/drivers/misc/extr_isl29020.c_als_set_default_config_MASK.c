
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0, 0x00, 0xc0);
 if (VAR_1 < 0) {
  FUNC_0(&VAR_0->dev, "default write failed.");
  return VAR_1;
 }
 return 0;
}

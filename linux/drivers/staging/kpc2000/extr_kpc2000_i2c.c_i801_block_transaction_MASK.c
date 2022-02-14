
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union i2c_smbus_data {int* block; } ;
struct TYPE_2__ {int dev; } ;
struct i2c_device {int features; TYPE_1__ adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_device*,union i2c_smbus_data*,char,int) ;
 int FUNC_2 (struct i2c_device*,union i2c_smbus_data*,char,int,int) ;
 scalar_t__ FUNC_3 (struct i2c_device*) ;
 int FUNC_4 (struct i2c_device*) ;

__attribute__((used)) static int FUNC_5(struct i2c_device *VAR_6, union i2c_smbus_data *VAR_7, char VAR_8, int VAR_9, int VAR_10)
{
 int VAR_11 = 0;


 if (VAR_9 == VAR_4) {
  if (VAR_8 == VAR_5) {




  } else if (!(VAR_6->features & VAR_2)) {
   FUNC_0(&VAR_6->adapter.dev, "I2C block read is unsupported!\n");
   return -VAR_0;
  }
 }

 if (VAR_8 == VAR_5 || VAR_9 == VAR_4) {
  if (VAR_7->block[0] < 1)
   VAR_7->block[0] = 1;
  if (VAR_7->block[0] > VAR_3)
   VAR_7->block[0] = VAR_3;
 } else {
  VAR_7->block[0] = 32;
 }





 if ((VAR_6->features & VAR_1) && VAR_9 != VAR_4 && FUNC_3(VAR_6) == 0)
  VAR_11 = FUNC_1(VAR_6, VAR_7, VAR_8, VAR_10);
 else
  VAR_11 = FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
 if (VAR_11 == 0 && VAR_10)
  FUNC_4(VAR_6);
 if (VAR_9 == VAR_4 && VAR_8 == VAR_5) {



 }
 return VAR_11;
}

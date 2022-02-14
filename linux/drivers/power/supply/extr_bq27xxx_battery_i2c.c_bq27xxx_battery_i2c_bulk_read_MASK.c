
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int adapter; } ;
struct bq27xxx_device_info {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int ,int,int *) ;
 struct i2c_client* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct bq27xxx_device_info *VAR_2, u8 VAR_3,
      u8 *VAR_4, int VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_1(VAR_2->dev);
 int VAR_7;

 if (!VAR_6->adapter)
  return -VAR_1;

 VAR_7 = FUNC_0(VAR_6, VAR_3, VAR_5, VAR_4);
 if (VAR_7 < 0)
  return VAR_7;
 if (VAR_7 != VAR_5)
  return -VAR_0;
 return 0;
}

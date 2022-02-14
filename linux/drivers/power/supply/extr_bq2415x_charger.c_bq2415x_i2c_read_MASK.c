
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int u8 ;
struct i2c_msg {int* buf; int len; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
struct bq2415x_device {int dev; } ;
typedef int reg ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct i2c_msg*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct i2c_client* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct bq2415x_device *VAR_3, u8 VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_4(VAR_3->dev);
 struct i2c_msg VAR_6[2];
 u8 VAR_7;
 int VAR_8;

 if (!VAR_5->adapter)
  return -VAR_0;

 VAR_6[0].addr = VAR_5->addr;
 VAR_6[0].flags = 0;
 VAR_6[0].buf = &VAR_4;
 VAR_6[0].len = sizeof(VAR_4);
 VAR_6[1].addr = VAR_5->addr;
 VAR_6[1].flags = VAR_1;
 VAR_6[1].buf = &VAR_7;
 VAR_6[1].len = sizeof(VAR_7);

 FUNC_2(&VAR_2);
 VAR_8 = FUNC_1(VAR_5->adapter, VAR_6, FUNC_0(VAR_6));
 FUNC_3(&VAR_2);

 if (VAR_8 < 0)
  return VAR_8;

 return VAR_7;
}

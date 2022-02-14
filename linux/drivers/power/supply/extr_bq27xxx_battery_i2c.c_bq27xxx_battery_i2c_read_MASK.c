
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int* buf; int len; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
struct bq27xxx_device_info {int dev; } ;
typedef int reg ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int ,struct i2c_msg*,int ) ;
 struct i2c_client* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct bq27xxx_device_info *VAR_2, u8 VAR_3,
        bool VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_3(VAR_2->dev);
 struct i2c_msg VAR_6[2];
 u8 VAR_7[2];
 int VAR_8;

 if (!VAR_5->adapter)
  return -VAR_0;

 VAR_6[0].addr = VAR_5->addr;
 VAR_6[0].flags = 0;
 VAR_6[0].buf = &VAR_3;
 VAR_6[0].len = sizeof(VAR_3);
 VAR_6[1].addr = VAR_5->addr;
 VAR_6[1].flags = VAR_1;
 VAR_6[1].buf = VAR_7;
 if (VAR_4)
  VAR_6[1].len = 1;
 else
  VAR_6[1].len = 2;

 VAR_8 = FUNC_2(VAR_5->adapter, VAR_6, FUNC_0(VAR_6));
 if (VAR_8 < 0)
  return VAR_8;

 if (!VAR_4)
  VAR_8 = FUNC_1(VAR_7);
 else
  VAR_8 = VAR_7[0];

 return VAR_8;
}

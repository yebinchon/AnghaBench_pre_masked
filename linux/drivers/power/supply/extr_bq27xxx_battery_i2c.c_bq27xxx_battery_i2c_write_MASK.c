
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct i2c_msg {int len; scalar_t__ flags; int addr; scalar_t__* buf; } ;
struct i2c_client {int adapter; int addr; } ;
struct bq27xxx_device_info {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (int,scalar_t__*) ;
 struct i2c_client* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct bq27xxx_device_info *VAR_2, u8 VAR_3,
         int VAR_4, bool VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_2(VAR_2->dev);
 struct i2c_msg VAR_7;
 u8 VAR_8[4];
 int VAR_9;

 if (!VAR_6->adapter)
  return -VAR_1;

 VAR_8[0] = VAR_3;
 if (VAR_5) {
  VAR_8[1] = (u8) VAR_4;
  VAR_7.len = 2;
 } else {
  FUNC_1(VAR_4, &VAR_8[1]);
  VAR_7.len = 3;
 }

 VAR_7.buf = VAR_8;
 VAR_7.addr = VAR_6->addr;
 VAR_7.flags = 0;

 VAR_9 = FUNC_0(VAR_6->adapter, &VAR_7, 1);
 if (VAR_9 < 0)
  return VAR_9;
 if (VAR_9 != 1)
  return -VAR_0;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int len; struct i2c_msg* buf; scalar_t__ flags; int addr; } ;
typedef struct i2c_msg u8 ;
struct i2c_client {int adapter; int addr; } ;
struct bq2415x_device {int dev; } ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct i2c_msg*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct i2c_client* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct bq2415x_device *VAR_2, u8 VAR_3, u8 VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_4(VAR_2->dev);
 struct i2c_msg VAR_6[1];
 u8 VAR_7[2];
 int VAR_8;

 VAR_7[0] = VAR_3;
 VAR_7[1] = VAR_4;

 VAR_6[0].addr = VAR_5->addr;
 VAR_6[0].flags = 0;
 VAR_6[0].buf = VAR_7;
 VAR_6[0].len = FUNC_0(VAR_7);

 FUNC_2(&VAR_1);
 VAR_8 = FUNC_1(VAR_5->adapter, VAR_6, FUNC_0(VAR_6));
 FUNC_3(&VAR_1);


 if (VAR_8 < 0)
  return VAR_8;
 else if (VAR_8 != 1)
  return -VAR_0;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps6507x_dev {struct i2c_client* i2c_client; } ;
struct i2c_msg {int len; char* buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct tps6507x_dev *VAR_2, char VAR_3,
      int VAR_4, void *VAR_5)
{
 struct i2c_client *VAR_6 = VAR_2->i2c_client;
 struct i2c_msg VAR_7[2];
 int VAR_8;


 VAR_7[0].addr = VAR_6->addr;
 VAR_7[0].flags = 0;
 VAR_7[0].len = 1;
 VAR_7[0].buf = &VAR_3;


 VAR_7[1].addr = VAR_6->addr;
 VAR_7[1].flags = VAR_1;
 VAR_7[1].len = VAR_4;
 VAR_7[1].buf = VAR_5;

 VAR_8 = FUNC_0(VAR_6->adapter, VAR_7, 2);
 if (VAR_8 == 2)
  VAR_8 = 0;
 else if (VAR_8 >= 0)
  VAR_8 = -VAR_0;

 return VAR_8;
}

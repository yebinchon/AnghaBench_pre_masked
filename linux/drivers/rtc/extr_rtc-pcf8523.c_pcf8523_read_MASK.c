
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int u8 ;
struct i2c_msg {int len; int * buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
typedef int reg ;


 int FUNC_0 (struct i2c_msg*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,struct i2c_msg*,int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1, u8 VAR_2, u8 *VAR_3)
{
 struct i2c_msg VAR_4[2];
 u8 VAR_5 = 0;
 int VAR_6;

 VAR_4[0].addr = VAR_1->addr;
 VAR_4[0].flags = 0;
 VAR_4[0].len = sizeof(VAR_2);
 VAR_4[0].buf = &VAR_2;

 VAR_4[1].addr = VAR_1->addr;
 VAR_4[1].flags = VAR_0;
 VAR_4[1].len = sizeof(VAR_5);
 VAR_4[1].buf = &VAR_5;

 VAR_6 = FUNC_1(VAR_1->adapter, VAR_4, FUNC_0(VAR_4));
 if (VAR_6 < 0)
  return VAR_6;

 *VAR_3 = VAR_5;

 return 0;
}

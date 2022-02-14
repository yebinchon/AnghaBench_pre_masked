
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int addr; int len; int* buf; scalar_t__ flags; } ;
struct av7110 {int i2c_adap; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;

u8 FUNC_1(struct av7110 *VAR_1, u8 VAR_2, u8 VAR_3)
{
 u8 VAR_4[] = {0x00};
 u8 VAR_5[] = {0x00};
 struct i2c_msg VAR_6[2];

 VAR_6[0].flags = 0;
 VAR_6[1].flags = VAR_0;
 VAR_6[0].addr = VAR_6[1].addr = VAR_2 / 2;
 VAR_4[0] = VAR_3;
 VAR_6[0].len = 1; VAR_6[1].len = 1;
 VAR_6[0].buf = VAR_4; VAR_6[1].buf = VAR_5;
 FUNC_0(&VAR_1->i2c_adap, VAR_6, 2);

 return VAR_5[0];
}

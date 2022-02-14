
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct solo_dev {int * i2c_adap; } ;
struct i2c_msg {int len; int * buf; int addr; scalar_t__ flags; } ;


 int FUNC_0 (int *,struct i2c_msg*,int) ;

void FUNC_1(struct solo_dev *VAR_0, int VAR_1, u8 VAR_2,
   u8 VAR_3, u8 VAR_4)
{
 struct i2c_msg VAR_5;
 u8 VAR_6[2];

 VAR_6[0] = VAR_3;
 VAR_6[1] = VAR_4;
 VAR_5.flags = 0;
 VAR_5.addr = VAR_2;
 VAR_5.len = 2;
 VAR_5.buf = VAR_6;

 FUNC_0(&VAR_0->i2c_adap[VAR_1], &VAR_5, 1);
}

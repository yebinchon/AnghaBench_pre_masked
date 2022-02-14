
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct solo_dev {int * i2c_adap; } ;
struct i2c_msg {int len; void** buf; void* addr; scalar_t__ flags; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;

u8 FUNC_1(struct solo_dev *VAR_1, int VAR_2, u8 VAR_3, u8 VAR_4)
{
 struct i2c_msg VAR_5[2];
 u8 VAR_6;

 VAR_5[0].flags = 0;
 VAR_5[0].addr = VAR_3;
 VAR_5[0].len = 1;
 VAR_5[0].buf = &VAR_4;

 VAR_5[1].flags = VAR_0;
 VAR_5[1].addr = VAR_3;
 VAR_5[1].len = 1;
 VAR_5[1].buf = &VAR_6;

 FUNC_0(&VAR_1->i2c_adap[VAR_2], VAR_5, 2);

 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int addr; int len; int * buf; int flags; } ;
struct cx23885_dev {TYPE_1__* i2c_bus; } ;
struct TYPE_2__ {int i2c_adap; } ;


 int FUNC_0 (int *,struct i2c_msg*,int) ;

int FUNC_1(struct cx23885_dev *VAR_0, u8 VAR_1, u8 VAR_2)
{

 u8 VAR_3[] = { VAR_1, VAR_2 };

 struct i2c_msg VAR_4 = { .addr = 0x98 >> 1,
  .flags = 0, .buf = VAR_3, .len = 2 };

 return FUNC_0(&VAR_0->i2c_bus[2].i2c_adap, &VAR_4, 1);
}

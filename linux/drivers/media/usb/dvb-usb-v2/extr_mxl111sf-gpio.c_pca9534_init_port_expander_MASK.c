
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mxl111sf_state {TYPE_1__* d; } ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;
struct TYPE_2__ {int i2c_adap; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct mxl111sf_state *VAR_1)
{
 u8 VAR_2[2] = { 1, 0x07 };

 struct i2c_msg VAR_3 = {
  .addr = VAR_0,
  .flags = 0, .buf = VAR_2, .len = 2
 };

 FUNC_1("()");

 FUNC_0(&VAR_1->d->i2c_adap, &VAR_3, 1);


 VAR_2[0] = 3;
 VAR_2[1] = 0;

 FUNC_0(&VAR_1->d->i2c_adap, &VAR_3, 1);

 return 0;
}

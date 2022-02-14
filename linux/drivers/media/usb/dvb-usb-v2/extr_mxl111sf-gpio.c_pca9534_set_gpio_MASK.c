
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
 int VAR_1 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 int FUNC_1 (char*,int,int) ;

__attribute__((used)) static int FUNC_2(struct mxl111sf_state *VAR_2, int VAR_3, int VAR_4)
{
 u8 VAR_5[2] = { 1, 0 };
 u8 VAR_6 = 0;
 struct i2c_msg VAR_7[] = {
  { .addr = VAR_1,
    .flags = 0, .buf = VAR_5, .len = 1 },
  { .addr = VAR_1,
    .flags = VAR_0, .buf = &VAR_6, .len = 1 },
 };

 FUNC_1("(%d, %d)", VAR_3, VAR_4);


 FUNC_0(&VAR_2->d->i2c_adap, VAR_7, 2);


 VAR_7[0].len = 2;



 VAR_5[1] = VAR_6;


 VAR_5[1] &= ~(1 << VAR_3);


 VAR_5[1] |= ((VAR_4 ? 1 : 0) << VAR_3);


 FUNC_0(&VAR_2->d->i2c_adap, &VAR_7[0], 1);

 return 0;
}

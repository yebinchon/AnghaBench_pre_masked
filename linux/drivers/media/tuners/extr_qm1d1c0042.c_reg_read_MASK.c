
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qm1d1c0042_state {TYPE_1__* i2c; } ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct TYPE_2__ {int adapter; int addr; } ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct qm1d1c0042_state *VAR_2, u8 VAR_3, u8 *VAR_4)
{
 struct i2c_msg VAR_5[2] = {
  {
   .addr = VAR_2->i2c->addr,
   .flags = 0,
   .buf = &VAR_3,
   .len = 1,
  },
  {
   .addr = VAR_2->i2c->addr,
   .flags = VAR_1,
   .buf = VAR_4,
   .len = 1,
  },
 };
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2->i2c->adapter, VAR_5, FUNC_0(VAR_5));
 if (VAR_6 >= 0 && VAR_6 < FUNC_0(VAR_5))
  VAR_6 = -VAR_0;
 return (VAR_6 == FUNC_0(VAR_5)) ? 0 : VAR_6;
}

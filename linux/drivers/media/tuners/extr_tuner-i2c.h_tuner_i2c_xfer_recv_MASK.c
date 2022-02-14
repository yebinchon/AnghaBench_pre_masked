
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuner_i2c_props {int adap; int addr; } ;
struct i2c_msg {unsigned char* buf; int len; int flags; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static inline int FUNC_1(struct tuner_i2c_props *VAR_1,
          unsigned char *VAR_2, int VAR_3)
{
 struct i2c_msg VAR_4 = { .addr = VAR_1->addr, .flags = VAR_0,
          .buf = VAR_2, .len = VAR_3 };
 int VAR_5 = FUNC_0(VAR_1->adap, &VAR_4, 1);

 return (VAR_5 == 1) ? VAR_3 : VAR_5;
}

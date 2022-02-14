
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_msg {int len; unsigned char* buf; int flags; int addr; } ;
struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
struct i2c_adapter {TYPE_1__* algo; } ;
struct TYPE_2__ {int (* master_xfer ) (struct i2c_adapter*,struct i2c_msg*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,unsigned char*,int) ;
 int FUNC_1 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_3, int VAR_4,
         int VAR_5, void *VAR_6)
{
 unsigned char VAR_7[VAR_2 + 3];
 unsigned char VAR_8[VAR_2 + 2];
 struct i2c_adapter *VAR_9 = VAR_3->adapter;
 struct i2c_msg VAR_10[2] = {
     {
      .addr = VAR_3->addr,
      .flags = 0,
      .len = 1,
      .buf = VAR_7
     },
     { .addr = VAR_3->addr,
      .flags = VAR_1,
      .len = 0,
      .buf = VAR_8
     },
    };
 int VAR_11 = 1, VAR_12 = 0;

 if (VAR_6 == ((void*)0))
  return -VAR_0;
 VAR_7[0] = (unsigned char)VAR_4;
 VAR_10[1].len = VAR_5;


 if (VAR_5 > 0)
  VAR_11 = 2;
 VAR_12 = VAR_9->algo->master_xfer(VAR_9, VAR_10, VAR_11);
 FUNC_0(VAR_6, VAR_8, VAR_5);
 if (VAR_12 < 0)
  return VAR_12;
 return 0;
}

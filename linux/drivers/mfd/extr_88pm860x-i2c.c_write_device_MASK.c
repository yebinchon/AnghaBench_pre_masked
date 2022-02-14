
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_msg {int len; unsigned char* buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
struct i2c_adapter {TYPE_1__* algo; } ;
struct TYPE_2__ {int (* master_xfer ) (struct i2c_adapter*,struct i2c_msg*,int) ;} ;


 int FUNC_0 (unsigned char*,void*,int) ;
 int FUNC_1 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0, int VAR_1,
   int VAR_2, void *VAR_3)
{
 unsigned char VAR_4[2];
 struct i2c_adapter *VAR_5 = VAR_0->adapter;
 struct i2c_msg VAR_6;
 int VAR_7;

 VAR_4[0] = (unsigned char)VAR_1;
 FUNC_0(&VAR_4[1], VAR_3, VAR_2);
 VAR_6.addr = VAR_0->addr;
 VAR_6.flags = 0;
 VAR_6.len = VAR_2 + 1;
 VAR_6.buf = VAR_4;

 VAR_7 = VAR_5->algo->master_xfer(VAR_5, &VAR_6, 1);
 if (VAR_7 < 0)
  return VAR_7;
 return 0;
}

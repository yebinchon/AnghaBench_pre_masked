
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct reg_val {int dummy; } ;
struct pt3_adapter {TYPE_1__* i2c_demod; } ;
struct i2c_msg {int len; int * buf; scalar_t__ flags; int addr; } ;
struct TYPE_2__ {int adapter; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int
FUNC_1(struct pt3_adapter *VAR_1, const struct reg_val *VAR_2, int VAR_3)
{
 struct i2c_msg VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = 0;
 VAR_4.addr = VAR_1->i2c_demod->addr;
 VAR_4.flags = 0;
 VAR_4.len = 2;
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4.buf = (u8 *)&VAR_2[VAR_5];
  VAR_6 = FUNC_0(VAR_1->i2c_demod->adapter, &VAR_4, 1);
  if (VAR_6 == 0)
   VAR_6 = -VAR_0;
  if (VAR_6 < 0)
   return VAR_6;
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct i2c_msg {size_t addr; int len; size_t* buf; scalar_t__ flags; } ;
struct TYPE_2__ {int adapter; int is_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 TYPE_1__* VAR_2 ;

int FUNC_1(u8 VAR_3, u8 VAR_4, u8 VAR_5, u8 VAR_6)
{
 int VAR_7;
 u8 VAR_8[2] = { VAR_5, VAR_6 };
 struct i2c_msg VAR_9;

 if (!VAR_2[VAR_3].is_active)
  return -VAR_1;
 VAR_9.flags = 0;
 VAR_9.addr = VAR_4 / 2;
 VAR_9.len = 2;
 VAR_9.buf = VAR_8;
 VAR_7 = FUNC_0(&VAR_2[VAR_3].adapter, &VAR_9, 1);
 if (VAR_7 == 1)
  VAR_7 = 0;
 else if (VAR_7 >= 0)
  VAR_7 = -VAR_0;

 return VAR_7;
}

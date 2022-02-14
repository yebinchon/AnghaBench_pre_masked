
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int addr; int len; int* buf; scalar_t__ flags; } ;
struct TYPE_2__ {int adapter; int is_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 TYPE_1__* VAR_3 ;

int FUNC_1(u8 VAR_4, u8 VAR_5, u8 VAR_6, u8 *VAR_7)
{
 int VAR_8;
 u8 VAR_9[] = {0x00};
 struct i2c_msg VAR_10[2];

 if (!VAR_3[VAR_4].is_active)
  return -VAR_1;
 *VAR_7 = 0;
 VAR_10[0].flags = 0;
 VAR_10[1].flags = VAR_2;
 VAR_10[0].addr = VAR_10[1].addr = VAR_5 / 2;
 VAR_9[0] = VAR_6;
 VAR_10[0].len = 1; VAR_10[1].len = 1;
 VAR_10[0].buf = VAR_9; VAR_10[1].buf = VAR_7;
 VAR_8 = FUNC_0(&VAR_3[VAR_4].adapter, VAR_10, 2);
 if (VAR_8 == 2)
  VAR_8 = 0;
 else if (VAR_8 >= 0)
  VAR_8 = -VAR_0;

 return VAR_8;
}

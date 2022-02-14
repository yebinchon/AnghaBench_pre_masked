
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int,int) ;

void FUNC_1(struct i2c_client *VAR_0, int VAR_1, int VAR_2)
{
 FUNC_0(VAR_0, 0x0093, VAR_1 & 0xfff);
 FUNC_0(VAR_0, 0x009b, VAR_1 >> 12);
 FUNC_0(VAR_0, 0x00a3, VAR_2 & 0xfff);
 FUNC_0(VAR_0, 0x00ab, VAR_2 >> 12);
 FUNC_0(VAR_0, 0x0056, 0);
}

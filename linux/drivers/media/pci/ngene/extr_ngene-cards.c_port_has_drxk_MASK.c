
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_adapter {int dummy; } ;


 scalar_t__ FUNC_0 (struct i2c_adapter*,int,int *) ;

__attribute__((used)) static int FUNC_1(struct i2c_adapter *VAR_0, int VAR_1)
{
 u8 VAR_2;

 if (FUNC_0(VAR_0, 0x29+VAR_1, &VAR_2) < 0)
  return 0;
 return 1;
}

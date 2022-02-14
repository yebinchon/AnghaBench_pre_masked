
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_adapter {int dummy; } ;


 scalar_t__ FUNC_0 (struct i2c_adapter*,int,int,int*) ;

__attribute__((used)) static int FUNC_1(struct i2c_adapter *VAR_0)
{
 u8 VAR_1;

 if (FUNC_0(VAR_0, 0x1e, 0xf000, &VAR_1) < 0)
  return 0;
 if (VAR_1 != 0x60)
  return 0;
 if (FUNC_0(VAR_0, 0x1f, 0xf000, &VAR_1) < 0)
  return 0;
 if (VAR_1 != 0x60)
  return 0;
 return 1;
}

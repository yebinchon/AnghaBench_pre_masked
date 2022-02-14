
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_adapter {int dummy; } ;


 int FUNC_0 (struct i2c_adapter*,int,int,int*) ;

__attribute__((used)) static int FUNC_1(struct i2c_adapter *VAR_0, u16 VAR_1, u16 VAR_2)
{
 int VAR_3;
 u8 VAR_4[2];

 VAR_4[0] = VAR_2 >> 8;
 VAR_4[1] = VAR_2 & 0xff;
 VAR_3 = FUNC_0(VAR_0, VAR_1, 2, VAR_4);
 if (VAR_3)
  return VAR_3;
 return 0;
}

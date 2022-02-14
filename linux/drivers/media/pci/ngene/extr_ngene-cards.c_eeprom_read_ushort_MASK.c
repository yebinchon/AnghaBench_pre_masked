
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_adapter*,int,int,int*,int*) ;

__attribute__((used)) static int FUNC_1(struct i2c_adapter *VAR_1, u16 VAR_2, u16 *VAR_3)
{
 int VAR_4;
 u8 VAR_5[2];
 u32 VAR_6 = 0;

 VAR_4 = FUNC_0(VAR_1, VAR_2, 2, VAR_5, &VAR_6);
 if (VAR_4)
  return VAR_4;
 if (VAR_6 != 2)
  return -VAR_0;

 *VAR_3 = (VAR_5[0] << 8) | VAR_5[1];
 return 0;
}

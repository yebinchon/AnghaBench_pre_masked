
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct i2c_adapter*,int,int*,int,int*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_adapter *VAR_3, u8 *VAR_4, u8 *VAR_5)
{
 u8 VAR_6[1] = { 0x00 }, VAR_7[4];
 u8 VAR_8 = 0x10;

 *VAR_4 = VAR_2;

 if (FUNC_0(VAR_3, VAR_8, VAR_6, 1, VAR_7, 4))
  return 0;
 if (VAR_7[0] == 'D' && VAR_7[1] == 'F') {
  *VAR_5 = VAR_7[2];
  *VAR_4 = VAR_1;
  return 1;
 }
 if (VAR_7[0] == 'C' && VAR_7[1] == 'I') {
  *VAR_5 = VAR_7[2];
  *VAR_4 = VAR_0;
  return 1;
 }
 return 0;
}

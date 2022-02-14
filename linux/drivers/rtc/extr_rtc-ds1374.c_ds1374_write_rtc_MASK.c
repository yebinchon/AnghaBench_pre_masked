
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct i2c_client*,int,int,int*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1, u32 VAR_2,
       int VAR_3, int VAR_4)
{
 u8 VAR_5[4];
 int VAR_6;

 if (VAR_4 > 4) {
  FUNC_0(1);
  return -VAR_0;
 }

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_5[VAR_6] = VAR_2 & 0xff;
  VAR_2 >>= 8;
 }

 return FUNC_1(VAR_1, VAR_3, VAR_4, VAR_5);
}

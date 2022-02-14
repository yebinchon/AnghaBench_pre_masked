
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct i2c_client {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct i2c_client*,int*,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_2, u16 VAR_3,
       u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6, VAR_7;
 u8 VAR_8[6];
 u8 *VAR_9;
 __be32 VAR_10;

 if (VAR_4 > 4)
  return -VAR_0;

 VAR_8[0] = VAR_3 >> 8;
 VAR_8[1] = VAR_3 & 0xff;

 VAR_10 = FUNC_0(VAR_5);
 VAR_9 = (u8 *)&VAR_10;
 VAR_7 = 2;
 VAR_6 = 4 - VAR_4;

 while (VAR_6 < 4)
  VAR_8[VAR_7++] = VAR_9[VAR_6++];

 if (FUNC_1(VAR_2, VAR_8, VAR_4 + 2) != VAR_4 + 2)
  return -VAR_1;

 return 0;
}

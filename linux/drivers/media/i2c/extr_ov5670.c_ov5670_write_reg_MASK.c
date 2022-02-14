
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ov5670 {int sd; } ;
struct i2c_client {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct i2c_client*,int*,unsigned int) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ov5670 *VAR_2, u16 VAR_3, unsigned int VAR_4,
       u32 VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_2(&VAR_2->sd);
 int VAR_7;
 int VAR_8;
 u8 VAR_9[6];
 u8 *VAR_10;
 __be32 VAR_11;

 if (VAR_4 > 4)
  return -VAR_0;

 VAR_9[0] = VAR_3 >> 8;
 VAR_9[1] = VAR_3 & 0xff;

 VAR_11 = FUNC_0(VAR_5);
 VAR_10 = (u8 *)&VAR_11;
 VAR_7 = 2;
 VAR_8 = 4 - VAR_4;

 while (VAR_8 < 4)
  VAR_9[VAR_7++] = VAR_10[VAR_8++];

 if (FUNC_1(VAR_6, VAR_9, VAR_4 + 2) != VAR_4 + 2)
  return -VAR_1;

 return 0;
}

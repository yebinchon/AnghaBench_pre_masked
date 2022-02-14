
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct imx319 {int sd; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int *,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int,int *) ;
 struct i2c_client* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct imx319 *VAR_2, u16 VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_3(&VAR_2->sd);
 u8 VAR_7[6];

 if (VAR_4 > 4)
  return -VAR_0;

 FUNC_1(VAR_3, VAR_7);
 FUNC_2(VAR_5 << (8 * (4 - VAR_4)), VAR_7 + 2);
 if (FUNC_0(VAR_6, VAR_7, VAR_4 + 2) != VAR_4 + 2)
  return -VAR_1;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct i2c_client *VAR_1, u32 VAR_2,
           u32 *VAR_3)
{
 if (VAR_2 <= 40)
  *VAR_3 = VAR_2 / 10;
 else if (VAR_2 >= 60 && VAR_2 <= 70)
  *VAR_3 = VAR_2 / 10 - 1;
 else
  return -VAR_0;

 return 0;
}

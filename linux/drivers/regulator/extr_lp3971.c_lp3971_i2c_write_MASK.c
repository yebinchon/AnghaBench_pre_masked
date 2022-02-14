
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,char,int const) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_1, char VAR_2, int VAR_3,
 const u16 *VAR_4)
{
 if (VAR_3 != 1)
  return -VAR_0;
 return FUNC_0(VAR_1, VAR_2, *VAR_4);
}

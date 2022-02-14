
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int const*,int) ;
 int FUNC_1 (struct i2c_client*,char*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1, const u8 *VAR_2, int VAR_3)
{
 if (FUNC_0(VAR_1, VAR_2, VAR_3) < VAR_3) {
  FUNC_1(VAR_1, "firmware load i2c failure\n");
  return -VAR_0;
 }

 return 0;
}

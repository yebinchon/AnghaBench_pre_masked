
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int const*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_1, const u8 *VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_4 == VAR_3)
  return 0;
 return VAR_4 > 0 ? -VAR_0 : VAR_4;
}

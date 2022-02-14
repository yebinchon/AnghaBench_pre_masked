
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct i2c_client*,int const) ;
 struct i2c_client* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, const void *VAR_1, size_t VAR_2,
       void *VAR_3, size_t VAR_4)
{
 int VAR_5;
 struct device *VAR_6 = VAR_0;
 struct i2c_client *VAR_7 = FUNC_2(VAR_6);

 FUNC_0(VAR_2 != 1 || VAR_4 != 2);

 VAR_5 = FUNC_1(VAR_7, *(u8 const *)VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 *(u16 *)VAR_3 = VAR_5;
 return 0;
}

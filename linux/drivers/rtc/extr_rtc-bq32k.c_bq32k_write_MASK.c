
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct i2c_client*,scalar_t__*,scalar_t__) ;
 int FUNC_1 (scalar_t__*,void*,scalar_t__) ;
 struct i2c_client* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, void *VAR_3, uint8_t VAR_4, uint8_t VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_2(VAR_2);
 uint8_t VAR_7[VAR_1 + 1];

 VAR_7[0] = VAR_4;
 FUNC_1(&VAR_7[1], VAR_3, VAR_5);

 if (FUNC_0(VAR_6, VAR_7, VAR_5 + 1) == VAR_5 + 1)
  return 0;

 return -VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct isl29003_data {int* reg_cache; } ;
struct i2c_client {int dummy; } ;


 struct isl29003_data* FUNC_0 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_0,
          u32 VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct isl29003_data *VAR_4 = FUNC_0(VAR_0);

 return (VAR_4->reg_cache[VAR_1] & VAR_2) >> VAR_3;
}

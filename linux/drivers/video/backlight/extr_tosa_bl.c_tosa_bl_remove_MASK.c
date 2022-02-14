
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tosa_bl_data {int * bl; } ;
struct i2c_client {int dummy; } ;


 struct tosa_bl_data* FUNC_0 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_0)
{
 struct tosa_bl_data *VAR_1 = FUNC_0(VAR_0);

 VAR_1->bl = ((void*)0);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct hdm_i2c {int most_iface; } ;


 struct hdm_i2c* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct hdm_i2c*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 struct hdm_i2c *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(&VAR_1->most_iface);
 FUNC_1(VAR_1);

 return 0;
}

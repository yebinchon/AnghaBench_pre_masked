
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ziirave_wdt_data {int wdd; } ;
struct i2c_client {int dummy; } ;


 struct ziirave_wdt_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0)
{
 struct ziirave_wdt_data *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->wdd);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max17040_chip {int online; TYPE_1__* pdata; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int (* battery_online ) () ;} ;


 struct max17040_chip* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct i2c_client *VAR_0)
{
 struct max17040_chip *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->pdata && VAR_1->pdata->battery_online)
  VAR_1->online = VAR_1->pdata->battery_online();
 else
  VAR_1->online = 1;
}

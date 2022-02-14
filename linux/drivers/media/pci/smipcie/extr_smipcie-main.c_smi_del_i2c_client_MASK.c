
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* driver; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct TYPE_3__ {int owner; } ;


 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct i2c_client *VAR_0)
{
 FUNC_1(VAR_0->dev.driver->owner);
 FUNC_0(VAR_0);
}

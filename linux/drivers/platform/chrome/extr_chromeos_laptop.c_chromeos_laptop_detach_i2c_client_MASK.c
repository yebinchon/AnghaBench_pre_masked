
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_peripheral {struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int num_i2c_peripherals; struct i2c_peripheral* i2c_peripherals; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct i2c_client *VAR_1)
{
 struct i2c_peripheral *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_i2c_peripherals; VAR_3++) {
  VAR_2 = &VAR_0->i2c_peripherals[VAR_3];

  if (VAR_2->client == VAR_1)
   VAR_2->client = ((void*)0);
 }
}

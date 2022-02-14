
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smiapp_sensor {TYPE_1__* src; } ;
struct i2c_client {int dev; } ;
struct TYPE_2__ {int sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct smiapp_sensor*) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct smiapp_sensor *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_2(&VAR_2->src->sd);

 FUNC_0(&VAR_3->dev, &VAR_1);
 FUNC_0(&VAR_3->dev, &VAR_0);

 FUNC_1(VAR_2);
}

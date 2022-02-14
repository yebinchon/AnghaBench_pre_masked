
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct als_data {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int) ;
 struct als_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct als_data*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_1)
{
 struct als_data *VAR_2 = FUNC_1(VAR_1);

 FUNC_4(&VAR_1->dev);

 FUNC_0(VAR_1, 0);
 FUNC_7(&VAR_1->dev.kobj, &VAR_0);

 FUNC_3(&VAR_1->dev);
 FUNC_6(&VAR_1->dev);
 FUNC_5(&VAR_1->dev);

 FUNC_2(VAR_2);
 return 0;
}

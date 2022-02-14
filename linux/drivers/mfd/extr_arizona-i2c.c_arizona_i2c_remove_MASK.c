
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct arizona {int dummy; } ;


 int FUNC_0 (struct arizona*) ;
 struct arizona* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0)
{
 struct arizona *VAR_1 = FUNC_1(&VAR_0->dev);

 FUNC_0(VAR_1);

 return 0;
}

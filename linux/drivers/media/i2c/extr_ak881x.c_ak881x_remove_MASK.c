
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct ak881x {int subdev; } ;


 struct ak881x* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0)
{
 struct ak881x *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->subdev);

 return 0;
}

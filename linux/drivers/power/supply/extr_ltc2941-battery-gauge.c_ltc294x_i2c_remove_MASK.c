
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc294x_info {int supply; int work; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int *) ;
 struct ltc294x_info* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 struct ltc294x_info *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->work);
 FUNC_2(VAR_1->supply);
 return 0;
}

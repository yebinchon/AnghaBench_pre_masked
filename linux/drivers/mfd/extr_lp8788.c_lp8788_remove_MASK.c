
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp8788 {int dev; } ;
struct i2c_client {int dummy; } ;


 struct lp8788* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct lp8788*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 struct lp8788 *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1->dev);
 FUNC_1(VAR_1);
 return 0;
}

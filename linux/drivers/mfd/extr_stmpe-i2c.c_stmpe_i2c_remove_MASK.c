
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmpe {int dummy; } ;
struct i2c_client {int dev; } ;


 struct stmpe* FUNC_0 (int *) ;
 int FUNC_1 (struct stmpe*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0)
{
 struct stmpe *VAR_1 = FUNC_0(&VAR_0->dev);

 return FUNC_1(VAR_1);
}

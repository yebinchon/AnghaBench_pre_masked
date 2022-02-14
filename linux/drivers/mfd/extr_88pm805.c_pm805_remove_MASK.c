
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm80x_chip {int dev; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct pm80x_chip*) ;
 struct pm80x_chip* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct pm80x_chip *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->dev);
 FUNC_0(VAR_1);

 FUNC_3();

 return 0;
}

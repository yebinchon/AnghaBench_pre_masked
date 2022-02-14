
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps6586x {int dev; } ;
struct i2c_client {scalar_t__ irq; } ;


 int FUNC_0 (scalar_t__,struct tps6586x*) ;
 struct tps6586x* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tps6586x*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct tps6586x *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(VAR_1);
 FUNC_2(VAR_1->dev);
 if (VAR_0->irq)
  FUNC_0(VAR_0->irq, VAR_1);
 return 0;
}

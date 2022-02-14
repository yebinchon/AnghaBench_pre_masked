
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3630a_chip {int irqthread; scalar_t__ irq; int dev; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,struct lm3630a_chip*) ;
 struct lm3630a_chip* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct lm3630a_chip*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_2)
{
 int VAR_3;
 struct lm3630a_chip *VAR_4 = FUNC_4(VAR_2);

 VAR_3 = FUNC_5(VAR_4, VAR_0, 0);
 if (VAR_3 < 0)
  FUNC_1(VAR_4->dev, "i2c failed to access register\n");

 VAR_3 = FUNC_5(VAR_4, VAR_1, 0);
 if (VAR_3 < 0)
  FUNC_1(VAR_4->dev, "i2c failed to access register\n");

 if (VAR_4->irq) {
  FUNC_3(VAR_4->irq, VAR_4);
  FUNC_2(VAR_4->irqthread);
  FUNC_0(VAR_4->irqthread);
 }
 return 0;
}

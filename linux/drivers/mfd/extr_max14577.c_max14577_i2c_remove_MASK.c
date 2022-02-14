
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max14577 {scalar_t__ dev_type; int irq_data; int irq; int dev; } ;
struct i2c_client {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct max14577* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct max14577*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_1)
{
 struct max14577 *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(VAR_2->dev);
 FUNC_3(VAR_2->irq, VAR_2->irq_data);
 if (VAR_2->dev_type == VAR_0)
  FUNC_1(VAR_2);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl6040 {int supplies; int irq_data; int irq; scalar_t__ power_count; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 struct twl6040* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct twl6040*,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_1)
{
 struct twl6040 *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->power_count)
  FUNC_4(VAR_2, 0);

 FUNC_2(VAR_2->irq, VAR_2->irq_data);

 FUNC_1(&VAR_1->dev);

 FUNC_3(VAR_0, VAR_2->supplies);

 return 0;
}

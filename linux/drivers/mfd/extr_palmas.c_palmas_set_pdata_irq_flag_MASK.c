
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct palmas_platform_data {int irq_flags; } ;
struct irq_data {int dummy; } ;
struct i2c_client {int dev; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 struct irq_data* FUNC_2 (int ) ;
 int FUNC_3 (struct irq_data*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_1,
  struct palmas_platform_data *VAR_2)
{
 struct irq_data *VAR_3 = FUNC_2(VAR_1->irq);
 if (!VAR_3) {
  FUNC_0(&VAR_1->dev, "Invalid IRQ: %d\n", VAR_1->irq);
  return -VAR_0;
 }

 VAR_2->irq_flags = FUNC_3(VAR_3);
 FUNC_1(&VAR_1->dev, "Irq flag is 0x%08x\n", VAR_2->irq_flags);
 return 0;
}

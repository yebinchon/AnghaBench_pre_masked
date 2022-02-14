
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65217 {int irq_lock; int dev; int irq_mask; } ;
struct irq_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct tps65217* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tps65217*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_3)
{
 struct tps65217 *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_3(VAR_4, VAR_2, VAR_0,
    VAR_4->irq_mask, VAR_1);
 if (VAR_5 != 0)
  FUNC_0(VAR_4->dev, "Failed to sync IRQ masks\n");

 FUNC_2(&VAR_4->irq_lock);
}

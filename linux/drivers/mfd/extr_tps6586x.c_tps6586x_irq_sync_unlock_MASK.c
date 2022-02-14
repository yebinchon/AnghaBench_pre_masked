
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps6586x {int irq_lock; int * mask_reg; int dev; } ;
struct irq_data {int dummy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 struct tps6586x* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_1)
{
 struct tps6586x *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->mask_reg); VAR_3++) {
  int VAR_4;
  VAR_4 = FUNC_4(VAR_2->dev,
         VAR_0 + VAR_3,
         VAR_2->mask_reg[VAR_3]);
  FUNC_1(VAR_4);
 }

 FUNC_3(&VAR_2->irq_lock);
}

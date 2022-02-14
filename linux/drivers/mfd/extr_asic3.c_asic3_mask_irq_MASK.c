
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;
struct asic3 {int irq_base; int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct asic3*,scalar_t__) ;
 int FUNC_1 (struct asic3*,scalar_t__,int) ;
 struct asic3* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_4)
{
 struct asic3 *VAR_5 = FUNC_2(VAR_4);
 int VAR_6;
 unsigned long VAR_7;

 FUNC_3(&VAR_5->lock, VAR_7);
 VAR_6 = FUNC_0(VAR_5,
         VAR_1 +
         VAR_2);

 VAR_6 &= ~(VAR_0 <<
      (VAR_4->irq - (VAR_5->irq_base + VAR_3)));

 FUNC_1(VAR_5,
        VAR_1 +
        VAR_2,
        VAR_6);
 FUNC_4(&VAR_5->lock, VAR_7);
}

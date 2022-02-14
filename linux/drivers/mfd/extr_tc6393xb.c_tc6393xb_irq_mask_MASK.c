
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tc6393xb {int irq_base; int lock; scalar_t__ scr; } ;
struct irq_data {int irq; } ;


 scalar_t__ VAR_0 ;
 struct tc6393xb* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_1)
{
 struct tc6393xb *VAR_2 = FUNC_0(VAR_1);
 unsigned long VAR_3;
 u8 VAR_4;

 FUNC_1(&VAR_2->lock, VAR_3);
 VAR_4 = FUNC_3(VAR_2->scr + VAR_0);
 VAR_4 |= 1 << (VAR_1->irq - VAR_2->irq_base);
 FUNC_4(VAR_4, VAR_2->scr + VAR_0);
 FUNC_2(&VAR_2->lock, VAR_3);
}

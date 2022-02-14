
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cb710_slot {int irq_handler; } ;
struct cb710_chip {int irq_lock; } ;
typedef int cb710_irq_handler_t ;


 struct cb710_chip* FUNC_0 (struct cb710_slot*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct cb710_slot *VAR_0,
 cb710_irq_handler_t VAR_1)
{
 struct cb710_chip *VAR_2 = FUNC_0(VAR_0);
 unsigned long VAR_3;

 FUNC_1(&VAR_2->irq_lock, VAR_3);
 VAR_0->irq_handler = VAR_1;
 FUNC_2(&VAR_2->irq_lock, VAR_3);
}

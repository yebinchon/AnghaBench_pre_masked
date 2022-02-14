
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cb710_slot {scalar_t__ (* irq_handler ) (struct cb710_slot*) ;} ;
struct cb710_chip {unsigned int slots; int irq_lock; struct cb710_slot* slot; } ;
typedef int irqreturn_t ;
typedef scalar_t__ (* cb710_irq_handler_t ) (struct cb710_slot*) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct cb710_chip *VAR_4 = VAR_3;
 struct cb710_slot *VAR_5 = &VAR_4->slot[0];
 irqreturn_t VAR_6 = VAR_1;
 unsigned VAR_7;

 FUNC_0(&VAR_4->irq_lock);

 for (VAR_7 = VAR_4->slots; VAR_7; ++VAR_5, --VAR_7) {
  cb710_irq_handler_t VAR_8 = VAR_5->irq_handler;
  if (VAR_8 && VAR_8(VAR_5))
   VAR_6 = VAR_0;
 }

 FUNC_1(&VAR_4->irq_lock);

 return VAR_6;
}

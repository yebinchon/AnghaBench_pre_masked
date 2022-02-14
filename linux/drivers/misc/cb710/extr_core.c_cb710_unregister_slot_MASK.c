
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cb710_chip {int slots; unsigned int slot_mask; TYPE_1__* slot; } ;
struct TYPE_2__ {int * irq_handler; int pdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct cb710_chip *VAR_0,
 unsigned VAR_1)
{
 int VAR_2 = VAR_0->slots - 1;

 if (!(VAR_0->slot_mask & VAR_1))
  return;

 FUNC_1(&VAR_0->slot[VAR_2].pdev);


 FUNC_2();
 FUNC_0(VAR_0->slot[VAR_2].irq_handler != ((void*)0));


 --VAR_0->slots;
 VAR_0->slot_mask &= ~VAR_1;
}

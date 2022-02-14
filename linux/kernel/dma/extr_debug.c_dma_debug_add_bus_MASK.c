
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int notifier_call; } ;
struct bus_type {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bus_type*,struct notifier_block*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 struct notifier_block* FUNC_2 (int,int ) ;
 int FUNC_3 (char*) ;

void FUNC_4(struct bus_type *VAR_2)
{
 struct notifier_block *VAR_3;

 if (FUNC_1())
  return;

 VAR_3 = FUNC_2(sizeof(struct notifier_block), VAR_0);
 if (VAR_3 == ((void*)0)) {
  FUNC_3("dma_debug_add_bus: out of memory\n");
  return;
 }

 VAR_3->notifier_call = VAR_1;

 FUNC_0(VAR_2, VAR_3);
}

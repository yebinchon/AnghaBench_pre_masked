
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gasket_interrupt_data {int num_interrupts; int ** eventfd_ctxs; } ;


 int VAR_0 ;

int FUNC_0(struct gasket_interrupt_data *VAR_1,
       int VAR_2)
{
 if (VAR_2 < 0 || VAR_2 >= VAR_1->num_interrupts)
  return -VAR_0;

 VAR_1->eventfd_ctxs[VAR_2] = ((void*)0);
 return 0;
}

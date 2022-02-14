
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gasket_interrupt_data {int type; struct gasket_interrupt_data* eventfd_ctxs; struct gasket_interrupt_data* interrupt_counts; } ;
struct gasket_dev {struct gasket_interrupt_data* interrupt_data; } ;



 int FUNC_0 (struct gasket_interrupt_data*) ;
 int FUNC_1 (struct gasket_interrupt_data*) ;

void FUNC_2(struct gasket_dev *VAR_0)
{
 struct gasket_interrupt_data *VAR_1 =
  VAR_0->interrupt_data;




 if (!VAR_1)
  return;

 switch (VAR_1->type) {
 case 128:
  FUNC_0(VAR_1);
  break;

 default:
  break;
 }

 FUNC_1(VAR_1->interrupt_counts);
 FUNC_1(VAR_1->eventfd_ctxs);
 FUNC_1(VAR_1);
 VAR_0->interrupt_data = ((void*)0);
}

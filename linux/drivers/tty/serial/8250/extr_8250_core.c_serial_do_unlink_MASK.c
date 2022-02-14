
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; } ;
struct uart_8250_port {TYPE_1__ list; } ;
struct irq_info {int node; TYPE_1__* head; int lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct irq_info*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct irq_info *VAR_0, struct uart_8250_port *VAR_1)
{
 FUNC_5(&VAR_0->lock);

 if (!FUNC_4(VAR_0->head)) {
  if (VAR_0->head == &VAR_1->list)
   VAR_0->head = VAR_0->head->next;
  FUNC_3(&VAR_1->list);
 } else {
  FUNC_0(VAR_0->head != &VAR_1->list);
  VAR_0->head = ((void*)0);
 }
 FUNC_6(&VAR_0->lock);

 if (VAR_0->head == ((void*)0)) {
  FUNC_1(&VAR_0->node);
  FUNC_2(VAR_0);
 }
}

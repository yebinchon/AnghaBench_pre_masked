
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_8250_port {TYPE_1__* em485; } ;
struct TYPE_2__ {int stop_tx_timer; int start_tx_timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(struct uart_8250_port *VAR_0)
{
 if (!VAR_0->em485)
  return;

 FUNC_0(&VAR_0->em485->start_tx_timer);
 FUNC_0(&VAR_0->em485->stop_tx_timer);

 FUNC_1(VAR_0->em485);
 VAR_0->em485 = ((void*)0);
}

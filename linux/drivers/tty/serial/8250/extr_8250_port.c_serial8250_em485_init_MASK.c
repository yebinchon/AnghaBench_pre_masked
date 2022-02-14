
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_8250_port {TYPE_1__* em485; } ;
struct uart_8250_em485 {int dummy; } ;
struct TYPE_4__ {int * function; } ;
struct TYPE_3__ {int * active_timer; struct uart_8250_port* port; TYPE_2__ start_tx_timer; TYPE_2__ stop_tx_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct uart_8250_port*) ;

int FUNC_3(struct uart_8250_port *VAR_6)
{
 if (VAR_6->em485)
  return 0;

 VAR_6->em485 = FUNC_1(sizeof(struct uart_8250_em485), VAR_2);
 if (!VAR_6->em485)
  return -VAR_1;

 FUNC_0(&VAR_6->em485->stop_tx_timer, VAR_0,
       VAR_3);
 FUNC_0(&VAR_6->em485->start_tx_timer, VAR_0,
       VAR_3);
 VAR_6->em485->stop_tx_timer.function = &VAR_5;
 VAR_6->em485->start_tx_timer.function = &VAR_4;
 VAR_6->em485->port = VAR_6;
 VAR_6->em485->active_timer = ((void*)0);
 FUNC_2(VAR_6);

 return 0;
}

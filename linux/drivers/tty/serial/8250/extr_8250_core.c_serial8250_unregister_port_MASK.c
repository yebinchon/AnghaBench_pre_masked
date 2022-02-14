
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * dev; int type; int flags; int lock; } ;
struct uart_8250_port {TYPE_1__ port; scalar_t__ capabilities; scalar_t__ em485; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uart_8250_port*) ;
 int FUNC_3 (struct uart_8250_port*) ;
 TYPE_3__* VAR_2 ;
 struct uart_8250_port* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *,TYPE_1__*) ;

void FUNC_8(int VAR_6)
{
 struct uart_8250_port *VAR_7 = &VAR_3[VAR_6];

 FUNC_0(&VAR_5);

 if (VAR_7->em485) {
  unsigned long VAR_8;

  FUNC_4(&VAR_7->port.lock, VAR_8);
  FUNC_3(VAR_7);
  FUNC_5(&VAR_7->port.lock, VAR_8);
 }

 FUNC_7(&VAR_4, &VAR_7->port);
 if (VAR_2) {
  VAR_7->port.flags &= ~VAR_1;
  VAR_7->port.type = VAR_0;
  VAR_7->port.dev = &VAR_2->dev;
  VAR_7->capabilities = 0;
  FUNC_2(VAR_7);
  FUNC_6(&VAR_4, &VAR_7->port);
 } else {
  VAR_7->port.dev = ((void*)0);
 }
 FUNC_1(&VAR_5);
}

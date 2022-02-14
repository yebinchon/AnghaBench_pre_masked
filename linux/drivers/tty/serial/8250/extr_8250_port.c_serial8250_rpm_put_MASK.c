
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct uart_8250_port {int capabilities; TYPE_1__ port; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct uart_8250_port *VAR_1)
{
 if (!(VAR_1->capabilities & VAR_0))
  return;
 FUNC_0(VAR_1->port.dev);
 FUNC_1(VAR_1->port.dev);
}

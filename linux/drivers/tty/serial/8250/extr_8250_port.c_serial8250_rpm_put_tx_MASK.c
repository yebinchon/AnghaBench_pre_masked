
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct uart_8250_port {int capabilities; TYPE_1__ port; int rpm_tx_active; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned char FUNC_2 (int *,int ) ;

void FUNC_3(struct uart_8250_port *VAR_1)
{
 unsigned char VAR_2;

 if (!(VAR_1->capabilities & VAR_0))
  return;

 VAR_2 = FUNC_2(&VAR_1->rpm_tx_active, 0);
 if (!VAR_2)
  return;
 FUNC_0(VAR_1->port.dev);
 FUNC_1(VAR_1->port.dev);
}

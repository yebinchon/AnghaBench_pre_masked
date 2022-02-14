
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int irq; } ;
struct sbd_port {int tx_stopped; TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct sbd_port*) ;
 struct sbd_port* FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct sbd_port*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_3)
{
 struct sbd_port *VAR_4 = FUNC_1(VAR_3);

 FUNC_2(VAR_4, VAR_2, VAR_1 | VAR_0);
 VAR_4->tx_stopped = 1;
 FUNC_0(VAR_4->port.irq, VAR_4);
}

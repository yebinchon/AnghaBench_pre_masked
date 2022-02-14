
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int icount; TYPE_1__* state; struct mtk8250_data* private_data; } ;
struct uart_8250_port {int * dma; } ;
struct mtk8250_data {int rx_status; } ;
struct TYPE_2__ {int xmit; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct uart_port*) ;
 struct uart_8250_port* FUNC_4 (struct uart_port*) ;

__attribute__((used)) static int FUNC_5(struct uart_port *VAR_1)
{
 FUNC_0(&VAR_1->icount, 0, sizeof(VAR_1->icount));

 return FUNC_1(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int read_status_mask; } ;
struct uart_8250_port {int ier; TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uart_8250_port*) ;
 int FUNC_1 (struct uart_8250_port*) ;
 int FUNC_2 (struct uart_port*,int ,int) ;
 struct uart_8250_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_4)
{
 struct uart_8250_port *VAR_5 = FUNC_3(VAR_4);

 FUNC_0(VAR_5);

 VAR_5->ier &= ~(VAR_2 | VAR_1);
 VAR_5->port.read_status_mask &= ~VAR_3;
 FUNC_2(VAR_4, VAR_0, VAR_5->ier);

 FUNC_1(VAR_5);
}

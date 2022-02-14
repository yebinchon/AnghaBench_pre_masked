
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int read_status_mask; } ;
struct uart_txx9_port {TYPE_1__ port; } ;
struct uart_port {int dummy; } ;


 int VAR_0 ;
 struct uart_txx9_port* FUNC_0 (struct uart_port*) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_1)
{
 struct uart_txx9_port *VAR_2 = FUNC_0(VAR_1);
 VAR_2->port.read_status_mask &= ~VAR_0;
}

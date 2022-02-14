
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct uart_pxa_port {TYPE_1__ port; } ;
struct uart_port {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct uart_port *VAR_1, int VAR_2)
{
 struct uart_pxa_port *VAR_3 = (struct uart_pxa_port *)VAR_1;
 VAR_3->port.type = VAR_0;
}

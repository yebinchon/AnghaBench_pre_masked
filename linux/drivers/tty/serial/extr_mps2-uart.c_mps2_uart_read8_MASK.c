
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct uart_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ membase; } ;
struct mps2_uart_port {TYPE_1__ port; } ;


 int FUNC_0 (scalar_t__) ;
 struct mps2_uart_port* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static u8 FUNC_2(struct uart_port *VAR_0, unsigned int VAR_1)
{
 struct mps2_uart_port *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2->port.membase + VAR_1);
}

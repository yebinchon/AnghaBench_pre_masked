
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct uart_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ membase; } ;
struct mps2_uart_port {TYPE_1__ port; } ;


 struct mps2_uart_port* FUNC_0 (struct uart_port*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_0, u32 VAR_1, unsigned int VAR_2)
{
 struct mps2_uart_port *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_1, VAR_3->port.membase + VAR_2);
}

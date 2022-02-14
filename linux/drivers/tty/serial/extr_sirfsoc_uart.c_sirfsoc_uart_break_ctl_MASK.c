
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct sirfsoc_uart_port {TYPE_1__* uart_reg; } ;
struct sirfsoc_register {int sirfsoc_line_ctrl; } ;
struct TYPE_2__ {scalar_t__ uart_type; struct sirfsoc_register uart_reg; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (struct uart_port*,int ) ;
 struct sirfsoc_uart_port* FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*,int ,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_2, int VAR_3)
{
 struct sirfsoc_uart_port *VAR_4 = FUNC_1(VAR_2);
 struct sirfsoc_register *VAR_5 = &VAR_4->uart_reg->uart_reg;
 if (VAR_4->uart_reg->uart_type == VAR_1) {
  unsigned long VAR_6 = FUNC_0(VAR_2, VAR_5->sirfsoc_line_ctrl);
  if (VAR_3)
   VAR_6 |= VAR_0;
  else
   VAR_6 &= ~VAR_0;
  FUNC_2(VAR_2, VAR_5->sirfsoc_line_ctrl, VAR_6);
 }
}

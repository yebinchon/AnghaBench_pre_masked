
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct sirfsoc_uart_port {int cts_gpio; TYPE_1__* uart_reg; int ms_enabled; int hw_flow_ctrl; } ;
struct sirfsoc_register {int sirfsoc_afc_ctrl; } ;
struct TYPE_2__ {scalar_t__ uart_type; struct sirfsoc_register uart_reg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct uart_port*,int ) ;
 struct sirfsoc_uart_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static unsigned int FUNC_3(struct uart_port *VAR_5)
{
 struct sirfsoc_uart_port *VAR_6 = FUNC_2(VAR_5);
 struct sirfsoc_register *VAR_7 = &VAR_6->uart_reg->uart_reg;
 if (!VAR_6->hw_flow_ctrl || !VAR_6->ms_enabled)
  goto cts_asserted;
 if (VAR_6->uart_reg->uart_type == VAR_1) {
  if (!(FUNC_1(VAR_5, VAR_7->sirfsoc_afc_ctrl) &
      VAR_0))
   goto cts_asserted;
  else
   goto cts_deasserted;
 } else {
  if (!FUNC_0(VAR_6->cts_gpio))
   goto cts_asserted;
  else
   goto cts_deasserted;
 }
cts_deasserted:
 return VAR_2 | VAR_4;
cts_asserted:
 return VAR_2 | VAR_4 | VAR_3;
}

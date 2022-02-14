
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct sirfsoc_uart_port {int rts_gpio; TYPE_1__* uart_reg; int ms_enabled; int hw_flow_ctrl; } ;
struct sirfsoc_register {int sirfsoc_afc_ctrl; int sirfsoc_mode1; int sirfsoc_line_ctrl; } ;
struct TYPE_2__ {scalar_t__ uart_type; struct sirfsoc_register uart_reg; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct uart_port*,int ) ;
 struct sirfsoc_uart_port* FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct uart_port*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_6, unsigned int VAR_7)
{
 struct sirfsoc_uart_port *VAR_8 = FUNC_2(VAR_6);
 struct sirfsoc_register *VAR_9 = &VAR_8->uart_reg->uart_reg;
 unsigned int VAR_10 = VAR_7 & VAR_5;
 unsigned int VAR_11 = VAR_10 ? VAR_1 : 0x0;
 unsigned int VAR_12;

 if (VAR_7 & VAR_4) {
  if (VAR_8->uart_reg->uart_type == VAR_3)
   FUNC_3(VAR_6, VAR_9->sirfsoc_line_ctrl,
    FUNC_1(VAR_6, VAR_9->sirfsoc_line_ctrl) |
    VAR_2);
  else
   FUNC_3(VAR_6, VAR_9->sirfsoc_mode1,
    FUNC_1(VAR_6, VAR_9->sirfsoc_mode1) |
    VAR_0);
 } else {
  if (VAR_8->uart_reg->uart_type == VAR_3)
   FUNC_3(VAR_6, VAR_9->sirfsoc_line_ctrl,
    FUNC_1(VAR_6, VAR_9->sirfsoc_line_ctrl) &
    ~VAR_2);
  else
   FUNC_3(VAR_6, VAR_9->sirfsoc_mode1,
    FUNC_1(VAR_6, VAR_9->sirfsoc_mode1) &
    ~VAR_0);
 }

 if (!VAR_8->hw_flow_ctrl || !VAR_8->ms_enabled)
  return;
 if (VAR_8->uart_reg->uart_type == VAR_3) {
  VAR_12 = FUNC_1(VAR_6, VAR_9->sirfsoc_afc_ctrl) & ~0xFF;
  VAR_11 |= VAR_12;
  FUNC_3(VAR_6, VAR_9->sirfsoc_afc_ctrl, VAR_11);
 } else {
  if (!VAR_11)
   FUNC_0(VAR_8->rts_gpio, 1);
  else
   FUNC_0(VAR_8->rts_gpio, 0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct sirfsoc_uart_port {int ms_enabled; int cts_gpio; int is_atlas7; TYPE_1__* uart_reg; int hw_flow_ctrl; } ;
struct sirfsoc_register {int sirfsoc_int_en_clr_reg; int sirfsoc_int_en_reg; int sirfsoc_afc_ctrl; } ;
struct sirfsoc_int_en {int sirfsoc_cts_en; } ;
struct TYPE_2__ {scalar_t__ uart_type; struct sirfsoc_int_en uart_int_en; struct sirfsoc_register uart_reg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct uart_port*,int ) ;
 struct sirfsoc_uart_port* FUNC_3 (struct uart_port*) ;
 int FUNC_4 (struct uart_port*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_1)
{
 struct sirfsoc_uart_port *VAR_2 = FUNC_3(VAR_1);
 struct sirfsoc_register *VAR_3 = &VAR_2->uart_reg->uart_reg;
 struct sirfsoc_int_en *VAR_4 = &VAR_2->uart_reg->uart_int_en;

 if (!VAR_2->hw_flow_ctrl)
  return;
 VAR_2->ms_enabled = 0;
 if (VAR_2->uart_reg->uart_type == VAR_0) {
  FUNC_4(VAR_1, VAR_3->sirfsoc_afc_ctrl,
    FUNC_2(VAR_1, VAR_3->sirfsoc_afc_ctrl) & ~0x3FF);
  if (!VAR_2->is_atlas7)
   FUNC_4(VAR_1, VAR_3->sirfsoc_int_en_reg,
     FUNC_2(VAR_1, VAR_3->sirfsoc_int_en_reg)&
     ~VAR_4->sirfsoc_cts_en);
  else
   FUNC_4(VAR_1, VAR_3->sirfsoc_int_en_clr_reg,
     VAR_4->sirfsoc_cts_en);
 } else
  FUNC_0(FUNC_1(VAR_2->cts_gpio));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct mxs_auart_port {int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct mxs_auart_port*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct mxs_auart_port*) ;
 int FUNC_4 (struct mxs_auart_port*) ;
 int FUNC_5 (int,struct mxs_auart_port*,int ) ;
 int FUNC_6 (int ,struct mxs_auart_port*,int ) ;
 struct mxs_auart_port* FUNC_7 (struct uart_port*) ;
 scalar_t__ FUNC_8 (struct uart_port*) ;

__attribute__((used)) static void FUNC_9(struct uart_port *VAR_8)
{
 struct mxs_auart_port *VAR_9 = FUNC_7(VAR_8);

 FUNC_2(VAR_8);

 if (FUNC_0(VAR_9))
  FUNC_3(VAR_9);

 if (FUNC_8(VAR_8)) {
  FUNC_5(VAR_1, VAR_9, VAR_6);

  FUNC_5(VAR_4 | VAR_3 |
   VAR_2, VAR_9, VAR_7);
  FUNC_6(VAR_0, VAR_9, VAR_5);
 } else {
  FUNC_4(VAR_9);
 }

 FUNC_1(VAR_9->clk);
}

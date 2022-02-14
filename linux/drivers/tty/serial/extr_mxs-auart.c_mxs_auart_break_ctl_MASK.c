
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct mxs_auart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct mxs_auart_port*,int ) ;
 int FUNC_1 (int ,struct mxs_auart_port*,int ) ;
 struct mxs_auart_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_2, int VAR_3)
{
 struct mxs_auart_port *VAR_4 = FUNC_2(VAR_2);

 if (VAR_3)
  FUNC_1(VAR_0, VAR_4, VAR_1);
 else
  FUNC_0(VAR_0, VAR_4, VAR_1);
}

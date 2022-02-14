
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct mxs_auart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mxs_auart_port*) ;
 int FUNC_1 (int ,struct mxs_auart_port*,int ) ;
 struct mxs_auart_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_2)
{
 struct mxs_auart_port *VAR_3 = FUNC_2(VAR_2);


 FUNC_1(VAR_0, VAR_3, VAR_1);

 FUNC_0(VAR_3);
}

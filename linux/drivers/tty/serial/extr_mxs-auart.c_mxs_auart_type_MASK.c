
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct mxs_auart_port {int dev; } ;


 char const* FUNC_0 (int ) ;
 struct mxs_auart_port* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static const char *FUNC_2(struct uart_port *VAR_0)
{
 struct mxs_auart_port *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1->dev);
}

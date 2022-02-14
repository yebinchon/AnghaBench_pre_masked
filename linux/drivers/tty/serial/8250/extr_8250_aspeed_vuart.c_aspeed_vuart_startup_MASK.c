
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {struct aspeed_vuart* private_data; } ;
struct uart_8250_port {TYPE_1__ port; } ;
struct aspeed_vuart {int dummy; } ;


 int FUNC_0 (struct aspeed_vuart*,int) ;
 int FUNC_1 (struct uart_port*) ;
 struct uart_8250_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static int FUNC_3(struct uart_port *VAR_0)
{
 struct uart_8250_port *VAR_1 = FUNC_2(VAR_0);
 struct aspeed_vuart *VAR_2 = VAR_1->port.private_data;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3)
  return VAR_3;

 FUNC_0(VAR_2, 0);

 return 0;
}

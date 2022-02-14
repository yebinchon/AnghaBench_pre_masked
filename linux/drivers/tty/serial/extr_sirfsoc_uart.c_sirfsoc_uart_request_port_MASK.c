
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int mapbase; } ;
struct sirfsoc_uart_port {TYPE_1__* uart_reg; } ;
struct sirfsoc_uart_param {int port_name; } ;
struct TYPE_2__ {struct sirfsoc_uart_param uart_param; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ,int ) ;
 struct sirfsoc_uart_port* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static int FUNC_2(struct uart_port *VAR_2)
{
 struct sirfsoc_uart_port *VAR_3 = FUNC_1(VAR_2);
 struct sirfsoc_uart_param *VAR_4 = &VAR_3->uart_reg->uart_param;
 void *VAR_5;
 VAR_5 = FUNC_0(VAR_2->mapbase,
  VAR_1, VAR_4->port_name);
 return VAR_5 ? 0 : -VAR_0;
}

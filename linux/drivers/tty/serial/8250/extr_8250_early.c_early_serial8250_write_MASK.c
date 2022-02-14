
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct earlycon_device {struct uart_port port; } ;
struct console {struct earlycon_device* data; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_port*,char const*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_1(struct console *VAR_1,
     const char *VAR_2, unsigned int VAR_3)
{
 struct earlycon_device *VAR_4 = VAR_1->data;
 struct uart_port *VAR_5 = &VAR_4->port;

 FUNC_0(VAR_5, VAR_2, VAR_3, VAR_0);
}

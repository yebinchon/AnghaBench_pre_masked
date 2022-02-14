
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rs485_config; struct fintek_8250* private_data; } ;
struct uart_8250_port {TYPE_1__ port; } ;
struct fintek_8250 {int pid; } ;






 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct uart_8250_port *VAR_1)
{
 struct fintek_8250 *VAR_2 = VAR_1->port.private_data;

 switch (VAR_2->pid) {
 case 131:
 case 130:
 case 128:
 case 129:
  VAR_1->port.rs485_config = VAR_0;
  break;

 default:
  break;
 }
}

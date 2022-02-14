
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uartclk; } ;
struct uart_8250_port {TYPE_1__ port; } ;
struct fintek_8250 {int pid; int index; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fintek_8250*,int ,int ,int ) ;
 int FUNC_1 (struct fintek_8250*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct uart_8250_port *VAR_4,
         struct fintek_8250 *VAR_5)
{
 FUNC_1(VAR_5, VAR_3, VAR_5->index);

 switch (VAR_5->pid) {
 case 128:
  FUNC_0(VAR_5, VAR_0,
   VAR_2,
   VAR_1);

  VAR_4->port.uartclk = 921600 * 16;
  break;
 default:
  break;
 }
}

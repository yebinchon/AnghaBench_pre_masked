
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int flags; } ;
struct uart_8250_port {TYPE_1__ port; } ;
struct serial_private {int dummy; } ;
struct pciserial_board {int uart_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int*) ;
 int FUNC_1 (struct serial_private*,struct uart_8250_port*,int,int,int ) ;

__attribute__((used)) static int
FUNC_2(struct serial_private *VAR_2,
  const struct pciserial_board *VAR_3,
  struct uart_8250_port *VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7;

 VAR_4->port.flags |= VAR_1;
 VAR_4->port.type = VAR_0;

 if (VAR_5 < 4) {
  VAR_6 = 0;
  VAR_7 = VAR_5 * VAR_3->uart_offset;
 } else {
  VAR_6 = 1;
  VAR_5 -= 4;
  VAR_5 = FUNC_0(VAR_5, 4, &VAR_7);
  VAR_7 = VAR_5 * 64 + VAR_7 * VAR_3->uart_offset;
 }

 return FUNC_1(VAR_2, VAR_4, VAR_6, VAR_7, 0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_8250_port {int dummy; } ;
struct serial_private {int dummy; } ;
struct pciserial_board {unsigned int first_offset; int uart_offset; int reg_shift; } ;


 int FUNC_0 (struct serial_private*,struct uart_8250_port*,unsigned int,unsigned int,int ) ;

__attribute__((used)) static int
FUNC_1(struct serial_private *VAR_0,
        const struct pciserial_board *VAR_1,
        struct uart_8250_port *VAR_2, int VAR_3)
{
 unsigned int VAR_4, VAR_5 = VAR_1->first_offset;

 switch (VAR_3) {
 case 0:
  VAR_4 = 1;
  break;
 case 1:
  VAR_4 = 2;
  break;
 default:
  VAR_4 = 4;
  VAR_5 = (VAR_3 - 2) * VAR_1->uart_offset;
 }

 return FUNC_0(VAR_0, VAR_2, VAR_4, VAR_5, VAR_1->reg_shift);
}

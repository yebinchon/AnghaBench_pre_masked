
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_8250_port {int dummy; } ;
struct serial_private {int dummy; } ;
struct pciserial_board {unsigned int first_offset; unsigned int uart_offset; int reg_shift; } ;


 int FUNC_0 (struct serial_private*,struct uart_8250_port*,unsigned int,unsigned int,int ) ;

__attribute__((used)) static int
FUNC_1(struct serial_private *VAR_0,
    const struct pciserial_board *VAR_1,
    struct uart_8250_port *VAR_2, int VAR_3)
{
 unsigned int VAR_4 = 0, VAR_5 = VAR_1->first_offset;

 switch (VAR_3) {
 case 0:
  VAR_4 = 0;
  break;
 case 1:
  VAR_5 = VAR_1->uart_offset;
  VAR_4 = 0;
  break;
 case 2:
  VAR_4 = 1;
  break;
 case 3:
  VAR_5 = VAR_1->uart_offset;

 case 4:
 case 5:
 case 6:
 case 7:
  VAR_4 = VAR_3 - 2;
 }

 return FUNC_0(VAR_0, VAR_2, VAR_4, VAR_5, VAR_1->reg_shift);
}

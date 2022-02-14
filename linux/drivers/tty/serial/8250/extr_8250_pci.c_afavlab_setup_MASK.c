
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_8250_port {int dummy; } ;
struct serial_private {int dummy; } ;
struct pciserial_board {unsigned int first_offset; int uart_offset; int reg_shift; int flags; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct serial_private*,struct uart_8250_port*,unsigned int,unsigned int,int ) ;

__attribute__((used)) static int
FUNC_2(struct serial_private *VAR_0, const struct pciserial_board *VAR_1,
       struct uart_8250_port *VAR_2, int VAR_3)
{
 unsigned int VAR_4, VAR_5 = VAR_1->first_offset;

 VAR_4 = FUNC_0(VAR_1->flags);
 if (VAR_3 < 4)
  VAR_4 += VAR_3;
 else {
  VAR_4 = 4;
  VAR_5 += (VAR_3 - 4) * VAR_1->uart_offset;
 }

 return FUNC_1(VAR_0, VAR_2, VAR_4, VAR_5, VAR_1->reg_shift);
}

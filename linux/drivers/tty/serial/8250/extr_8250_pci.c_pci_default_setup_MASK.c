
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_8250_port {int dummy; } ;
struct serial_private {int dev; } ;
struct pciserial_board {unsigned int first_offset; int flags; int uart_offset; int reg_shift; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (struct serial_private*,struct uart_8250_port*,unsigned int,unsigned int,int) ;

__attribute__((used)) static int FUNC_3(struct serial_private *VAR_2,
    const struct pciserial_board *VAR_3,
    struct uart_8250_port *VAR_4, int VAR_5)
{
 unsigned int VAR_6, VAR_7 = VAR_3->first_offset, VAR_8;

 VAR_6 = FUNC_0(VAR_3->flags);
 if (VAR_3->flags & VAR_0)
  VAR_6 += VAR_5;
 else
  VAR_7 += VAR_5 * VAR_3->uart_offset;

 VAR_8 = (FUNC_1(VAR_2->dev, VAR_6) - VAR_3->first_offset) >>
  (VAR_3->reg_shift + 3);

 if (VAR_3->flags & VAR_1 && VAR_5 >= VAR_8)
  return 1;

 return FUNC_2(VAR_2, VAR_4, VAR_6, VAR_7, VAR_3->reg_shift);
}

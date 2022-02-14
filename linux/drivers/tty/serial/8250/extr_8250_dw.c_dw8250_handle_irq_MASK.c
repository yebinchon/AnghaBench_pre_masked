
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {unsigned int (* serial_in ) (struct uart_port*,int ) ;int lock; int private_data; } ;
struct uart_8250_port {int dma; } ;
struct dw8250_data {int usr_reg; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct uart_port*,unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 unsigned int FUNC_3 (struct uart_port*,int ) ;
 unsigned int FUNC_4 (struct uart_port*,int ) ;
 unsigned int FUNC_5 (struct uart_port*,int ) ;
 unsigned int FUNC_6 (struct uart_port*,int ) ;
 struct dw8250_data* FUNC_7 (int ) ;
 struct uart_8250_port* FUNC_8 (struct uart_port*) ;

__attribute__((used)) static int FUNC_9(struct uart_port *VAR_7)
{
 struct uart_8250_port *VAR_8 = FUNC_8(VAR_7);
 struct dw8250_data *VAR_9 = FUNC_7(VAR_7->private_data);
 unsigned int VAR_10 = VAR_7->serial_in(VAR_7, VAR_0);
 unsigned int VAR_11;
 unsigned long VAR_12;
 if (!VAR_8->dma && ((VAR_10 & 0x3f) == VAR_2)) {
  FUNC_1(&VAR_7->lock, VAR_12);
  VAR_11 = VAR_7->serial_in(VAR_7, VAR_3);

  if (!(VAR_11 & (VAR_5 | VAR_4)))
   (void) VAR_7->serial_in(VAR_7, VAR_6);

  FUNC_2(&VAR_7->lock, VAR_12);
 }

 if (FUNC_0(VAR_7, VAR_10))
  return 1;

 if ((VAR_10 & VAR_1) == VAR_1) {

  (void)VAR_7->serial_in(VAR_7, VAR_9->usr_reg);

  return 1;
 }

 return 0;
}

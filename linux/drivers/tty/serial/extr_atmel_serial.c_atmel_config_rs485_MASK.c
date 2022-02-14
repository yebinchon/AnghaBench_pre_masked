
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial_rs485 {int flags; unsigned int delay_rts_after_send; } ;
struct uart_port {int dev; struct serial_rs485 rs485; } ;
struct atmel_uart_port {unsigned int tx_done_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int ,unsigned int) ;
 scalar_t__ FUNC_2 (struct uart_port*) ;
 int FUNC_3 (int ,char*) ;
 struct atmel_uart_port* FUNC_4 (struct uart_port*) ;

__attribute__((used)) static int FUNC_5(struct uart_port *VAR_11,
         struct serial_rs485 *VAR_12)
{
 struct atmel_uart_port *VAR_13 = FUNC_4(VAR_11);
 unsigned int VAR_14;


 FUNC_1(VAR_11, VAR_1, VAR_13->tx_done_mask);

 VAR_14 = FUNC_0(VAR_11, VAR_3);


 VAR_14 &= ~VAR_8;

 VAR_11->rs485 = *VAR_12;

 if (VAR_12->flags & VAR_10) {
  FUNC_3(VAR_11->dev, "Setting UART to RS485\n");
  VAR_13->tx_done_mask = VAR_6;
  FUNC_1(VAR_11, VAR_4,
      VAR_12->delay_rts_after_send);
  VAR_14 |= VAR_9;
 } else {
  FUNC_3(VAR_11->dev, "Setting UART to RS232\n");
  if (FUNC_2(VAR_11))
   VAR_13->tx_done_mask = VAR_0 |
    VAR_5;
  else
   VAR_13->tx_done_mask = VAR_7;
 }
 FUNC_1(VAR_11, VAR_3, VAR_14);


 FUNC_1(VAR_11, VAR_2, VAR_13->tx_done_mask);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct serial_rs485 {int flags; int delay_rts_after_send; scalar_t__ delay_rts_before_send; struct serial_rs485* padding; } ;
struct uart_port {unsigned int uartclk; struct serial_rs485 rs485; } ;
struct uart_8250_port {unsigned int (* dl_read ) (struct uart_8250_port*) ;} ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct serial_rs485*,int ,int) ;
 int FUNC_2 (struct uart_8250_port*,int ,unsigned int) ;
 unsigned int FUNC_3 (struct uart_8250_port*) ;
 struct uart_8250_port* FUNC_4 (struct uart_port*) ;

__attribute__((used)) static int FUNC_5(struct uart_port *VAR_10,
    struct serial_rs485 *VAR_11)
{
 struct uart_8250_port *VAR_12 = FUNC_4(VAR_10);
 u32 VAR_13 = 0;
 u32 VAR_14 = 0;
 unsigned VAR_15;

 if (VAR_11->flags & VAR_7)
  FUNC_1(VAR_11->padding, 0, sizeof(VAR_11->padding));
 else
  FUNC_1(VAR_11, 0, sizeof(*VAR_11));

 VAR_11->flags &= VAR_7 | VAR_9 |
   VAR_8;

 if (VAR_11->flags & VAR_7) {
  VAR_13 |= VAR_2 |
      VAR_1;

  if (VAR_11->flags & VAR_9) {
   VAR_13 |= VAR_3;
   VAR_11->flags &= ~VAR_8;
  } else {
   VAR_11->flags |= VAR_8;
  }
 }

 if (VAR_11->delay_rts_after_send) {
  VAR_15 = VAR_10->uartclk / VAR_12->dl_read(VAR_12);
  VAR_14 = FUNC_0(VAR_11->delay_rts_after_send
      * VAR_15, VAR_6);

  if (VAR_14 > VAR_5)
   VAR_14 = VAR_5;


  VAR_11->delay_rts_after_send = (VAR_14 * VAR_6)
      / VAR_15;
 }


 VAR_11->delay_rts_before_send = 0;

 FUNC_2(VAR_12, VAR_0, VAR_13);
 FUNC_2(VAR_12, VAR_4, VAR_14);

 VAR_10->rs485 = *VAR_11;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int flags; unsigned int delay_rts_after_send; } ;
struct uart_port {TYPE_1__ rs485; } ;
struct atmel_uart_port {int gpios; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int ,unsigned int) ;
 int FUNC_2 (int ,int) ;
 struct atmel_uart_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_17, u_int VAR_18)
{
 unsigned int VAR_19 = 0;
 unsigned int VAR_20 = FUNC_0(VAR_17, VAR_6);
 unsigned int VAR_21, VAR_22;
 struct atmel_uart_port *VAR_23 = FUNC_3(VAR_17);


 if (VAR_17->rs485.flags & VAR_13) {
  FUNC_1(VAR_17, VAR_9,
      VAR_17->rs485.delay_rts_after_send);
  VAR_20 &= ~VAR_10;
  VAR_20 |= VAR_12;
 }


 if ((VAR_20 & VAR_10) == VAR_11) {

  VAR_21 = VAR_8;


  VAR_22 = VAR_7;
 } else {

  VAR_21 = VAR_7;


  VAR_22 = VAR_8;
 }

 if (VAR_18 & VAR_16)
  VAR_19 |= VAR_22;
 else
  VAR_19 |= VAR_21;

 if (VAR_18 & VAR_14)
  VAR_19 |= VAR_5;
 else
  VAR_19 |= VAR_4;

 FUNC_1(VAR_17, VAR_3, VAR_19);

 FUNC_2(VAR_23->gpios, VAR_18);


 VAR_20 &= ~VAR_0;
 if (VAR_18 & VAR_15)
  VAR_20 |= VAR_1;
 else
  VAR_20 |= VAR_2;

 FUNC_1(VAR_17, VAR_6, VAR_20);
}

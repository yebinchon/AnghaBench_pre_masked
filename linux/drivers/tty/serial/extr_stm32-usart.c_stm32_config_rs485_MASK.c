
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct serial_rs485 {int flags; int delay_rts_after_send; int delay_rts_before_send; } ;
struct uart_port {scalar_t__ membase; int uartclk; struct serial_rs485 rs485; } ;
struct stm32_usart_offsets {scalar_t__ cr1; scalar_t__ cr3; scalar_t__ brr; } ;
struct stm32_usart_config {int uart_enable_bit; } ;
struct stm32_port {TYPE_1__* info; } ;
struct TYPE_2__ {struct stm32_usart_config cfg; struct stm32_usart_offsets ofs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct uart_port*,scalar_t__,int) ;
 int FUNC_5 (int*,int*,int ,int ,int) ;
 int FUNC_6 (struct uart_port*,scalar_t__,int) ;
 struct stm32_port* FUNC_7 (struct uart_port*) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct uart_port *VAR_10,
         struct serial_rs485 *VAR_11)
{
 struct stm32_port *VAR_12 = FUNC_7(VAR_10);
 struct stm32_usart_offsets *VAR_13 = &VAR_12->info->ofs;
 struct stm32_usart_config *VAR_14 = &VAR_12->info->cfg;
 u32 VAR_15, VAR_16, VAR_17, VAR_18;
 bool VAR_19;

 FUNC_4(VAR_10, VAR_13->cr1, FUNC_0(VAR_14->uart_enable_bit));

 VAR_10->rs485 = *VAR_11;

 VAR_11->flags |= VAR_3;

 if (VAR_11->flags & VAR_0) {
  VAR_17 = FUNC_3(VAR_10->membase + VAR_13->cr1);
  VAR_18 = FUNC_3(VAR_10->membase + VAR_13->cr3);
  VAR_15 = FUNC_3(VAR_10->membase + VAR_13->brr);
  VAR_15 = VAR_15 & FUNC_2(15, 0);
  VAR_19 = VAR_17 & VAR_7;

  if (VAR_19)
   VAR_15 = VAR_15 | (VAR_15 & FUNC_2(4, 0))
       << VAR_4;

  VAR_16 = FUNC_1(VAR_10->uartclk, VAR_15);
  FUNC_5(&VAR_17, &VAR_18,
           VAR_11->delay_rts_before_send,
           VAR_11->delay_rts_after_send, VAR_16);

  if (VAR_11->flags & VAR_2) {
   VAR_18 &= ~VAR_9;
   VAR_11->flags &= ~VAR_1;
  } else {
   VAR_18 |= VAR_9;
   VAR_11->flags |= VAR_1;
  }

  FUNC_8(VAR_18, VAR_10->membase + VAR_13->cr3);
  FUNC_8(VAR_17, VAR_10->membase + VAR_13->cr1);
 } else {
  FUNC_4(VAR_10, VAR_13->cr3, VAR_8 | VAR_9);
  FUNC_4(VAR_10, VAR_13->cr1,
          VAR_6 | VAR_5);
 }

 FUNC_6(VAR_10, VAR_13->cr1, FUNC_0(VAR_14->uart_enable_bit));

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct uart_port {scalar_t__ membase; int lock; } ;
struct stm32_usart_offsets {scalar_t__ isr; scalar_t__ icr; } ;
struct stm32_port {scalar_t__ rx_ch; int tx_ch; TYPE_1__* info; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct stm32_usart_offsets ofs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct uart_port*,int) ;
 int FUNC_4 (struct uart_port*) ;
 struct stm32_port* FUNC_5 (struct uart_port*) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_9, void *VAR_10)
{
 struct uart_port *VAR_11 = VAR_10;
 struct stm32_port *VAR_12 = FUNC_5(VAR_11);
 struct stm32_usart_offsets *VAR_13 = &VAR_12->info->ofs;
 u32 VAR_14;

 FUNC_1(&VAR_11->lock);

 VAR_14 = FUNC_0(VAR_11->membase + VAR_13->isr);

 if ((VAR_14 & VAR_5) && VAR_13->icr != VAR_2)
  FUNC_6(VAR_3,
          VAR_11->membase + VAR_13->icr);

 if ((VAR_14 & VAR_8) && (VAR_13->icr != VAR_2))
  FUNC_6(VAR_4,
          VAR_11->membase + VAR_13->icr);

 if ((VAR_14 & VAR_6) && !(VAR_12->rx_ch))
  FUNC_3(VAR_11, 0);

 if ((VAR_14 & VAR_7) && !(VAR_12->tx_ch))
  FUNC_4(VAR_11);

 FUNC_2(&VAR_11->lock);

 if (VAR_12->rx_ch)
  return VAR_1;
 else
  return VAR_0;
}

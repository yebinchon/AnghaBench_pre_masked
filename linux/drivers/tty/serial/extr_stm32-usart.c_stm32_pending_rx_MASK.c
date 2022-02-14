
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct uart_port {scalar_t__ membase; } ;
struct stm32_usart_offsets {scalar_t__ isr; } ;
struct stm32_port {TYPE_2__* rx_ch; TYPE_1__* info; } ;
struct dma_tx_state {int residue; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
struct TYPE_4__ {int cookie; } ;
struct TYPE_3__ {struct stm32_usart_offsets ofs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,struct dma_tx_state*) ;
 int FUNC_1 (scalar_t__) ;
 struct stm32_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static int FUNC_3(struct uart_port *VAR_2, u32 *VAR_3, int *VAR_4,
       bool VAR_5)
{
 struct stm32_port *VAR_6 = FUNC_2(VAR_2);
 struct stm32_usart_offsets *VAR_7 = &VAR_6->info->ofs;
 enum dma_status VAR_8;
 struct dma_tx_state VAR_9;

 *VAR_3 = FUNC_1(VAR_2->membase + VAR_7->isr);

 if (VAR_5 && VAR_6->rx_ch) {
  VAR_8 = FUNC_0(VAR_6->rx_ch,
          VAR_6->rx_ch->cookie,
          &VAR_9);
  if ((VAR_8 == VAR_0) &&
      (*VAR_4 != VAR_9.residue))
   return 1;
  else
   return 0;
 } else if (*VAR_3 & VAR_1) {
  return 1;
 }
 return 0;
}

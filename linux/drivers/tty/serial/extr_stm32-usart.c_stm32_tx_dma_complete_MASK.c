
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct stm32_usart_offsets {int cr3; } ;
struct stm32_port {int tx_dma_busy; TYPE_1__* info; } ;
struct TYPE_2__ {struct stm32_usart_offsets ofs; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_port*,int ,int ) ;
 int FUNC_1 (struct uart_port*) ;
 struct stm32_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
 struct uart_port *VAR_2 = VAR_1;
 struct stm32_port *VAR_3 = FUNC_2(VAR_2);
 struct stm32_usart_offsets *VAR_4 = &VAR_3->info->ofs;

 FUNC_0(VAR_2, VAR_4->cr3, VAR_0);
 VAR_3->tx_dma_busy = 0;


 FUNC_1(VAR_2);
}

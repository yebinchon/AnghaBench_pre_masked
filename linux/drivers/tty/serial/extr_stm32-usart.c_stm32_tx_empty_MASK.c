
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {scalar_t__ membase; } ;
struct stm32_usart_offsets {scalar_t__ isr; } ;
struct stm32_port {TYPE_1__* info; } ;
struct TYPE_2__ {struct stm32_usart_offsets ofs; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 struct stm32_port* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static unsigned int FUNC_2(struct uart_port *VAR_1)
{
 struct stm32_port *VAR_2 = FUNC_1(VAR_1);
 struct stm32_usart_offsets *VAR_3 = &VAR_2->info->ofs;

 return FUNC_0(VAR_1->membase + VAR_3->isr) & VAR_0;
}

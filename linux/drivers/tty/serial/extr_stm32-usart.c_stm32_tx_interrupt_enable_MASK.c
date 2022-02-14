
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct stm32_usart_offsets {int cr1; int cr3; } ;
struct stm32_port {scalar_t__ fifoen; TYPE_1__* info; } ;
struct TYPE_2__ {struct stm32_usart_offsets ofs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_port*,int ,int ) ;
 struct stm32_port* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_2)
{
 struct stm32_port *VAR_3 = FUNC_1(VAR_2);
 struct stm32_usart_offsets *VAR_4 = &VAR_3->info->ofs;





 if (VAR_3->fifoen)
  FUNC_0(VAR_2, VAR_4->cr3, VAR_1);
 else
  FUNC_0(VAR_2, VAR_4->cr1, VAR_0);
}

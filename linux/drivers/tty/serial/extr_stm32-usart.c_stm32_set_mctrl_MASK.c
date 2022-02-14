
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int status; } ;
struct stm32_usart_offsets {int cr3; } ;
struct stm32_port {TYPE_1__* info; } ;
struct TYPE_2__ {struct stm32_usart_offsets ofs; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uart_port*,int ,int ) ;
 int FUNC_1 (struct uart_port*,int ,int ) ;
 struct stm32_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_3, unsigned int VAR_4)
{
 struct stm32_port *VAR_5 = FUNC_2(VAR_3);
 struct stm32_usart_offsets *VAR_6 = &VAR_5->info->ofs;

 if ((VAR_4 & VAR_0) && (VAR_3->status & VAR_1))
  FUNC_1(VAR_3, VAR_6->cr3, VAR_2);
 else
  FUNC_0(VAR_3, VAR_6->cr3, VAR_2);
}

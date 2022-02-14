
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct uart_port {int irq; int dev; scalar_t__ membase; } ;
struct stm32_usart_offsets {int cr1; scalar_t__ isr; } ;
struct stm32_usart_config {int uart_enable_bit; } ;
struct stm32_port {int cr1_irq; scalar_t__ fifoen; TYPE_1__* info; } ;
struct TYPE_2__ {struct stm32_usart_config cfg; struct stm32_usart_offsets ofs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,struct uart_port*) ;
 int FUNC_3 (scalar_t__,int,int,int,int) ;
 int FUNC_4 (struct uart_port*,int ,int) ;
 struct stm32_port* FUNC_5 (struct uart_port*) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_5)
{
 struct stm32_port *VAR_6 = FUNC_5(VAR_5);
 struct stm32_usart_offsets *VAR_7 = &VAR_6->info->ofs;
 struct stm32_usart_config *VAR_8 = &VAR_6->info->cfg;
 u32 VAR_9, VAR_10;
 int VAR_11;

 VAR_9 = VAR_3 | VAR_2;
 VAR_9 |= VAR_6->cr1_irq | VAR_1;
 VAR_9 |= FUNC_0(VAR_8->uart_enable_bit);
 if (VAR_6->fifoen)
  VAR_9 |= VAR_0;

 VAR_11 = FUNC_3(VAR_5->membase + VAR_7->isr,
      VAR_10, (VAR_10 & VAR_4),
      10, 100000);

 if (VAR_11)
  FUNC_1(VAR_5->dev, "transmission complete not set\n");

 FUNC_4(VAR_5, VAR_7->cr1, VAR_9);

 FUNC_2(VAR_5->irq, VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_uart_port {scalar_t__ in_sdio_uart_irq; int func; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct sdio_uart_port *VAR_1)
{
 if (FUNC_0(VAR_1->in_sdio_uart_irq != VAR_0))
  FUNC_1(VAR_1->func);
}

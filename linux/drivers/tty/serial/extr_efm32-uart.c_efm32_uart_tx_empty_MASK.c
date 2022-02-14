
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int dummy; } ;
struct efm32_uart_port {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct efm32_uart_port*,int ) ;
 struct efm32_uart_port* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static unsigned int FUNC_2(struct uart_port *VAR_3)
{
 struct efm32_uart_port *VAR_4 = FUNC_1(VAR_3);
 u32 VAR_5 = FUNC_0(VAR_4, VAR_1);

 if (VAR_5 & VAR_2)
  return VAR_0;
 else
  return 0;
}

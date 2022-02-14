
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int dummy; } ;
struct efm32_uart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct efm32_uart_port*,int ) ;
 int FUNC_1 (struct efm32_uart_port*) ;
 int FUNC_2 (struct efm32_uart_port*,int,int ) ;
 struct efm32_uart_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_6)
{
 struct efm32_uart_port *VAR_7 = FUNC_3(VAR_6);
 u32 VAR_8;

 FUNC_2(VAR_7,
   VAR_4 | VAR_5, VAR_3);
 VAR_8 = FUNC_0(VAR_7, VAR_2);
 FUNC_2(VAR_7,
   VAR_8 | VAR_4 | VAR_5, VAR_2);
 FUNC_2(VAR_7, VAR_1, VAR_0);

 FUNC_1(VAR_7);
}

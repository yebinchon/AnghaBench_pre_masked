
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct efm32_uart_port {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct efm32_uart_port*,int ) ;
 int FUNC_1 (struct efm32_uart_port*) ;
 int FUNC_2 (struct efm32_uart_port*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_6, void *VAR_7)
{
 struct efm32_uart_port *VAR_8 = VAR_7;
 u32 VAR_9 = FUNC_0(VAR_8, VAR_2);


 if (VAR_9 & VAR_5)
  FUNC_2(VAR_8, VAR_5, VAR_3);

 if (VAR_9 & (VAR_5 | VAR_4)) {
  FUNC_1(VAR_8);
  return VAR_0;
 } else
  return VAR_1;
}

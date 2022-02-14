
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_port {int dummy; } ;
struct atmel_uart_port {int ms_irq_enabled; int gpios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct uart_port*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 struct atmel_uart_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_9)
{
 struct atmel_uart_port *VAR_10 = FUNC_3(VAR_9);
 uint32_t VAR_11 = 0;




 if (VAR_10->ms_irq_enabled)
  return;

 VAR_10->ms_irq_enabled = 1;

 if (!FUNC_2(VAR_10->gpios, VAR_5))
  VAR_11 |= VAR_0;

 if (!FUNC_2(VAR_10->gpios, VAR_7))
  VAR_11 |= VAR_2;

 if (!FUNC_2(VAR_10->gpios, VAR_8))
  VAR_11 |= VAR_4;

 if (!FUNC_2(VAR_10->gpios, VAR_6))
  VAR_11 |= VAR_1;

 FUNC_0(VAR_9, VAR_3, VAR_11);

 FUNC_1(VAR_10->gpios);
}

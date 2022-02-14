
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {struct mtk8250_data* private_data; } ;
struct uart_8250_port {scalar_t__ dma; } ;
struct mtk8250_data {int rx_status; } ;


 int VAR_0 ;
 void FUNC_0 (struct uart_port*) ;
 struct uart_8250_port* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_1)
{
 return FUNC_0(VAR_1);
}

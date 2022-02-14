
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_8250_port {TYPE_1__* dma; } ;
struct TYPE_2__ {int (* rx_dma ) (struct uart_8250_port*) ;} ;




 int FUNC_0 (struct uart_8250_port*) ;
 int FUNC_1 (struct uart_8250_port*) ;

__attribute__((used)) static bool FUNC_2(struct uart_8250_port *VAR_0, unsigned int VAR_1)
{
 switch (VAR_1 & 0x3f) {
 case 128:
  FUNC_0(VAR_0);

 case 129:
  return 1;
 }
 return VAR_0->dma->rx_dma(VAR_0);
}

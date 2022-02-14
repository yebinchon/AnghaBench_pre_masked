
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c24xx_uart_port {TYPE_1__* dma; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ rx_chan; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_0, void *VAR_1)
{
 struct s3c24xx_uart_port *VAR_2 = VAR_1;

 if (VAR_2->dma && VAR_2->dma->rx_chan)
  return FUNC_0(VAR_1);
 return FUNC_1(VAR_1);
}

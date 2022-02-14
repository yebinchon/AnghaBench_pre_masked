
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int dev; } ;
struct TYPE_4__ {int enable; int chn; } ;
struct TYPE_3__ {scalar_t__ enable; } ;
struct sprd_uart_port {TYPE_2__ rx_dma; TYPE_1__ tx_dma; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct uart_port*) ;
 int FUNC_4 (struct uart_port*,int) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_0,
      struct sprd_uart_port *VAR_1)
{
 int VAR_2;

 FUNC_2(VAR_0);
 if (!(VAR_1->rx_dma.enable || VAR_1->tx_dma.enable))
  return;

 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2) {
  VAR_1->rx_dma.enable = 0;
  FUNC_1(VAR_1->rx_dma.chn);
  FUNC_0(VAR_0->dev, "fail to start RX dma mode\n");
 }

 FUNC_4(VAR_0, 1);
}

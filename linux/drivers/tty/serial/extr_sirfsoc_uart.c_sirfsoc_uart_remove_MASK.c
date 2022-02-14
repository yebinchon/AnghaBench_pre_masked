
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int dev; } ;
struct TYPE_3__ {int buf; } ;
struct TYPE_4__ {int dma_addr; TYPE_1__ xmit; } ;
struct sirfsoc_uart_port {scalar_t__ tx_dma_chan; TYPE_2__ rx_dma_items; scalar_t__ rx_dma_chan; struct uart_port port; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 struct sirfsoc_uart_port* FUNC_3 (struct platform_device*) ;
 int VAR_1 ;
 int FUNC_4 (int *,struct uart_port*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct sirfsoc_uart_port *VAR_3 = FUNC_3(VAR_2);
 struct uart_port *VAR_4 = &VAR_3->port;
 FUNC_4(&VAR_1, VAR_4);
 if (VAR_3->rx_dma_chan) {
  FUNC_2(VAR_3->rx_dma_chan);
  FUNC_1(VAR_3->rx_dma_chan);
  FUNC_0(VAR_4->dev, VAR_0,
    VAR_3->rx_dma_items.xmit.buf,
    VAR_3->rx_dma_items.dma_addr);
 }
 if (VAR_3->tx_dma_chan) {
  FUNC_2(VAR_3->tx_dma_chan);
  FUNC_1(VAR_3->tx_dma_chan);
 }
 return 0;
}

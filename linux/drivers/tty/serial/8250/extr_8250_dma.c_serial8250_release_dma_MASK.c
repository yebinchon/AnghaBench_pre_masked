
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dev; } ;
struct uart_8250_port {TYPE_2__ port; struct uart_8250_dma* dma; } ;
struct uart_8250_dma {scalar_t__ tx_running; TYPE_3__* txchan; int tx_addr; TYPE_3__* rxchan; int rx_addr; int rx_buf; int rx_size; } ;
struct TYPE_7__ {TYPE_1__* device; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_3__*) ;

void FUNC_5(struct uart_8250_port *VAR_2)
{
 struct uart_8250_dma *VAR_3 = VAR_2->dma;

 if (!VAR_3)
  return;


 FUNC_4(VAR_3->rxchan);
 FUNC_1(VAR_3->rxchan->device->dev, VAR_3->rx_size, VAR_3->rx_buf,
     VAR_3->rx_addr);
 FUNC_2(VAR_3->rxchan);
 VAR_3->rxchan = ((void*)0);


 FUNC_4(VAR_3->txchan);
 FUNC_3(VAR_3->txchan->device->dev, VAR_3->tx_addr,
    VAR_1, VAR_0);
 FUNC_2(VAR_3->txchan);
 VAR_3->txchan = ((void*)0);
 VAR_3->tx_running = 0;

 FUNC_0(VAR_2->port.dev, "dma channels released\n");
}

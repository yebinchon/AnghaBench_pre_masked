
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct device* dev; } ;
struct uart_8250_port {struct uart_8250_dma* dma; TYPE_1__ port; } ;
struct TYPE_7__ {int dst_maxburst; } ;
struct TYPE_6__ {int src_maxburst; } ;
struct uart_8250_dma {struct hsu_dma_slave* tx_param; struct hsu_dma_slave* rx_param; int fn; TYPE_3__ txconf; TYPE_2__ rxconf; } ;
struct mid8250 {int dma_index; TYPE_4__* dma_dev; struct uart_8250_dma dma; } ;
struct hsu_dma_slave {int chan_id; int * dma_dev; } ;
struct device {int dummy; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hsu_dma_slave* FUNC_0 (struct device*,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct mid8250 *VAR_3, struct uart_8250_port *VAR_4)
{
 struct uart_8250_dma *VAR_5 = &VAR_3->dma;
 struct device *VAR_6 = VAR_4->port.dev;
 struct hsu_dma_slave *VAR_7;
 struct hsu_dma_slave *VAR_8;

 if (!VAR_3->dma_dev)
  return 0;

 VAR_7 = FUNC_0(VAR_6, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_6, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_7->chan_id = VAR_3->dma_index * 2 + 1;
 VAR_8->chan_id = VAR_3->dma_index * 2;

 VAR_5->rxconf.src_maxburst = 64;
 VAR_5->txconf.dst_maxburst = 64;

 VAR_7->dma_dev = &VAR_3->dma_dev->dev;
 VAR_8->dma_dev = &VAR_3->dma_dev->dev;

 VAR_5->fn = VAR_2;
 VAR_5->rx_param = VAR_7;
 VAR_5->tx_param = VAR_8;

 VAR_4->dma = VAR_5;
 return 0;
}

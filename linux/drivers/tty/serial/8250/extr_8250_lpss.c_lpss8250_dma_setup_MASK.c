
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct device* dev; } ;
struct uart_8250_port {struct uart_8250_dma* dma; TYPE_2__ port; } ;
struct TYPE_8__ {int dst_maxburst; } ;
struct TYPE_7__ {int src_maxburst; } ;
struct uart_8250_dma {struct dw_dma_slave* tx_param; struct dw_dma_slave* rx_param; int fn; TYPE_4__ txconf; TYPE_3__ rxconf; } ;
struct dw_dma_slave {int dma_dev; } ;
struct TYPE_5__ {struct uart_8250_dma dma; } ;
struct lpss8250 {int dma_maxburst; struct dw_dma_slave dma_param; TYPE_1__ data; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dw_dma_slave* FUNC_0 (struct device*,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct lpss8250 *VAR_3, struct uart_8250_port *VAR_4)
{
 struct uart_8250_dma *VAR_5 = &VAR_3->data.dma;
 struct dw_dma_slave *VAR_6, *VAR_7;
 struct device *VAR_8 = VAR_4->port.dev;

 if (!VAR_3->dma_param.dma_dev)
  return 0;

 VAR_6 = FUNC_0(VAR_8, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_8, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 *VAR_6 = VAR_3->dma_param;
 VAR_5->rxconf.src_maxburst = VAR_3->dma_maxburst;

 *VAR_7 = VAR_3->dma_param;
 VAR_5->txconf.dst_maxburst = VAR_3->dma_maxburst;

 VAR_5->fn = VAR_2;
 VAR_5->rx_param = VAR_6;
 VAR_5->tx_param = VAR_7;

 VAR_4->dma = VAR_5;
 return 0;
}

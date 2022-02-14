
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mapbase; struct device* dev; } ;
struct TYPE_3__ {scalar_t__ buf; } ;
struct imx_port {void* dma_chan_tx; TYPE_2__ port; scalar_t__ rx_buf; TYPE_1__ rx_ring; void* dma_chan_rx; } ;
struct dma_slave_config {int dst_maxburst; void* dst_addr_width; scalar_t__ dst_addr; int direction; scalar_t__ src_maxburst; void* src_addr_width; scalar_t__ src_addr; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 void* FUNC_2 (struct device*,char*) ;
 int FUNC_3 (void*,struct dma_slave_config*) ;
 int FUNC_4 (struct imx_port*) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct imx_port *VAR_11)
{
 struct dma_slave_config VAR_12 = {};
 struct device *VAR_13 = VAR_11->port.dev;
 int VAR_14;


 VAR_11->dma_chan_rx = FUNC_2(VAR_13, "rx");
 if (!VAR_11->dma_chan_rx) {
  FUNC_0(VAR_13, "cannot get the DMA channel.\n");
  VAR_14 = -VAR_3;
  goto err;
 }

 VAR_12.direction = VAR_0;
 VAR_12.src_addr = VAR_11->port.mapbase + VAR_10;
 VAR_12.src_addr_width = VAR_2;

 VAR_12.src_maxburst = VAR_6 - 1;
 VAR_14 = FUNC_3(VAR_11->dma_chan_rx, &VAR_12);
 if (VAR_14) {
  FUNC_1(VAR_13, "error in RX dma configuration.\n");
  goto err;
 }

 VAR_11->rx_buf = FUNC_5(VAR_7, VAR_5);
 if (!VAR_11->rx_buf) {
  VAR_14 = -VAR_4;
  goto err;
 }
 VAR_11->rx_ring.buf = VAR_11->rx_buf;


 VAR_11->dma_chan_tx = FUNC_2(VAR_13, "tx");
 if (!VAR_11->dma_chan_tx) {
  FUNC_1(VAR_13, "cannot get the TX DMA channel!\n");
  VAR_14 = -VAR_3;
  goto err;
 }

 VAR_12.direction = VAR_1;
 VAR_12.dst_addr = VAR_11->port.mapbase + VAR_9;
 VAR_12.dst_addr_width = VAR_2;
 VAR_12.dst_maxburst = VAR_8;
 VAR_14 = FUNC_3(VAR_11->dma_chan_tx, &VAR_12);
 if (VAR_14) {
  FUNC_1(VAR_13, "error in TX dma configuration.");
  goto err;
 }

 return 0;
err:
 FUNC_4(VAR_11);
 return VAR_14;
}

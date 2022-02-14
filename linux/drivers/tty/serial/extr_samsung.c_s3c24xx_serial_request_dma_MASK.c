
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int dev; TYPE_2__* state; scalar_t__ mapbase; } ;
struct s3c24xx_uart_port {TYPE_3__ port; struct s3c24xx_uart_dma* dma; } ;
struct TYPE_8__ {int src_maxburst; int dst_maxburst; scalar_t__ dst_addr; void* dst_addr_width; int direction; scalar_t__ src_addr; void* src_addr_width; } ;
struct s3c24xx_uart_dma {void* rx_chan; void* tx_chan; int rx_buf; int rx_size; void* rx_addr; void* tx_addr; TYPE_4__ tx_conf; TYPE_4__ rx_conf; } ;
struct dma_slave_caps {scalar_t__ residue_granularity; } ;
struct TYPE_5__ {int buf; } ;
struct TYPE_6__ {TYPE_1__ xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_10 ;
 int FUNC_1 (void*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (void*,struct dma_slave_caps*) ;
 void* FUNC_4 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,void*) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,void*,int ,int ) ;
 int FUNC_9 (void*,TYPE_4__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static int FUNC_12(struct s3c24xx_uart_port *VAR_14)
{
 struct s3c24xx_uart_dma *VAR_15 = VAR_14->dma;
 struct dma_slave_caps VAR_16;
 const char *VAR_17 = ((void*)0);
 int VAR_18;


 VAR_15->rx_conf.direction = VAR_0;
 VAR_15->rx_conf.src_addr_width = VAR_4;
 VAR_15->rx_conf.src_addr = VAR_14->port.mapbase + VAR_11;
 VAR_15->rx_conf.src_maxburst = 1;

 VAR_15->tx_conf.direction = VAR_2;
 VAR_15->tx_conf.dst_addr_width = VAR_4;
 VAR_15->tx_conf.dst_addr = VAR_14->port.mapbase + VAR_12;
 VAR_15->tx_conf.dst_maxburst = 1;

 VAR_15->rx_chan = FUNC_7(VAR_14->port.dev, "rx");

 if (FUNC_0(VAR_15->rx_chan)) {
  VAR_17 = "DMA RX channel request failed";
  VAR_18 = FUNC_1(VAR_15->rx_chan);
  goto err_warn;
 }

 VAR_18 = FUNC_3(VAR_15->rx_chan, &VAR_16);
 if (VAR_18 < 0 ||
     VAR_16.residue_granularity < VAR_3) {
  VAR_17 = "insufficient DMA RX engine capabilities";
  VAR_18 = -VAR_8;
  goto err_release_rx;
 }

 FUNC_9(VAR_15->rx_chan, &VAR_15->rx_conf);

 VAR_15->tx_chan = FUNC_7(VAR_14->port.dev, "tx");
 if (FUNC_0(VAR_15->tx_chan)) {
  VAR_17 = "DMA TX channel request failed";
  VAR_18 = FUNC_1(VAR_15->tx_chan);
  goto err_release_rx;
 }

 VAR_18 = FUNC_3(VAR_15->tx_chan, &VAR_16);
 if (VAR_18 < 0 ||
     VAR_16.residue_granularity < VAR_3) {
  VAR_17 = "insufficient DMA TX engine capabilities";
  VAR_18 = -VAR_8;
  goto err_release_tx;
 }

 FUNC_9(VAR_15->tx_chan, &VAR_15->tx_conf);


 VAR_15->rx_size = VAR_10;

 VAR_15->rx_buf = FUNC_11(VAR_15->rx_size, VAR_9);
 if (!VAR_15->rx_buf) {
  VAR_18 = -VAR_7;
  goto err_release_tx;
 }

 VAR_15->rx_addr = FUNC_4(VAR_14->port.dev, VAR_15->rx_buf,
    VAR_15->rx_size, VAR_1);
 if (FUNC_5(VAR_14->port.dev, VAR_15->rx_addr)) {
  VAR_17 = "DMA mapping error for RX buffer";
  VAR_18 = -VAR_6;
  goto err_free_rx;
 }


 VAR_15->tx_addr = FUNC_4(VAR_14->port.dev, VAR_14->port.state->xmit.buf,
    VAR_13, VAR_5);
 if (FUNC_5(VAR_14->port.dev, VAR_15->tx_addr)) {
  VAR_17 = "DMA mapping error for TX buffer";
  VAR_18 = -VAR_6;
  goto err_unmap_rx;
 }

 return 0;

err_unmap_rx:
 FUNC_8(VAR_14->port.dev, VAR_15->rx_addr, VAR_15->rx_size,
    VAR_1);
err_free_rx:
 FUNC_10(VAR_15->rx_buf);
err_release_tx:
 FUNC_6(VAR_15->tx_chan);
err_release_rx:
 FUNC_6(VAR_15->rx_chan);
err_warn:
 if (VAR_17)
  FUNC_2(VAR_14->port.dev, "%s, DMA will not be used\n", VAR_17);
 return VAR_18;
}

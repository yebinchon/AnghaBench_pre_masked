
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int dev; int mapbase; TYPE_3__* state; } ;
struct tegra_uart_port {unsigned char* rx_dma_buf_virt; unsigned char* tx_dma_buf_virt; TYPE_4__ uport; void* tx_dma_buf_phys; struct dma_chan* tx_dma_chan; void* rx_dma_buf_phys; struct dma_chan* rx_dma_chan; TYPE_1__* cdata; } ;
struct dma_slave_config {int dst_maxburst; void* dst_addr_width; int dst_addr; int src_maxburst; void* src_addr_width; int src_addr; } ;
struct dma_chan {int dummy; } ;
typedef void* dma_addr_t ;
struct TYPE_6__ {unsigned char* buf; } ;
struct TYPE_7__ {TYPE_2__ xmit; } ;
struct TYPE_5__ {int max_dma_burst_bytes; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (struct dma_chan*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,...) ;
 unsigned char* FUNC_3 (int ,int ,void**,int ) ;
 void* FUNC_4 (int ,unsigned char*,int ,int ) ;
 scalar_t__ FUNC_5 (int ,void*) ;
 int FUNC_6 (struct dma_chan*) ;
 struct dma_chan* FUNC_7 (int ,char*) ;
 int FUNC_8 (struct dma_chan*,struct dma_slave_config*) ;
 int FUNC_9 (struct tegra_uart_port*,int) ;

__attribute__((used)) static int FUNC_10(struct tegra_uart_port *VAR_6,
   bool VAR_7)
{
 struct dma_chan *VAR_8;
 unsigned char *VAR_9;
 dma_addr_t VAR_10;
 int VAR_11;
 struct dma_slave_config VAR_12;

 VAR_8 = FUNC_7(VAR_6->uport.dev,
      VAR_7 ? "rx" : "tx");
 if (FUNC_0(VAR_8)) {
  VAR_11 = FUNC_1(VAR_8);
  FUNC_2(VAR_6->uport.dev,
   "DMA channel alloc failed: %d\n", VAR_11);
  return VAR_11;
 }

 if (VAR_7) {
  VAR_9 = FUNC_3(VAR_6->uport.dev,
    VAR_4,
     &VAR_10, VAR_3);
  if (!VAR_9) {
   FUNC_2(VAR_6->uport.dev,
    "Not able to allocate the dma buffer\n");
   FUNC_6(VAR_8);
   return -VAR_2;
  }
  VAR_12.src_addr = VAR_6->uport.mapbase;
  VAR_12.src_addr_width = VAR_0;
  VAR_12.src_maxburst = VAR_6->cdata->max_dma_burst_bytes;
  VAR_6->rx_dma_chan = VAR_8;
  VAR_6->rx_dma_buf_virt = VAR_9;
  VAR_6->rx_dma_buf_phys = VAR_10;
 } else {
  VAR_10 = FUNC_4(VAR_6->uport.dev,
   VAR_6->uport.state->xmit.buf, VAR_5,
   VAR_1);
  if (FUNC_5(VAR_6->uport.dev, VAR_10)) {
   FUNC_2(VAR_6->uport.dev, "dma_map_single tx failed\n");
   FUNC_6(VAR_8);
   return -VAR_2;
  }
  VAR_9 = VAR_6->uport.state->xmit.buf;
  VAR_12.dst_addr = VAR_6->uport.mapbase;
  VAR_12.dst_addr_width = VAR_0;
  VAR_12.dst_maxburst = 16;
  VAR_6->tx_dma_chan = VAR_8;
  VAR_6->tx_dma_buf_virt = VAR_9;
  VAR_6->tx_dma_buf_phys = VAR_10;
 }

 VAR_11 = FUNC_8(VAR_8, &VAR_12);
 if (VAR_11 < 0) {
  FUNC_2(VAR_6->uport.dev,
   "Dma slave config failed, err = %d\n", VAR_11);
  FUNC_9(VAR_6, VAR_7);
  return VAR_11;
 }

 return 0;
}

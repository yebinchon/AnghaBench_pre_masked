
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_slink_data {int dma_buf_size; int dev; void* tx_dma_phys; int * tx_dma_buf; struct dma_chan* tx_dma_chan; void* rx_dma_phys; int * rx_dma_buf; struct dma_chan* rx_dma_chan; scalar_t__ phys; } ;
struct dma_slave_config {scalar_t__ dst_maxburst; void* dst_addr_width; scalar_t__ dst_addr; scalar_t__ src_maxburst; void* src_addr_width; scalar_t__ src_addr; } ;
struct dma_chan {int dummy; } ;
typedef void* dma_addr_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (struct dma_chan*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,char*,...) ;
 int * FUNC_3 (int ,int ,void**,int ) ;
 int FUNC_4 (int ,int ,int *,void*) ;
 int FUNC_5 (struct dma_chan*) ;
 struct dma_chan* FUNC_6 (int ,char*) ;
 int FUNC_7 (struct dma_chan*,struct dma_slave_config*) ;

__attribute__((used)) static int FUNC_8(struct tegra_slink_data *VAR_6,
   bool VAR_7)
{
 struct dma_chan *VAR_8;
 u32 *VAR_9;
 dma_addr_t VAR_10;
 int VAR_11;
 struct dma_slave_config VAR_12;

 VAR_8 = FUNC_6(VAR_6->dev,
      VAR_7 ? "rx" : "tx");
 if (FUNC_0(VAR_8)) {
  VAR_11 = FUNC_1(VAR_8);
  if (VAR_11 != -VAR_2)
   FUNC_2(VAR_6->dev,
    "Dma channel is not available: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_9 = FUNC_3(VAR_6->dev, VAR_6->dma_buf_size,
    &VAR_10, VAR_3);
 if (!VAR_9) {
  FUNC_2(VAR_6->dev, " Not able to allocate the dma buffer\n");
  FUNC_5(VAR_8);
  return -VAR_1;
 }

 if (VAR_7) {
  VAR_12.src_addr = VAR_6->phys + VAR_4;
  VAR_12.src_addr_width = VAR_0;
  VAR_12.src_maxburst = 0;
 } else {
  VAR_12.dst_addr = VAR_6->phys + VAR_5;
  VAR_12.dst_addr_width = VAR_0;
  VAR_12.dst_maxburst = 0;
 }

 VAR_11 = FUNC_7(VAR_8, &VAR_12);
 if (VAR_11)
  goto scrub;
 if (VAR_7) {
  VAR_6->rx_dma_chan = VAR_8;
  VAR_6->rx_dma_buf = VAR_9;
  VAR_6->rx_dma_phys = VAR_10;
 } else {
  VAR_6->tx_dma_chan = VAR_8;
  VAR_6->tx_dma_buf = VAR_9;
  VAR_6->tx_dma_phys = VAR_10;
 }
 return 0;

scrub:
 FUNC_4(VAR_6->dev, VAR_6->dma_buf_size, VAR_9, VAR_10);
 FUNC_5(VAR_8);
 return VAR_11;
}

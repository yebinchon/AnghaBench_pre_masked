
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_controller {int dma_rx; int dma_tx; } ;
struct TYPE_2__ {int bpw; } ;
struct fsl_lpspi_data {int dev; scalar_t__ base_phys; TYPE_1__ config; } ;
struct dma_slave_config {int dst_addr_width; int dst_maxburst; int src_addr_width; int src_maxburst; scalar_t__ src_addr; int direction; scalar_t__ dst_addr; } ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,struct dma_slave_config*) ;
 int FUNC_2 (int ) ;
 struct fsl_lpspi_data* FUNC_3 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_4(struct spi_controller *VAR_8)
{
 int VAR_9;
 enum dma_slave_buswidth VAR_10;
 struct dma_slave_config VAR_11 = {}, VAR_12 = {};
 struct fsl_lpspi_data *VAR_13 =
    FUNC_3(VAR_8);

 switch (FUNC_2(VAR_13->config.bpw)) {
 case 4:
  VAR_10 = VAR_4;
  break;
 case 2:
  VAR_10 = VAR_3;
  break;
 case 1:
  VAR_10 = VAR_2;
  break;
 default:
  return -VAR_5;
 }

 VAR_12.direction = VAR_1;
 VAR_12.dst_addr = VAR_13->base_phys + VAR_7;
 VAR_12.dst_addr_width = VAR_10;
 VAR_12.dst_maxburst = 1;
 VAR_9 = FUNC_1(VAR_8->dma_tx, &VAR_12);
 if (VAR_9) {
  FUNC_0(VAR_13->dev, "TX dma configuration failed with %d\n",
   VAR_9);
  return VAR_9;
 }

 VAR_11.direction = VAR_0;
 VAR_11.src_addr = VAR_13->base_phys + VAR_6;
 VAR_11.src_addr_width = VAR_10;
 VAR_11.src_maxburst = 1;
 VAR_9 = FUNC_1(VAR_8->dma_rx, &VAR_11);
 if (VAR_9) {
  FUNC_0(VAR_13->dev, "RX dma configuration failed with %d\n",
   VAR_9);
  return VAR_9;
 }

 return 0;
}

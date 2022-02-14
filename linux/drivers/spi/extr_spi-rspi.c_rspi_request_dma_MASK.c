
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_controller {int can_dma; int * dma_tx; void* dma_rx; } ;
struct rspi_plat_data {unsigned int dma_tx_id; unsigned int dma_rx_id; } ;
struct resource {scalar_t__ start; } ;
struct device {scalar_t__ of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct rspi_plat_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 void* FUNC_3 (struct device*,int ,unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_5, struct spi_controller *VAR_6,
       const struct resource *VAR_7)
{
 const struct rspi_plat_data *VAR_8 = FUNC_0(VAR_5);
 unsigned int VAR_9, VAR_10;

 if (VAR_5->of_node) {

  VAR_9 = 0;
  VAR_10 = 0;
 } else if (VAR_8 && VAR_8->dma_tx_id && VAR_8->dma_rx_id) {
  VAR_9 = VAR_8->dma_tx_id;
  VAR_10 = VAR_8->dma_rx_id;
 } else {

  return 0;
 }

 VAR_6->dma_tx = FUNC_3(VAR_5, VAR_1, VAR_9,
          VAR_7->start + VAR_3);
 if (!VAR_6->dma_tx)
  return -VAR_2;

 VAR_6->dma_rx = FUNC_3(VAR_5, VAR_0, VAR_10,
          VAR_7->start + VAR_3);
 if (!VAR_6->dma_rx) {
  FUNC_2(VAR_6->dma_tx);
  VAR_6->dma_tx = ((void*)0);
  return -VAR_2;
 }

 VAR_6->can_dma = VAR_4;
 FUNC_1(VAR_5, "DMA available");
 return 0;
}

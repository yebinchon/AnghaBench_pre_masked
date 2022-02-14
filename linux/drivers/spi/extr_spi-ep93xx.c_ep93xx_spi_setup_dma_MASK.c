
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int direction; void* port; } ;
struct ep93xx_spi {void* zeropage; int * dma_rx; void* dma_tx; TYPE_1__ dma_tx_data; TYPE_1__ dma_rx_data; } ;
typedef int dma_cap_mask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int ,int ,TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct ep93xx_spi *VAR_8)
{
 dma_cap_mask_t VAR_9;
 int VAR_10;

 VAR_8->zeropage = (void *)FUNC_5(VAR_6);
 if (!VAR_8->zeropage)
  return -VAR_4;

 FUNC_1(VAR_9);
 FUNC_0(VAR_2, VAR_9);

 VAR_8->dma_rx_data.port = VAR_5;
 VAR_8->dma_rx_data.direction = VAR_0;
 VAR_8->dma_rx_data.name = "ep93xx-spi-rx";

 VAR_8->dma_rx = FUNC_3(VAR_9, VAR_7,
        &VAR_8->dma_rx_data);
 if (!VAR_8->dma_rx) {
  VAR_10 = -VAR_3;
  goto fail_free_page;
 }

 VAR_8->dma_tx_data.port = VAR_5;
 VAR_8->dma_tx_data.direction = VAR_1;
 VAR_8->dma_tx_data.name = "ep93xx-spi-tx";

 VAR_8->dma_tx = FUNC_3(VAR_9, VAR_7,
        &VAR_8->dma_tx_data);
 if (!VAR_8->dma_tx) {
  VAR_10 = -VAR_3;
  goto fail_release_rx;
 }

 return 0;

fail_release_rx:
 FUNC_2(VAR_8->dma_rx);
 VAR_8->dma_rx = ((void*)0);
fail_free_page:
 FUNC_4((unsigned long)VAR_8->zeropage);

 return VAR_10;
}

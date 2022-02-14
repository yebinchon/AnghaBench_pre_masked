
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_5__ {int of_node; } ;
struct spi_controller {int can_dma; TYPE_3__* dma_rx; TYPE_3__* dma_tx; TYPE_1__ dev; } ;
struct dma_slave_config {void* dst_addr_width; void* dst_addr; void* src_addr_width; void* src_addr; } ;
struct device {int dummy; } ;
struct bcm2835_spi {void** clear_rx_desc; scalar_t__ clear_rx_addr; int clear_rx_cs; void* fill_tx_desc; scalar_t__ fill_tx_addr; } ;
typedef scalar_t__ dma_addr_t ;
typedef int __be32 ;
struct TYPE_7__ {TYPE_2__* device; } ;
struct TYPE_6__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct spi_controller*,struct bcm2835_spi*) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (struct device*,char*,...) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int,int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 void* FUNC_7 (struct device*,char*) ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (TYPE_3__*,scalar_t__,int,int ,int ,int ) ;
 int FUNC_10 (TYPE_3__*,struct dma_slave_config*) ;
 int * FUNC_11 (int ,int ,int *,int *) ;

__attribute__((used)) static void FUNC_12(struct spi_controller *VAR_8, struct device *VAR_9,
        struct bcm2835_spi *VAR_10)
{
 struct dma_slave_config VAR_11;
 const __be32 *VAR_12;
 dma_addr_t VAR_13;
 int VAR_14, VAR_15;


 VAR_12 = FUNC_11(VAR_8->dev.of_node, 0, ((void*)0), ((void*)0));
 if (!VAR_12) {
  FUNC_3(VAR_9, "could not get DMA-register address - not using dma mode\n");
  goto err;
 }
 VAR_13 = FUNC_2(VAR_12);


 VAR_8->dma_tx = FUNC_7(VAR_9, "tx");
 if (!VAR_8->dma_tx) {
  FUNC_3(VAR_9, "no tx-dma configuration found - not using dma mode\n");
  goto err;
 }
 VAR_8->dma_rx = FUNC_7(VAR_9, "rx");
 if (!VAR_8->dma_rx) {
  FUNC_3(VAR_9, "no rx-dma configuration found - not using dma mode\n");
  goto err_release;
 }






 VAR_11.dst_addr = (u32)(VAR_13 + VAR_1);
 VAR_11.dst_addr_width = VAR_5;

 VAR_14 = FUNC_10(VAR_8->dma_tx, &VAR_11);
 if (VAR_14)
  goto err_config;

 VAR_10->fill_tx_addr = FUNC_4(VAR_8->dma_tx->device->dev,
           FUNC_0(0), 0, sizeof(u32),
           VAR_6,
           VAR_3);
 if (FUNC_6(VAR_8->dma_tx->device->dev, VAR_10->fill_tx_addr)) {
  FUNC_3(VAR_9, "cannot map zero page - not using DMA mode\n");
  VAR_10->fill_tx_addr = 0;
  goto err_release;
 }

 VAR_10->fill_tx_desc = FUNC_9(VAR_8->dma_tx,
           VAR_10->fill_tx_addr,
           sizeof(u32), 0,
           VAR_4, 0);
 if (!VAR_10->fill_tx_desc) {
  FUNC_3(VAR_9, "cannot prepare fill_tx_desc - not using DMA mode\n");
  goto err_release;
 }

 VAR_14 = FUNC_8(VAR_10->fill_tx_desc);
 if (VAR_14) {
  FUNC_3(VAR_9, "cannot reuse fill_tx_desc - not using DMA mode\n");
  goto err_release;
 }






 VAR_11.src_addr = (u32)(VAR_13 + VAR_1);
 VAR_11.src_addr_width = VAR_5;
 VAR_11.dst_addr = (u32)(VAR_13 + VAR_0);
 VAR_11.dst_addr_width = VAR_5;

 VAR_14 = FUNC_10(VAR_8->dma_rx, &VAR_11);
 if (VAR_14)
  goto err_config;

 VAR_10->clear_rx_addr = FUNC_5(VAR_8->dma_rx->device->dev,
        VAR_10->clear_rx_cs,
        sizeof(VAR_10->clear_rx_cs),
        VAR_6);
 if (FUNC_6(VAR_8->dma_rx->device->dev, VAR_10->clear_rx_addr)) {
  FUNC_3(VAR_9, "cannot map clear_rx_cs - not using DMA mode\n");
  VAR_10->clear_rx_addr = 0;
  goto err_release;
 }

 for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {
  VAR_10->clear_rx_desc[VAR_15] = FUNC_9(VAR_8->dma_rx,
        VAR_10->clear_rx_addr + VAR_15 * sizeof(u32),
        sizeof(u32), 0,
        VAR_4, 0);
  if (!VAR_10->clear_rx_desc[VAR_15]) {
   FUNC_3(VAR_9, "cannot prepare clear_rx_desc - not using DMA mode\n");
   goto err_release;
  }

  VAR_14 = FUNC_8(VAR_10->clear_rx_desc[VAR_15]);
  if (VAR_14) {
   FUNC_3(VAR_9, "cannot reuse clear_rx_desc - not using DMA mode\n");
   goto err_release;
  }
 }


 VAR_8->can_dma = VAR_7;

 return;

err_config:
 FUNC_3(VAR_9, "issue configuring dma: %d - not using DMA mode\n",
  VAR_14);
err_release:
 FUNC_1(VAR_8, VAR_10);
err:
 return;
}

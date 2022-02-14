
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nents; int sgl; } ;
struct TYPE_3__ {int nents; int sgl; } ;
struct spi_transfer {int len; scalar_t__ tx_buf; scalar_t__ rx_buf; TYPE_2__ tx_sg; TYPE_1__ rx_sg; } ;
struct spi_master {int dummy; } ;
struct spi_device {int master; } ;
struct img_spfi {int rx_dma_busy; int tx_dma_busy; int tx_ch; int rx_ch; scalar_t__ phys; } ;
struct dma_slave_config {int src_addr_width; int src_maxburst; int dst_addr_width; int dst_maxburst; scalar_t__ dst_addr; void* direction; scalar_t__ src_addr; } ;
struct dma_async_tx_descriptor {struct img_spfi* callback_param; int callback; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ) ;
 struct dma_async_tx_descriptor* FUNC_1 (int ,int ,int ,void*,int ) ;
 int FUNC_2 (int ,struct dma_slave_config*) ;
 int FUNC_3 (struct dma_async_tx_descriptor*) ;
 int FUNC_4 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct img_spfi*) ;
 struct img_spfi* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct spi_master *VAR_10,
         struct spi_device *VAR_11,
         struct spi_transfer *VAR_12)
{
 struct img_spfi *VAR_13 = FUNC_6(VAR_11->master);
 struct dma_async_tx_descriptor *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 struct dma_slave_config VAR_16, VAR_17;

 VAR_13->rx_dma_busy = 0;
 VAR_13->tx_dma_busy = 0;

 if (VAR_12->rx_buf) {
  VAR_16.direction = VAR_0;
  if (VAR_12->len % 4 == 0) {
   VAR_16.src_addr = VAR_13->phys + VAR_4;
   VAR_16.src_addr_width = 4;
   VAR_16.src_maxburst = 4;
  } else {
   VAR_16.src_addr = VAR_13->phys + VAR_5;
   VAR_16.src_addr_width = 1;
   VAR_16.src_maxburst = 4;
  }
  FUNC_2(VAR_13->rx_ch, &VAR_16);

  VAR_14 = FUNC_1(VAR_13->rx_ch, VAR_12->rx_sg.sgl,
       VAR_12->rx_sg.nents,
       VAR_0,
       VAR_2);
  if (!VAR_14)
   goto stop_dma;

  VAR_14->callback = VAR_8;
  VAR_14->callback_param = VAR_13;
 }

 if (VAR_12->tx_buf) {
  VAR_17.direction = VAR_1;
  if (VAR_12->len % 4 == 0) {
   VAR_17.dst_addr = VAR_13->phys + VAR_6;
   VAR_17.dst_addr_width = 4;
   VAR_17.dst_maxburst = 4;
  } else {
   VAR_17.dst_addr = VAR_13->phys + VAR_7;
   VAR_17.dst_addr_width = 1;
   VAR_17.dst_maxburst = 4;
  }
  FUNC_2(VAR_13->tx_ch, &VAR_17);

  VAR_15 = FUNC_1(VAR_13->tx_ch, VAR_12->tx_sg.sgl,
       VAR_12->tx_sg.nents,
       VAR_1,
       VAR_2);
  if (!VAR_15)
   goto stop_dma;

  VAR_15->callback = VAR_9;
  VAR_15->callback_param = VAR_13;
 }

 if (VAR_12->rx_buf) {
  VAR_13->rx_dma_busy = 1;
  FUNC_3(VAR_14);
  FUNC_0(VAR_13->rx_ch);
 }

 FUNC_5(VAR_13);

 if (VAR_12->tx_buf) {
  VAR_13->tx_dma_busy = 1;
  FUNC_3(VAR_15);
  FUNC_0(VAR_13->tx_ch);
 }

 return 1;

stop_dma:
 FUNC_4(VAR_13->rx_ch);
 FUNC_4(VAR_13->tx_ch);
 return -VAR_3;
}

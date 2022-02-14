
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int is_dma_mapped; int complete; struct ifx_spi_device* context; int queue; } ;
struct TYPE_9__ {void* rx_dma; void* tx_dma; int rx_buf; int tx_buf; int bits_per_word; int speed_hz; scalar_t__ cs_change; int len; } ;
struct TYPE_7__ {scalar_t__ unack_srdy_int_nb; } ;
struct ifx_spi_device {int write_pending; int io_work_tasklet; int flags; TYPE_2__ spi_msg; TYPE_5__* spi_dev; TYPE_3__ spi_xfer; void* rx_dma; void* tx_dma; void* rx_bus; void* tx_bus; scalar_t__ use_dma; int rx_buffer; int tx_buffer; TYPE_1__ gpio; } ;
typedef void* dma_addr_t ;
struct TYPE_10__ {int bits_per_word; int max_speed_hz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_3 ;
 int FUNC_2 (struct ifx_spi_device*) ;
 int FUNC_3 (struct ifx_spi_device*) ;
 int FUNC_4 (TYPE_5__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(unsigned long VAR_4)
{
 int VAR_5;
 struct ifx_spi_device *VAR_6 = (struct ifx_spi_device *) VAR_4;

 if (!FUNC_8(VAR_1, &VAR_6->flags) &&
  FUNC_9(VAR_0, &VAR_6->flags)) {
  if (VAR_6->gpio.unack_srdy_int_nb > 0)
   VAR_6->gpio.unack_srdy_int_nb--;

  FUNC_2(VAR_6);

  FUNC_6(&VAR_6->spi_msg);
  FUNC_0(&VAR_6->spi_msg.queue);

  VAR_6->spi_msg.context = VAR_6;
  VAR_6->spi_msg.complete = VAR_3;



  VAR_6->spi_xfer.len = VAR_2;
  VAR_6->spi_xfer.cs_change = 0;
  VAR_6->spi_xfer.speed_hz = VAR_6->spi_dev->max_speed_hz;

  VAR_6->spi_xfer.bits_per_word =
   VAR_6->spi_dev->bits_per_word;

  VAR_6->spi_xfer.tx_buf = VAR_6->tx_buffer;
  VAR_6->spi_xfer.rx_buf = VAR_6->rx_buffer;




  if (VAR_6->use_dma) {
   VAR_6->spi_msg.is_dma_mapped = 1;
   VAR_6->tx_dma = VAR_6->tx_bus;
   VAR_6->rx_dma = VAR_6->rx_bus;
   VAR_6->spi_xfer.tx_dma = VAR_6->tx_dma;
   VAR_6->spi_xfer.rx_dma = VAR_6->rx_dma;
  } else {
   VAR_6->spi_msg.is_dma_mapped = 0;
   VAR_6->tx_dma = (dma_addr_t)0;
   VAR_6->rx_dma = (dma_addr_t)0;
   VAR_6->spi_xfer.tx_dma = (dma_addr_t)0;
   VAR_6->spi_xfer.rx_dma = (dma_addr_t)0;
  }

  FUNC_5(&VAR_6->spi_xfer, &VAR_6->spi_msg);




  FUNC_3(VAR_6);

  VAR_5 = FUNC_4(VAR_6->spi_dev, &VAR_6->spi_msg);
  if (VAR_5) {
   FUNC_1(VAR_1,
      &VAR_6->flags);
   FUNC_7(&VAR_6->io_work_tasklet);
   return;
  }
 } else
  VAR_6->write_pending = 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_transfer {scalar_t__ len; } ;
struct spi_master {int dma_rx; } ;
struct spi_imx_data {scalar_t__ dynamic_burst; TYPE_1__* devtype_data; scalar_t__ slave_mode; } ;
struct spi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ fifo_size; } ;


 struct spi_imx_data* FUNC_0 (struct spi_master*) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_1(struct spi_master *VAR_1, struct spi_device *VAR_2,
    struct spi_transfer *VAR_3)
{
 struct spi_imx_data *VAR_4 = FUNC_0(VAR_1);

 if (!VAR_0)
  return 0;

 if (!VAR_1->dma_rx)
  return 0;

 if (VAR_4->slave_mode)
  return 0;

 if (VAR_3->len < VAR_4->devtype_data->fifo_size)
  return 0;

 VAR_4->dynamic_burst = 0;

 return 1;
}

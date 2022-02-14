
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {scalar_t__ len; } ;
struct spi_device {int dummy; } ;
struct spi_controller {int dummy; } ;
struct chip_data {scalar_t__ dma_burst_size; scalar_t__ enable_dma; } ;


 scalar_t__ VAR_0 ;
 struct chip_data* FUNC_0 (struct spi_device*) ;

__attribute__((used)) static bool FUNC_1(struct spi_controller *VAR_1,
          struct spi_device *VAR_2,
          struct spi_transfer *VAR_3)
{
 struct chip_data *VAR_4 = FUNC_0(VAR_2);

 return VAR_4->enable_dma &&
        VAR_3->len <= VAR_0 &&
        VAR_3->len >= VAR_4->dma_burst_size;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ enable; } ;
struct sprd_spi {TYPE_1__ dma; } ;
struct spi_transfer {scalar_t__ len; } ;
struct spi_device {int dummy; } ;
struct spi_controller {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct sprd_spi* FUNC_0 (struct spi_controller*) ;

__attribute__((used)) static bool FUNC_1(struct spi_controller *VAR_1,
        struct spi_device *VAR_2, struct spi_transfer *VAR_3)
{
 struct sprd_spi *VAR_4 = FUNC_0(VAR_1);

 return VAR_4->dma.enable && (VAR_3->len > VAR_0);
}

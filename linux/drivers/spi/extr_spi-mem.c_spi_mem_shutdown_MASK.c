
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_mem_driver {int (* shutdown ) (struct spi_mem*) ;} ;
struct spi_mem {int dummy; } ;
struct TYPE_2__ {int driver; } ;
struct spi_device {TYPE_1__ dev; } ;


 struct spi_mem* FUNC_0 (struct spi_device*) ;
 int FUNC_1 (struct spi_mem*) ;
 struct spi_mem_driver* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct spi_device *VAR_0)
{
 struct spi_mem_driver *VAR_1 = FUNC_2(VAR_0->dev.driver);
 struct spi_mem *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1->shutdown)
  VAR_1->shutdown(VAR_2);
}

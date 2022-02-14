
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_driver {int id_table; } ;
struct spi_device_id {int dummy; } ;
struct TYPE_2__ {int driver; } ;
struct spi_device {TYPE_1__ dev; } ;


 struct spi_device_id const* FUNC_0 (int ,struct spi_device const*) ;
 struct spi_driver* FUNC_1 (int ) ;

const struct spi_device_id *FUNC_2(const struct spi_device *VAR_0)
{
 const struct spi_driver *VAR_1 = FUNC_1(VAR_0->dev.driver);

 return FUNC_0(VAR_1->id_table, VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int chip_select; TYPE_1__* controller; int dev; } ;
struct chip_data {int dummy; } ;
struct TYPE_2__ {int bus_num; } ;


 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (struct chip_data*) ;
 struct chip_data* FUNC_2 (struct spi_device*) ;

__attribute__((used)) static void FUNC_3(struct spi_device *VAR_0)
{
 struct chip_data *VAR_1 = FUNC_2((struct spi_device *)VAR_0);

 FUNC_0(&VAR_0->dev, "spi_device %u.%u cleanup\n",
  VAR_0->controller->bus_num, VAR_0->chip_select);

 FUNC_1(VAR_1);
}

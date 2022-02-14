
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int dev; } ;
struct ad_dpot_bus_data {int * bops; struct spi_device* client; } ;
struct TYPE_2__ {int name; int driver_data; } ;


 int FUNC_0 (int *,struct ad_dpot_bus_data*,int ,int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct spi_device*) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_1)
{
 struct ad_dpot_bus_data VAR_2 = {
  .client = VAR_1,
  .bops = &VAR_0,
 };

 return FUNC_0(&VAR_1->dev, &VAR_2,
        FUNC_1(VAR_1)->driver_data,
        FUNC_1(VAR_1)->name);
}

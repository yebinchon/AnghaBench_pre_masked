
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_spi_client_data {int dummy; } ;
struct TYPE_2__ {scalar_t__ of_node; } ;
struct spi_device {TYPE_1__ dev; struct tegra_spi_client_data* controller_data; } ;


 int FUNC_0 (struct tegra_spi_client_data*) ;

__attribute__((used)) static void FUNC_1(struct spi_device *VAR_0)
{
 struct tegra_spi_client_data *VAR_1 = VAR_0->controller_data;

 VAR_0->controller_data = ((void*)0);
 if (VAR_0->dev.of_node)
  FUNC_0(VAR_1);
}

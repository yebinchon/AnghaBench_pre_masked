
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ of_node; } ;
struct spi_device {TYPE_1__ dev; struct davinci_spi_config* controller_data; } ;
struct davinci_spi_config {int dummy; } ;


 int FUNC_0 (struct davinci_spi_config*) ;

__attribute__((used)) static void FUNC_1(struct spi_device *VAR_0)
{
 struct davinci_spi_config *VAR_1 = VAR_0->controller_data;

 VAR_0->controller_data = ((void*)0);
 if (VAR_0->dev.of_node)
  FUNC_0(VAR_1);
}

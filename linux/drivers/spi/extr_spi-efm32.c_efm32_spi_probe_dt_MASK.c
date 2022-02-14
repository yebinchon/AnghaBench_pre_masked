
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct spi_master {int dummy; } ;
struct TYPE_5__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_4__ {int location; } ;
struct efm32_spi_ddata {TYPE_1__ pdata; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (TYPE_2__*,char*,int ) ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 int FUNC_2 (struct efm32_spi_ddata*) ;
 int FUNC_3 (struct device_node*,char*,int *) ;

__attribute__((used)) static void FUNC_4(struct platform_device *VAR_0,
  struct spi_master *VAR_1, struct efm32_spi_ddata *VAR_2)
{
 struct device_node *VAR_3 = VAR_0->dev.of_node;
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_3, "energymicro,location", &VAR_4);

 if (VAR_5)

  VAR_5 = FUNC_3(VAR_3, "efm32,location", &VAR_4);

 if (VAR_5)

  VAR_5 = FUNC_3(VAR_3, "location", &VAR_4);

 if (!VAR_5) {
  FUNC_0(&VAR_0->dev, "using location %u\n", VAR_4);
 } else {

  VAR_4 = FUNC_2(VAR_2);

  FUNC_1(&VAR_0->dev, "fall back to location %u\n", VAR_4);
 }

 VAR_2->pdata.location = VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int * platform_data; struct device_node* of_node; } ;
struct spi_device {struct device dev; } ;
struct of_mmc_spi {int dummy; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct of_mmc_spi*) ;
 struct of_mmc_spi* FUNC_1 (struct device*) ;

void FUNC_2(struct spi_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct device_node *VAR_2 = VAR_1->of_node;
 struct of_mmc_spi *VAR_3 = FUNC_1(VAR_1);

 if (!VAR_1->platform_data || !VAR_2)
  return;

 FUNC_0(VAR_3);
 VAR_1->platform_data = ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct mmc_spi_platform_data* platform_data; struct device_node* of_node; } ;
struct spi_device {struct device dev; } ;
struct mmc_spi_platform_data {int caps; int exit; int init; int ocr_mask; } ;
struct of_mmc_spi {scalar_t__ detect_irq; struct mmc_spi_platform_data pdata; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct device_node*,int ) ;
 int FUNC_1 (struct of_mmc_spi*) ;
 struct of_mmc_spi* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct device_node*,int *) ;
 int VAR_2 ;
 int VAR_3 ;

struct mmc_spi_platform_data *FUNC_4(struct spi_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct device_node *VAR_6 = VAR_5->of_node;
 struct of_mmc_spi *VAR_7;

 if (VAR_5->platform_data || !VAR_6)
  return VAR_5->platform_data;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return ((void*)0);

 if (FUNC_3(VAR_6, &VAR_7->pdata.ocr_mask) <= 0)
  goto err_ocr;

 VAR_7->detect_irq = FUNC_0(VAR_6, 0);
 if (VAR_7->detect_irq != 0) {
  VAR_7->pdata.init = VAR_3;
  VAR_7->pdata.exit = VAR_2;
 } else {
  VAR_7->pdata.caps |= VAR_1;
 }

 VAR_5->platform_data = &VAR_7->pdata;
 return VAR_5->platform_data;
err_ocr:
 FUNC_1(VAR_7);
 return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_message {int dummy; } ;
struct spi_master {int dummy; } ;
struct spi_imx_data {int clk_per; int clk_ipg; TYPE_1__* devtype_data; } ;
struct TYPE_2__ {int (* prepare_message ) (struct spi_imx_data*,struct spi_message*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct spi_imx_data* FUNC_2 (struct spi_master*) ;
 int FUNC_3 (struct spi_imx_data*,struct spi_message*) ;

__attribute__((used)) static int
FUNC_4(struct spi_master *VAR_0, struct spi_message *VAR_1)
{
 struct spi_imx_data *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->clk_per);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_2->clk_ipg);
 if (VAR_3) {
  FUNC_0(VAR_2->clk_per);
  return VAR_3;
 }

 VAR_3 = VAR_2->devtype_data->prepare_message(VAR_2, VAR_1);
 if (VAR_3) {
  FUNC_0(VAR_2->clk_ipg);
  FUNC_0(VAR_2->clk_per);
 }

 return VAR_3;
}

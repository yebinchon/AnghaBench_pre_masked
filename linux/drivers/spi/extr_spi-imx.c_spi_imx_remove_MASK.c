
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct spi_imx_data {int clk_per; int clk_ipg; scalar_t__ base; int bitbang; } ;
struct platform_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct spi_master* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct spi_imx_data*) ;
 struct spi_imx_data* FUNC_6 (struct spi_master*) ;
 int FUNC_7 (struct spi_master*) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_1)
{
 struct spi_master *VAR_2 = FUNC_3(VAR_1);
 struct spi_imx_data *VAR_3 = FUNC_6(VAR_2);
 int VAR_4;

 FUNC_4(&VAR_3->bitbang);

 VAR_4 = FUNC_2(VAR_3->clk_per);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_3->clk_ipg);
 if (VAR_4) {
  FUNC_0(VAR_3->clk_per);
  return VAR_4;
 }

 FUNC_8(0, VAR_3->base + VAR_0);
 FUNC_1(VAR_3->clk_ipg);
 FUNC_1(VAR_3->clk_per);
 FUNC_5(VAR_3);
 FUNC_7(VAR_2);

 return 0;
}

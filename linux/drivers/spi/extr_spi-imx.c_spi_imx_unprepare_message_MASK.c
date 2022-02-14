
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {int dummy; } ;
struct spi_master {int dummy; } ;
struct spi_imx_data {int clk_per; int clk_ipg; } ;


 int FUNC_0 (int ) ;
 struct spi_imx_data* FUNC_1 (struct spi_master*) ;

__attribute__((used)) static int
FUNC_2(struct spi_master *VAR_0, struct spi_message *VAR_1)
{
 struct spi_imx_data *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2->clk_ipg);
 FUNC_0(VAR_2->clk_per);
 return 0;
}

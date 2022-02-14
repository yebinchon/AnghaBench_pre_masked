
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_imx_data {int spi_bus_clk; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct spi_imx_data *VAR_1, int VAR_2)
{
 unsigned long VAR_3 = 0;


 VAR_3 = (8 + 4) * VAR_2 / VAR_1->spi_bus_clk;


 VAR_3 += 1;


 return FUNC_0(2 * VAR_3 * VAR_0);
}

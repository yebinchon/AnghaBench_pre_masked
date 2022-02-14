
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct mxs_ssp {int clk; } ;
struct mxs_spi {struct mxs_ssp ssp; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct spi_master* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 struct mxs_spi* FUNC_4 (struct spi_master*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0)
{
 struct spi_master *VAR_1 = FUNC_1(VAR_0);
 struct mxs_spi *VAR_2 = FUNC_4(VAR_1);
 struct mxs_ssp *VAR_3 = &VAR_2->ssp;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_3->clk);
 if (VAR_4)
  FUNC_3(VAR_0);

 return VAR_4;
}

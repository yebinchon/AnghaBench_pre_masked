
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun6i_spi {int hclk; int mclk; int rstc; } ;
struct spi_master {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct spi_master* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 struct sun6i_spi* FUNC_3 (struct spi_master*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct spi_master *VAR_1 = FUNC_1(VAR_0);
 struct sun6i_spi *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(VAR_2->rstc);
 FUNC_0(VAR_2->mclk);
 FUNC_0(VAR_2->hclk);

 return 0;
}

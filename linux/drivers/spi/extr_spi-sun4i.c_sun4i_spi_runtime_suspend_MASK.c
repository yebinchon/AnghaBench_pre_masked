
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_spi {int hclk; int mclk; } ;
struct spi_master {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct spi_master* FUNC_1 (struct device*) ;
 struct sun4i_spi* FUNC_2 (struct spi_master*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct spi_master *VAR_1 = FUNC_1(VAR_0);
 struct sun4i_spi *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_2->mclk);
 FUNC_0(VAR_2->hclk);

 return 0;
}

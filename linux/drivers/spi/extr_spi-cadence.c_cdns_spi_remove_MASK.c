
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct platform_device {int dev; } ;
struct cdns_spi {int pclk; int ref_clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cdns_spi*,int ,int ) ;
 int FUNC_1 (int ) ;
 struct spi_master* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct cdns_spi* FUNC_5 (struct spi_master*) ;
 int FUNC_6 (struct spi_master*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct spi_master *VAR_3 = FUNC_2(VAR_2);
 struct cdns_spi *VAR_4 = FUNC_5(VAR_3);

 FUNC_0(VAR_4, VAR_0, VAR_1);

 FUNC_1(VAR_4->ref_clk);
 FUNC_1(VAR_4->pclk);
 FUNC_4(&VAR_2->dev);
 FUNC_3(&VAR_2->dev);

 FUNC_6(VAR_3);

 return 0;
}

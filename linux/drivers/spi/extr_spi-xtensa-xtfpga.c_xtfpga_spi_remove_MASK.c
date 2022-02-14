
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xtfpga_spi {int bitbang; } ;
struct spi_master {int dummy; } ;
struct platform_device {int dummy; } ;


 struct spi_master* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *) ;
 struct xtfpga_spi* FUNC_2 (struct spi_master*) ;
 int FUNC_3 (struct spi_master*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct spi_master *VAR_1 = FUNC_0(VAR_0);
 struct xtfpga_spi *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(&VAR_2->bitbang);
 FUNC_3(VAR_1);

 return 0;
}

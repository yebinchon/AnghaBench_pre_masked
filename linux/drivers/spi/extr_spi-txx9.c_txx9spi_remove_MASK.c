
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct txx9spi {int clk; int work; } ;
struct spi_master {int dummy; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct spi_master* FUNC_2 (struct platform_device*) ;
 struct txx9spi* FUNC_3 (struct spi_master*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct spi_master *VAR_1 = FUNC_2(VAR_0);
 struct txx9spi *VAR_2 = FUNC_3(VAR_1);

 FUNC_1(&VAR_2->work);
 FUNC_0(VAR_2->clk);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct platform_device {int dev; } ;
struct meson_spifc {int clk; } ;


 int FUNC_0 (int ) ;
 struct spi_master* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct meson_spifc* FUNC_4 (struct spi_master*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct spi_master *VAR_1 = FUNC_1(VAR_0);
 struct meson_spifc *VAR_2 = FUNC_4(VAR_1);

 FUNC_3(&VAR_0->dev);
 FUNC_0(VAR_2->clk);
 FUNC_2(&VAR_0->dev);

 return 0;
}

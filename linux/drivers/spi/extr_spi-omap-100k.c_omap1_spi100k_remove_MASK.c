
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct platform_device {int dev; } ;
struct omap1_spi100k {int ick; int fck; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 struct spi_master* FUNC_3 (int ) ;
 struct omap1_spi100k* FUNC_4 (struct spi_master*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct spi_master *VAR_1 = FUNC_3(FUNC_1(VAR_0));
 struct omap1_spi100k *VAR_2 = FUNC_4(VAR_1);

 FUNC_2(&VAR_0->dev);

 FUNC_0(VAR_2->fck);
 FUNC_0(VAR_2->ick);

 return 0;
}

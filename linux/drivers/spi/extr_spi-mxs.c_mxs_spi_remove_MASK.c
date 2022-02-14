
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct platform_device {int dev; } ;
struct mxs_ssp {int dmach; } ;
struct mxs_spi {struct mxs_ssp ssp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct spi_master* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct mxs_spi* FUNC_5 (struct spi_master*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct spi_master *VAR_1;
 struct mxs_spi *VAR_2;
 struct mxs_ssp *VAR_3;

 VAR_1 = FUNC_2(VAR_0);
 VAR_2 = FUNC_5(VAR_1);
 VAR_3 = &VAR_2->ssp;

 FUNC_3(&VAR_0->dev);
 if (!FUNC_4(&VAR_0->dev))
  FUNC_1(&VAR_0->dev);

 FUNC_0(VAR_3->dmach);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_qup {int iclk; int cclk; } ;
struct spi_master {int dummy; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct spi_master* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct spi_qup* FUNC_5 (struct spi_master*) ;
 int FUNC_6 (struct spi_master*) ;
 int FUNC_7 (struct spi_qup*,int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct spi_master *VAR_2 = FUNC_1(&VAR_1->dev);
 struct spi_qup *VAR_3 = FUNC_5(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_3(&VAR_1->dev);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_7(VAR_3, VAR_0);
 if (VAR_4)
  return VAR_4;

 FUNC_6(VAR_2);

 FUNC_0(VAR_3->cclk);
 FUNC_0(VAR_3->iclk);

 FUNC_4(&VAR_1->dev);
 FUNC_2(&VAR_1->dev);

 return 0;
}

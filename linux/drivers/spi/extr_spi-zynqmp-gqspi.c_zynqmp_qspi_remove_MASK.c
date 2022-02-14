
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zynqmp_qspi {int pclk; int refclk; } ;
struct spi_master {int dummy; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct spi_master* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct zynqmp_qspi* FUNC_4 (struct spi_master*) ;
 int FUNC_5 (struct spi_master*) ;
 int FUNC_6 (struct zynqmp_qspi*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct spi_master *VAR_2 = FUNC_1(VAR_1);
 struct zynqmp_qspi *VAR_3 = FUNC_4(VAR_2);

 FUNC_6(VAR_3, VAR_0, 0x0);
 FUNC_0(VAR_3->refclk);
 FUNC_0(VAR_3->pclk);
 FUNC_3(&VAR_1->dev);
 FUNC_2(&VAR_1->dev);

 FUNC_5(VAR_2);

 return 0;
}

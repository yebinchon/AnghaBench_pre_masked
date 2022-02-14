
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ enable; } ;
struct sprd_spi {int clk; TYPE_1__ dma; int dev; } ;
struct spi_controller {int dummy; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 struct spi_controller* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 struct sprd_spi* FUNC_6 (struct spi_controller*) ;
 int FUNC_7 (struct spi_controller*) ;
 int FUNC_8 (struct sprd_spi*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_0)
{
 struct spi_controller *VAR_1 = FUNC_2(VAR_0);
 struct sprd_spi *VAR_2 = FUNC_6(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_4(VAR_2->dev);
 if (VAR_3 < 0) {
  FUNC_1(VAR_2->dev, "failed to resume SPI controller\n");
  return VAR_3;
 }

 FUNC_7(VAR_1);

 if (VAR_2->dma.enable)
  FUNC_8(VAR_2);
 FUNC_0(VAR_2->clk);
 FUNC_5(&VAR_0->dev);
 FUNC_3(&VAR_0->dev);

 return 0;
}

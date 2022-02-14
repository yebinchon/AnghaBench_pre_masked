
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_controller {int dummy; } ;
struct platform_device {int dev; } ;
struct mt7621_spi {int clk; } ;


 int FUNC_0 (int ) ;
 struct spi_controller* FUNC_1 (int *) ;
 struct mt7621_spi* FUNC_2 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct spi_controller *VAR_1;
 struct mt7621_spi *VAR_2;

 VAR_1 = FUNC_1(&VAR_0->dev);
 VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_2->clk);

 return 0;
}

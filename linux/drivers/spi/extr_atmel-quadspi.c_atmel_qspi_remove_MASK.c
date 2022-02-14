
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_controller {int dummy; } ;
struct platform_device {int dummy; } ;
struct atmel_qspi {int pclk; int qspick; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct spi_controller* FUNC_1 (struct platform_device*) ;
 struct atmel_qspi* FUNC_2 (struct spi_controller*) ;
 int FUNC_3 (struct spi_controller*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct spi_controller *VAR_3 = FUNC_1(VAR_2);
 struct atmel_qspi *VAR_4 = FUNC_2(VAR_3);

 FUNC_3(VAR_3);
 FUNC_4(VAR_1, VAR_4->regs + VAR_0);
 FUNC_0(VAR_4->qspick);
 FUNC_0(VAR_4->pclk);
 return 0;
}

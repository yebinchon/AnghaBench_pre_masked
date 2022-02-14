
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct spi_device {size_t chip_select; struct spi_master* master; } ;
struct rockchip_spi {int* cs_asserted; int dev; scalar_t__ regs; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct rockchip_spi* FUNC_5 (struct spi_master*) ;

__attribute__((used)) static void FUNC_6(struct spi_device *VAR_1, bool VAR_2)
{
 struct spi_master *VAR_3 = VAR_1->master;
 struct rockchip_spi *VAR_4 = FUNC_5(VAR_3);
 bool VAR_5 = !VAR_2;


 if (VAR_5 == VAR_4->cs_asserted[VAR_1->chip_select])
  return;

 if (VAR_5) {

  FUNC_3(VAR_4->dev);

  FUNC_2(VAR_4->regs + VAR_0,
          FUNC_0(VAR_1->chip_select));
 } else {
  FUNC_1(VAR_4->regs + VAR_0,
          FUNC_0(VAR_1->chip_select));


  FUNC_4(VAR_4->dev);
 }

 VAR_4->cs_asserted[VAR_1->chip_select] = VAR_5;
}

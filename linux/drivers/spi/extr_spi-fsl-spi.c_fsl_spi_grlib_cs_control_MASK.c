
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct spi_device {int chip_select; scalar_t__ cs_gpiod; int master; } ;
struct mpc8xxx_spi {int native_chipselects; struct fsl_spi_reg* reg_base; } ;
struct fsl_spi_reg {int slvsel; } ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 struct mpc8xxx_spi* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct spi_device *VAR_0, bool VAR_1)
{
 struct mpc8xxx_spi *VAR_2 = FUNC_3(VAR_0->master);
 struct fsl_spi_reg *VAR_3 = VAR_2->reg_base;
 u32 VAR_4;
 u16 VAR_5 = VAR_0->chip_select;

 if (VAR_0->cs_gpiod) {
  FUNC_0(VAR_0->cs_gpiod, VAR_1);
 } else if (VAR_5 < VAR_2->native_chipselects) {
  VAR_4 = FUNC_1(&VAR_3->slvsel);
  VAR_4 = VAR_1 ? (VAR_4 | (1 << VAR_5)) : (VAR_4 & ~(1 << VAR_5));
  FUNC_2(&VAR_3->slvsel, VAR_4);
 }
}

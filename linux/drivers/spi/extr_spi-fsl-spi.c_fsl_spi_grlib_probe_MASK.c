
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_master {scalar_t__ num_chipselect; } ;
struct mpc8xxx_spi {int max_bits_per_word; scalar_t__ native_chipselects; int set_shifts; struct fsl_spi_reg* reg_base; } ;
struct fsl_spi_reg {int slvsel; int cap; } ;
struct fsl_spi_platform_data {int cs_control; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct spi_master* FUNC_3 (struct device*) ;
 struct fsl_spi_platform_data* FUNC_4 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 struct mpc8xxx_spi* FUNC_7 (struct spi_master*) ;

__attribute__((used)) static void FUNC_8(struct device *VAR_2)
{
 struct fsl_spi_platform_data *VAR_3 = FUNC_4(VAR_2);
 struct spi_master *VAR_4 = FUNC_3(VAR_2);
 struct mpc8xxx_spi *VAR_5 = FUNC_7(VAR_4);
 struct fsl_spi_reg *VAR_6 = VAR_5->reg_base;
 int VAR_7;
 u32 VAR_8;

 VAR_8 = FUNC_5(&VAR_6->cap);

 VAR_5->set_shifts = VAR_1;
 VAR_7 = FUNC_0(VAR_8);
 if (VAR_7)
  VAR_5->max_bits_per_word = VAR_7 + 1;

 VAR_5->native_chipselects = 0;
 if (FUNC_1(VAR_8)) {
  VAR_5->native_chipselects = FUNC_2(VAR_8);
  FUNC_6(&VAR_6->slvsel, 0xffffffff);
 }
 VAR_4->num_chipselect = VAR_5->native_chipselects;
 VAR_3->cs_control = VAR_0;
}

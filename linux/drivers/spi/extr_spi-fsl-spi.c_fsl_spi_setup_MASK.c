
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_mpc8xxx_cs {int hw_mode; } ;
struct spi_device {int mode; int master; int max_speed_hz; } ;
struct mpc8xxx_spi {struct fsl_spi_reg* reg_base; } ;
struct fsl_spi_reg {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct spi_device*,int ) ;
 int FUNC_1 (struct spi_device*,int *) ;
 struct spi_mpc8xxx_cs* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 struct spi_mpc8xxx_cs* FUNC_4 (struct spi_device*) ;
 struct mpc8xxx_spi* FUNC_5 (int ) ;
 int FUNC_6 (struct spi_device*,struct spi_mpc8xxx_cs*) ;

__attribute__((used)) static int FUNC_7(struct spi_device *VAR_12)
{
 struct mpc8xxx_spi *VAR_13;
 struct fsl_spi_reg *VAR_14;
 int VAR_15;
 u32 VAR_16;
 struct spi_mpc8xxx_cs *VAR_17 = FUNC_4(VAR_12);

 if (!VAR_12->max_speed_hz)
  return -VAR_1;

 if (!VAR_17) {
  VAR_17 = FUNC_2(sizeof(*VAR_17), VAR_3);
  if (!VAR_17)
   return -VAR_2;
  FUNC_6(VAR_12, VAR_17);
 }
 VAR_13 = FUNC_5(VAR_12->master);

 VAR_14 = VAR_13->reg_base;

 VAR_16 = VAR_17->hw_mode;
 VAR_17->hw_mode = FUNC_3(&VAR_14->mode);

 VAR_17->hw_mode &= ~(VAR_9 | VAR_8
    | VAR_11 | VAR_10);

 if (VAR_12->mode & VAR_4)
  VAR_17->hw_mode |= VAR_9;
 if (VAR_12->mode & VAR_5)
  VAR_17->hw_mode |= VAR_8;
 if (!(VAR_12->mode & VAR_7))
  VAR_17->hw_mode |= VAR_11;
 if (VAR_12->mode & VAR_6)
  VAR_17->hw_mode |= VAR_10;

 VAR_15 = FUNC_1(VAR_12, ((void*)0));
 if (VAR_15 < 0) {
  VAR_17->hw_mode = VAR_16;
  return VAR_15;
 }


 FUNC_0(VAR_12, VAR_0);

 return 0;
}

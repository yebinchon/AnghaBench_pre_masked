
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_st {int baud; scalar_t__ base; int clk; } ;
struct spi_device {int max_speed_hz; int cs_gpio; int mode; int bits_per_word; int dev; int master; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int,int,int) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (scalar_t__) ;
 struct spi_st* FUNC_10 (int ) ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct spi_device *VAR_18)
{
 struct spi_st *VAR_19 = FUNC_10(VAR_18->master);
 u32 VAR_20, VAR_21, VAR_22;
 u32 VAR_23 = VAR_18->max_speed_hz;
 int VAR_24 = VAR_18->cs_gpio;
 int VAR_25;

 if (!VAR_23) {
  FUNC_3(&VAR_18->dev, "max_speed_hz unspecified\n");
  return -VAR_0;
 }

 if (!FUNC_7(VAR_24)) {
  FUNC_3(&VAR_18->dev, "%d is not a valid gpio\n", VAR_24);
  return -VAR_0;
 }

 VAR_25 = FUNC_8(VAR_24, FUNC_4(&VAR_18->dev));
 if (VAR_25) {
  FUNC_3(&VAR_18->dev, "could not request gpio:%d\n", VAR_24);
  return VAR_25;
 }

 VAR_25 = FUNC_5(VAR_24, VAR_18->mode & VAR_3);
 if (VAR_25)
  goto out_free_gpio;

 VAR_20 = FUNC_1(VAR_19->clk);


 VAR_21 = VAR_20 / (2 * VAR_23);
 if (VAR_21 < 0x07 || VAR_21 > FUNC_0(16)) {
  FUNC_3(&VAR_18->dev,
   "baudrate %d outside valid range %d\n", VAR_21, VAR_23);
  VAR_25 = -VAR_0;
  goto out_free_gpio;
 }

 VAR_19->baud = VAR_20 / (2 * VAR_21);
 if (VAR_21 == FUNC_0(16))
  VAR_21 = 0x0;

 FUNC_11(VAR_21, VAR_19->base + VAR_6);

 FUNC_2(&VAR_18->dev,
  "setting baudrate:target= %u hz, actual= %u hz, sscbrg= %u\n",
  VAR_23, VAR_19->baud, VAR_21);


 VAR_22 = FUNC_9(VAR_19->base + VAR_7);
 VAR_22 |= VAR_14;

 if (VAR_18->mode & VAR_2)
  VAR_22 |= VAR_16;
 else
  VAR_22 &= ~VAR_16;

 if (VAR_18->mode & VAR_1)
  VAR_22 |= VAR_15;
 else
  VAR_22 &= ~VAR_15;

 if ((VAR_18->mode & VAR_5) == 0)
  VAR_22 |= VAR_12;
 else
  VAR_22 &= ~VAR_12;

 if (VAR_18->mode & VAR_4)
  VAR_22 |= VAR_13;
 else
  VAR_22 &= ~VAR_13;

 VAR_22 &= ~VAR_8;
 VAR_22 |= (VAR_18->bits_per_word - 1);

 VAR_22 |= VAR_11 | VAR_10;
 VAR_22 |= VAR_9;

 FUNC_11(VAR_22, VAR_19->base + VAR_7);


 FUNC_9(VAR_19->base + VAR_17);

 return 0;

out_free_gpio:
 FUNC_6(VAR_24);
 return VAR_25;
}

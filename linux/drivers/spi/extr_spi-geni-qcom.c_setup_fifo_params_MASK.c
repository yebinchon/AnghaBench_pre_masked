
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_master {int dummy; } ;
struct geni_se {scalar_t__ base; } ;
struct spi_geni_master {int cur_speed_hz; int dev; int cur_bits_per_word; struct geni_se se; } ;
struct spi_device {int mode; int chip_select; int bits_per_word; int max_speed_hz; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int ,char*,int,int ) ;
 int FUNC_2 (int ,struct spi_geni_master*,int*,int*) ;
 int FUNC_3 (scalar_t__) ;
 struct spi_geni_master* FUNC_4 (struct spi_master*) ;
 int FUNC_5 (struct spi_geni_master*,int,int ) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct spi_device *VAR_18,
     struct spi_master *VAR_19)
{
 struct spi_geni_master *VAR_20 = FUNC_4(VAR_19);
 struct geni_se *VAR_21 = &VAR_20->se;
 u32 VAR_22, VAR_23, VAR_24, VAR_25;
 u32 VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;
 int VAR_31;

 VAR_22 = FUNC_3(VAR_21->base + VAR_13);
 VAR_23 = FUNC_3(VAR_21->base + VAR_10);
 VAR_24 = FUNC_3(VAR_21->base + VAR_9);
 VAR_25 = 0;
 VAR_22 &= ~VAR_6;
 VAR_23 &= ~VAR_3;
 VAR_24 &= ~VAR_2;

 if (VAR_18->mode & VAR_17)
  VAR_22 |= VAR_5;

 if (VAR_18->mode & VAR_15)
  VAR_23 |= VAR_3;

 if (VAR_18->mode & VAR_14)
  VAR_24 |= VAR_2;

 if (VAR_18->mode & VAR_16)
  VAR_25 = FUNC_0(VAR_18->chip_select);

 VAR_26 = VAR_18->chip_select;
 VAR_20->cur_speed_hz = VAR_18->max_speed_hz;
 VAR_20->cur_bits_per_word = VAR_18->bits_per_word;

 VAR_31 = FUNC_2(VAR_20->cur_speed_hz, VAR_20, &VAR_29, &VAR_30);
 if (VAR_31) {
  FUNC_1(VAR_20->dev, "Err setting clks ret(%d) for %ld\n",
       VAR_31, VAR_20->cur_speed_hz);
  return VAR_31;
 }

 VAR_27 = VAR_29 & VAR_1;
 VAR_28 = (VAR_30 << VAR_0) | VAR_7;
 FUNC_5(VAR_20, VAR_18->mode, VAR_18->bits_per_word);
 FUNC_6(VAR_22, VAR_21->base + VAR_13);
 FUNC_6(VAR_26, VAR_21->base + VAR_12);
 FUNC_6(VAR_24, VAR_21->base + VAR_9);
 FUNC_6(VAR_23, VAR_21->base + VAR_10);
 FUNC_6(VAR_25, VAR_21->base + VAR_11);
 FUNC_6(VAR_27, VAR_21->base + VAR_8);
 FUNC_6(VAR_28, VAR_21->base + VAR_4);
 return 0;
}

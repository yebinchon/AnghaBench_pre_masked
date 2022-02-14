
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct spi_transfer {int bits_per_word; int speed_hz; } ;
struct spi_device {int bits_per_word; size_t chip_select; int max_speed_hz; int mode; struct davinci_spi_config* controller_data; int master; } ;
struct davinci_spi_config {int wdelay; int c2tdelay; int t2cdelay; int t2edelay; int c2edelay; scalar_t__ timer_disable; scalar_t__ parity_enable; scalar_t__ odd_parity; } ;
struct davinci_spi {int* bytes_per_word; scalar_t__ version; scalar_t__ base; int get_tx; int get_rx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 struct davinci_spi_config VAR_25 ;
 int FUNC_0 (struct davinci_spi*,int) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_1 (int,scalar_t__) ;
 struct davinci_spi* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_30,
  struct spi_transfer *VAR_31)
{

 struct davinci_spi *VAR_32;
 struct davinci_spi_config *VAR_33;
 u8 VAR_34 = 0;
 u32 VAR_35 = 0, VAR_36 = 0;
 int VAR_37;

 VAR_32 = FUNC_2(VAR_30->master);
 VAR_33 = VAR_30->controller_data;
 if (!VAR_33)
  VAR_33 = &VAR_25;

 if (VAR_31) {
  VAR_34 = VAR_31->bits_per_word;
  VAR_35 = VAR_31->speed_hz;
 }


 if (!VAR_34)
  VAR_34 = VAR_30->bits_per_word;





 if (VAR_34 <= 8) {
  VAR_32->get_rx = VAR_27;
  VAR_32->get_tx = VAR_29;
  VAR_32->bytes_per_word[VAR_30->chip_select] = 1;
 } else {
  VAR_32->get_rx = VAR_26;
  VAR_32->get_tx = VAR_28;
  VAR_32->bytes_per_word[VAR_30->chip_select] = 2;
 }

 if (!VAR_35)
  VAR_35 = VAR_30->max_speed_hz;



 VAR_37 = FUNC_0(VAR_32, VAR_35);
 if (VAR_37 < 0)
  return VAR_37;

 VAR_36 = (VAR_37 << VAR_15) | (VAR_34 & 0x1f);

 if (VAR_30->mode & VAR_22)
  VAR_36 |= VAR_16;

 if (VAR_30->mode & VAR_21)
  VAR_36 |= VAR_14;

 if (!(VAR_30->mode & VAR_20))
  VAR_36 |= VAR_13;





 if (VAR_33->wdelay)
  VAR_36 |= ((VAR_33->wdelay << VAR_19)
    & VAR_18);
 if (VAR_32->version == VAR_24) {

  u32 VAR_38 = 0;

  if (VAR_33->odd_parity)
   VAR_36 |= VAR_11;

  if (VAR_33->parity_enable)
   VAR_36 |= VAR_12;

  if (VAR_33->timer_disable) {
   VAR_36 |= VAR_10;
  } else {
   VAR_38 |= (VAR_33->c2tdelay << VAR_4)
      & VAR_3;
   VAR_38 |= (VAR_33->t2cdelay << VAR_6)
      & VAR_5;
  }

  if (VAR_30->mode & VAR_23) {
   VAR_36 |= VAR_17;
   VAR_38 |= (VAR_33->t2edelay << VAR_8)
      & VAR_7;
   VAR_38 |= (VAR_33->c2edelay << VAR_2)
      & VAR_1;
  }

  FUNC_1(VAR_38, VAR_32->base + VAR_0);
 }

 FUNC_1(VAR_36, VAR_32->base + VAR_9);

 return 0;
}

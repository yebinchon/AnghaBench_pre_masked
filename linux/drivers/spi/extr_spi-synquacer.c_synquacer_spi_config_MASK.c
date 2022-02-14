
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct synquacer_spi {unsigned int speed; unsigned int bus_width; unsigned int bpw; unsigned int mode; unsigned int cs; unsigned int transfer_mode; scalar_t__ regs; scalar_t__ rtm; scalar_t__ aces; int dev; } ;
struct spi_transfer {int rx_nbits; int tx_nbits; unsigned int speed_hz; unsigned int bits_per_word; scalar_t__ rx_buf; scalar_t__ tx_buf; } ;
struct spi_master {int max_speed_hz; } ;
struct spi_device {unsigned int mode; unsigned int chip_select; } ;


 int FUNC_0 (int,unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
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
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (scalar_t__) ;
 struct synquacer_spi* FUNC_4 (struct spi_master*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct spi_master *VAR_31,
    struct spi_device *VAR_32,
    struct spi_transfer *VAR_33)
{
 struct synquacer_spi *VAR_34 = FUNC_4(VAR_31);
 unsigned int VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40;
 u32 VAR_41, VAR_42, VAR_43;


 if (VAR_33->rx_buf && VAR_33->tx_buf &&
     (VAR_33->rx_nbits != 1 || VAR_33->tx_nbits != 1)) {
  FUNC_2(VAR_34->dev,
   "RX and TX bus widths must be 1-bit for Full-Duplex!\n");
  return -VAR_0;
 }

 if (VAR_33->tx_buf) {
  VAR_39 = VAR_33->tx_nbits;
  VAR_40 = VAR_30;
 } else {
  VAR_39 = VAR_33->rx_nbits;
  VAR_40 = VAR_29;
 }

 VAR_36 = VAR_32->mode;
 VAR_38 = VAR_32->chip_select;
 VAR_35 = VAR_33->speed_hz;
 VAR_37 = VAR_33->bits_per_word;


 if (VAR_35 == VAR_34->speed &&
  VAR_39 == VAR_34->bus_width && VAR_37 == VAR_34->bpw &&
  VAR_36 == VAR_34->mode && VAR_38 == VAR_34->cs &&
  VAR_40 == VAR_34->transfer_mode) {
  return 0;
 }

 VAR_34->transfer_mode = VAR_40;
 VAR_41 = VAR_31->max_speed_hz;

 VAR_43 = FUNC_0(VAR_41, VAR_35);
 if (VAR_43 > 254) {
  FUNC_2(VAR_34->dev, "Requested rate too low (%u)\n",
   VAR_34->speed);
  return -VAR_0;
 }

 VAR_42 = FUNC_3(VAR_34->regs + FUNC_1(VAR_38));
 VAR_42 &= ~VAR_22;
 if (VAR_37 == 8 && (VAR_36 & (VAR_7 | VAR_5)) && VAR_43 < 3)
  VAR_42 |= VAR_22;
 if (VAR_37 == 8 && (VAR_36 & (VAR_8 | VAR_6)) && VAR_43 < 6)
  VAR_42 |= VAR_22;
 if (VAR_37 == 16 && (VAR_36 & (VAR_8 | VAR_6)) && VAR_43 < 3)
  VAR_42 |= VAR_22;

 if (VAR_36 & VAR_1)
  VAR_42 |= VAR_19;
 else
  VAR_42 &= ~VAR_19;

 if (VAR_36 & VAR_2)
  VAR_42 |= VAR_20;
 else
  VAR_42 &= ~VAR_20;

 if (VAR_36 & VAR_3)
  VAR_42 |= VAR_26;
 else
  VAR_42 &= ~VAR_26;

 if (VAR_36 & VAR_4)
  VAR_42 |= VAR_23;
 else
  VAR_42 &= ~VAR_23;

 if (VAR_34->aces)
  VAR_42 |= VAR_16;
 else
  VAR_42 &= ~VAR_16;

 if (VAR_34->rtm)
  VAR_42 |= VAR_21;
 else
  VAR_42 &= ~VAR_21;

 VAR_42 |= (3 << VAR_25);
 VAR_42 |= VAR_24;

 VAR_42 &= ~(VAR_17 <<
   VAR_18);
 VAR_42 |= ((VAR_43 >> 1) << VAR_18);

 FUNC_5(VAR_42, VAR_34->regs + FUNC_1(VAR_38));

 VAR_42 = FUNC_3(VAR_34->regs + VAR_28);
 VAR_42 &= ~(VAR_14 <<
   VAR_15);
 VAR_42 |= ((VAR_37 / 8 - 1) << VAR_15);
 FUNC_5(VAR_42, VAR_34->regs + VAR_28);

 VAR_42 = FUNC_3(VAR_34->regs + VAR_27);
 VAR_42 &= ~(VAR_10 <<
   VAR_12);

 if (VAR_33->rx_buf)
  VAR_42 |= (VAR_11 <<
   VAR_12);
 else
  VAR_42 |= (VAR_13 <<
   VAR_12);

 VAR_42 &= ~(3 << VAR_9);
 VAR_42 |= ((VAR_39 >> 1) << VAR_9);
 FUNC_5(VAR_42, VAR_34->regs + VAR_27);

 VAR_34->bpw = VAR_37;
 VAR_34->mode = VAR_36;
 VAR_34->speed = VAR_35;
 VAR_34->cs = VAR_32->chip_select;
 VAR_34->bus_width = VAR_39;

 return 0;
}

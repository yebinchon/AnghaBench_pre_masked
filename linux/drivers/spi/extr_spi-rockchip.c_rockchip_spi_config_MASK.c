
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_transfer {int bits_per_word; int len; int speed_hz; scalar_t__ rx_buf; scalar_t__ tx_buf; } ;
struct spi_device {int mode; } ;
struct rockchip_spi {int rsd; int fifo_len; scalar_t__ regs; int freq; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ,int) ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_1 () ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct rockchip_spi *VAR_30,
  struct spi_device *VAR_31, struct spi_transfer *VAR_32,
  bool VAR_33)
{
 u32 VAR_34 = VAR_11 << VAR_10
         | VAR_0 << VAR_1
         | VAR_15 << VAR_14
         | VAR_6 << VAR_7;
 u32 VAR_35;
 u32 VAR_36 = 0;

 VAR_34 |= VAR_30->rsd << VAR_12;
 VAR_34 |= (VAR_31->mode & 0x3U) << VAR_13;
 if (VAR_31->mode & VAR_28)
  VAR_34 |= VAR_8 << VAR_9;

 if (VAR_32->rx_buf && VAR_32->tx_buf)
  VAR_34 |= VAR_19 << VAR_16;
 else if (VAR_32->rx_buf)
  VAR_34 |= VAR_17 << VAR_16;
 else if (VAR_33)
  VAR_34 |= VAR_18 << VAR_16;

 switch (VAR_32->bits_per_word) {
 case 4:
  VAR_34 |= VAR_3 << VAR_5;
  VAR_35 = VAR_32->len - 1;
  break;
 case 8:
  VAR_34 |= VAR_4 << VAR_5;
  VAR_35 = VAR_32->len - 1;
  break;
 case 16:
  VAR_34 |= VAR_2 << VAR_5;
  VAR_35 = VAR_32->len / 2 - 1;
  break;
 default:




  FUNC_1();
 }

 if (VAR_33) {
  if (VAR_32->tx_buf)
   VAR_36 |= VAR_29;
  if (VAR_32->rx_buf)
   VAR_36 |= VAR_20;
 }

 FUNC_2(VAR_34, VAR_30->regs + VAR_22);
 FUNC_2(VAR_35, VAR_30->regs + VAR_23);





 if (VAR_32->len < VAR_30->fifo_len)
  FUNC_2(VAR_32->len - 1, VAR_30->regs + VAR_27);
 else
  FUNC_2(VAR_30->fifo_len / 2 - 1, VAR_30->regs + VAR_27);

 FUNC_2(VAR_30->fifo_len / 2, VAR_30->regs + VAR_26);
 FUNC_2(0, VAR_30->regs + VAR_25);
 FUNC_2(VAR_36, VAR_30->regs + VAR_24);





 FUNC_2(2 * FUNC_0(VAR_30->freq, 2 * VAR_32->speed_hz),
   VAR_30->regs + VAR_21);
}

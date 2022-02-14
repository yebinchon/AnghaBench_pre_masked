
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct spi_transfer {int bits_per_word; scalar_t__ speed_hz; int len; scalar_t__ rx_buf; scalar_t__ tx_buf; } ;
struct spi_master {int dummy; } ;
struct geni_se {scalar_t__ base; } ;
struct spi_geni_master {int cur_bits_per_word; scalar_t__ cur_speed_hz; int tx_rem_bytes; int rx_rem_bytes; int tx_wm; int cur_mcmd; struct spi_transfer* cur_xfer; int dev; struct geni_se se; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct geni_se*,int,int ) ;
 int FUNC_2 (scalar_t__,struct spi_geni_master*,unsigned int*,unsigned int*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct spi_geni_master*,int ,int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct spi_transfer *VAR_18,
    struct spi_geni_master *VAR_19,
    u16 VAR_20, struct spi_master *VAR_21)
{
 u32 VAR_22 = 0;
 u32 VAR_23, VAR_24;
 struct geni_se *VAR_25 = &VAR_19->se;

 VAR_23 = FUNC_3(VAR_25->base + VAR_12);
 if (VAR_18->bits_per_word != VAR_19->cur_bits_per_word) {
  FUNC_4(VAR_19, VAR_20, VAR_18->bits_per_word);
  VAR_19->cur_bits_per_word = VAR_18->bits_per_word;
 }


 if (VAR_18->speed_hz != VAR_19->cur_speed_hz) {
  int VAR_26;
  u32 VAR_27, VAR_28;
  unsigned int VAR_29, VAR_30;

  VAR_26 = FUNC_2(VAR_18->speed_hz, VAR_19, &VAR_29, &VAR_30);
  if (VAR_26) {
   FUNC_0(VAR_19->dev, "Err setting clks:%d\n", VAR_26);
   return;
  }







  VAR_19->cur_speed_hz = VAR_18->speed_hz;
  VAR_27 = VAR_29 & VAR_2;
  VAR_28 = (VAR_30 << VAR_1) | VAR_8;
  FUNC_5(VAR_27, VAR_25->base + VAR_9);
  FUNC_5(VAR_28, VAR_25->base + VAR_6);
 }

 VAR_19->tx_rem_bytes = 0;
 VAR_19->rx_rem_bytes = 0;
 if (VAR_18->tx_buf && VAR_18->rx_buf)
  VAR_22 = VAR_14;
 else if (VAR_18->tx_buf)
  VAR_22 = VAR_16;
 else if (VAR_18->rx_buf)
  VAR_22 = VAR_15;

 VAR_23 &= ~VAR_4;

 if (!(VAR_19->cur_bits_per_word % VAR_7))
  VAR_24 = VAR_18->len * VAR_0 / VAR_19->cur_bits_per_word;
 else
  VAR_24 = VAR_18->len / (VAR_19->cur_bits_per_word / VAR_0 + 1);
 VAR_24 &= VAR_17;

 VAR_19->cur_xfer = VAR_18;
 if (VAR_22 & VAR_16) {
  VAR_19->tx_rem_bytes = VAR_18->len;
  FUNC_5(VAR_24, VAR_25->base + VAR_13);
 }

 if (VAR_22 & VAR_15) {
  FUNC_5(VAR_24, VAR_25->base + VAR_11);
  VAR_19->rx_rem_bytes = VAR_18->len;
 }
 FUNC_5(VAR_23, VAR_25->base + VAR_12);
 VAR_19->cur_mcmd = VAR_3;
 FUNC_1(VAR_25, VAR_22, VAR_5);






 if (VAR_22 & VAR_16)
  FUNC_5(VAR_19->tx_wm, VAR_25->base + VAR_10);
}

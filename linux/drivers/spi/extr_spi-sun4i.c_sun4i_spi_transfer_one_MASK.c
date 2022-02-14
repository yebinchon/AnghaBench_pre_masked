
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun4i_spi {unsigned int len; int done; scalar_t__ tx_buf; int mclk; scalar_t__ rx_buf; } ;
struct spi_transfer {unsigned int len; int speed_hz; scalar_t__ rx_buf; scalar_t__ tx_buf; } ;
struct spi_master {int dev; } ;
struct spi_device {int mode; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 int VAR_5 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 unsigned int VAR_23 ;
 int FUNC_3 (unsigned int) ;
 int VAR_24 ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int ,int,int,int ,unsigned int) ;
 unsigned int FUNC_8 (unsigned int) ;
 unsigned int VAR_25 ;
 int FUNC_9 (unsigned int) ;
 unsigned int FUNC_10 (int,unsigned int) ;
 int FUNC_11 (unsigned int) ;
 int FUNC_12 (int *) ;
 struct sun4i_spi* FUNC_13 (struct spi_master*) ;
 int FUNC_14 (struct sun4i_spi*,int) ;
 int FUNC_15 (struct sun4i_spi*,int) ;
 int FUNC_16 (struct sun4i_spi*,int ) ;
 int FUNC_17 (struct sun4i_spi*,int ,int) ;
 unsigned int FUNC_18 (int *,int ) ;

__attribute__((used)) static int FUNC_19(struct spi_master *VAR_26,
      struct spi_device *VAR_27,
      struct spi_transfer *VAR_28)
{
 struct sun4i_spi *VAR_29 = FUNC_13(VAR_26);
 unsigned int VAR_30, VAR_31, VAR_32;
 unsigned int VAR_33, VAR_34, VAR_35;
 unsigned int VAR_36 = 0;
 int VAR_37 = 0;
 u32 VAR_38;


 if (VAR_28->len > VAR_23)
  return -VAR_0;

 if (VAR_28->tx_buf && VAR_28->len >= VAR_23)
  return -VAR_0;

 FUNC_12(&VAR_29->done);
 VAR_29->tx_buf = VAR_28->tx_buf;
 VAR_29->rx_buf = VAR_28->rx_buf;
 VAR_29->len = VAR_28->len;


 FUNC_17(VAR_29, VAR_22, ~0);


 VAR_38 = FUNC_16(VAR_29, VAR_13);


 FUNC_17(VAR_29, VAR_13,
   VAR_38 | VAR_14 | VAR_15);





 if (VAR_27->mode & VAR_3)
  VAR_38 |= VAR_10;
 else
  VAR_38 &= ~VAR_10;

 if (VAR_27->mode & VAR_2)
  VAR_38 |= VAR_9;
 else
  VAR_38 &= ~VAR_9;

 if (VAR_27->mode & VAR_4)
  VAR_38 |= VAR_12;
 else
  VAR_38 &= ~VAR_12;






 if (VAR_29->rx_buf)
  VAR_38 &= ~VAR_11;
 else
  VAR_38 |= VAR_11;

 FUNC_17(VAR_29, VAR_13, VAR_38);


 VAR_30 = FUNC_4(VAR_29->mclk);
 if (VAR_30 < (2 * VAR_28->speed_hz)) {
  FUNC_5(VAR_29->mclk, 2 * VAR_28->speed_hz);
  VAR_30 = FUNC_4(VAR_29->mclk);
 }
 VAR_31 = VAR_30 / (2 * VAR_28->speed_hz);
 if (VAR_31 <= (VAR_6 + 1)) {
  if (VAR_31 > 0)
   VAR_31--;

  VAR_38 = FUNC_2(VAR_31) | VAR_7;
 } else {
  VAR_31 = FUNC_8(VAR_30) - FUNC_8(VAR_28->speed_hz);
  VAR_38 = FUNC_1(VAR_31);
 }

 FUNC_17(VAR_29, VAR_8, VAR_38);


 if (VAR_29->tx_buf)
  VAR_36 = VAR_28->len;


 FUNC_17(VAR_29, VAR_5, FUNC_0(VAR_28->len));
 FUNC_17(VAR_29, VAR_24, FUNC_3(VAR_36));






 FUNC_15(VAR_29, VAR_17 - 1);


 FUNC_14(VAR_29, VAR_20 |
      VAR_19);

 if (VAR_36 > VAR_17)
  FUNC_14(VAR_29, VAR_21);


 VAR_38 = FUNC_16(VAR_29, VAR_13);
 FUNC_17(VAR_29, VAR_13, VAR_38 | VAR_16);

 VAR_35 = FUNC_10(VAR_28->len * 8 * 2 / (VAR_28->speed_hz / 1000), 100U);
 VAR_33 = VAR_25;
 VAR_32 = FUNC_18(&VAR_29->done,
           FUNC_11(VAR_35));
 VAR_34 = VAR_25;
 if (!VAR_32) {
  FUNC_7(&VAR_26->dev,
    "%s: timeout transferring %u bytes@%iHz for %i(%i)ms",
    FUNC_6(&VAR_27->dev), VAR_28->len, VAR_28->speed_hz,
    FUNC_9(VAR_34 - VAR_33), VAR_35);
  VAR_37 = -VAR_1;
  goto out;
 }


out:
 FUNC_17(VAR_29, VAR_18, 0);

 return VAR_37;
}

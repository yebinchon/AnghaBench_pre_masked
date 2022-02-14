
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct sun6i_spi {unsigned int len; int fifo_depth; int done; scalar_t__ tx_buf; int mclk; scalar_t__ rx_buf; } ;
struct spi_transfer {unsigned int len; int speed_hz; scalar_t__ rx_buf; scalar_t__ tx_buf; } ;
struct spi_master {int dev; } ;
struct spi_device {int mode; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int FUNC_4 (unsigned int) ;
 int VAR_28 ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int ,int,int,int ,unsigned int) ;
 unsigned int FUNC_9 (unsigned int) ;
 unsigned int VAR_29 ;
 int FUNC_10 (unsigned int) ;
 unsigned int FUNC_11 (int,unsigned int) ;
 int FUNC_12 (unsigned int) ;
 int FUNC_13 (int *) ;
 struct sun6i_spi* FUNC_14 (struct spi_master*) ;
 int FUNC_15 (struct sun6i_spi*,unsigned int) ;
 int FUNC_16 (struct sun6i_spi*,int) ;
 unsigned int FUNC_17 (struct sun6i_spi*,int ) ;
 int FUNC_18 (struct sun6i_spi*,int ,unsigned int) ;
 unsigned int FUNC_19 (int *,int ) ;

__attribute__((used)) static int FUNC_20(struct spi_master *VAR_30,
      struct spi_device *VAR_31,
      struct spi_transfer *VAR_32)
{
 struct sun6i_spi *VAR_33 = FUNC_14(VAR_30);
 unsigned int VAR_34, VAR_35, VAR_36;
 unsigned int VAR_37, VAR_38, VAR_39;
 unsigned int VAR_40;
 unsigned int VAR_41 = 0;
 int VAR_42 = 0;
 u32 VAR_43;

 if (VAR_32->len > VAR_20)
  return -VAR_0;

 FUNC_13(&VAR_33->done);
 VAR_33->tx_buf = VAR_32->tx_buf;
 VAR_33->rx_buf = VAR_32->rx_buf;
 VAR_33->len = VAR_32->len;


 FUNC_18(VAR_33, VAR_19, ~0);


 FUNC_18(VAR_33, VAR_10,
   VAR_12 | VAR_14);







 VAR_40 = VAR_33->fifo_depth / 4 * 3;
 FUNC_18(VAR_33, VAR_10,
   (VAR_40 << VAR_11) |
   (VAR_40 << VAR_13));





 VAR_43 = FUNC_17(VAR_33, VAR_26);

 if (VAR_31->mode & VAR_3)
  VAR_43 |= VAR_22;
 else
  VAR_43 &= ~VAR_22;

 if (VAR_31->mode & VAR_2)
  VAR_43 |= VAR_21;
 else
  VAR_43 &= ~VAR_21;

 if (VAR_31->mode & VAR_4)
  VAR_43 |= VAR_25;
 else
  VAR_43 &= ~VAR_25;





 if (VAR_33->rx_buf)
  VAR_43 &= ~VAR_24;
 else
  VAR_43 |= VAR_24;


 VAR_43 |= VAR_23;

 FUNC_18(VAR_33, VAR_26, VAR_43);


 VAR_34 = FUNC_5(VAR_33->mclk);
 if (VAR_34 < (2 * VAR_32->speed_hz)) {
  FUNC_6(VAR_33->mclk, 2 * VAR_32->speed_hz);
  VAR_34 = FUNC_5(VAR_33->mclk);
 }
 VAR_35 = VAR_34 / (2 * VAR_32->speed_hz);
 if (VAR_35 <= (VAR_7 + 1)) {
  if (VAR_35 > 0)
   VAR_35--;

  VAR_43 = FUNC_3(VAR_35) | VAR_8;
 } else {
  VAR_35 = FUNC_9(VAR_34) - FUNC_9(VAR_32->speed_hz);
  VAR_43 = FUNC_2(VAR_35);
 }

 FUNC_18(VAR_33, VAR_9, VAR_43);


 if (VAR_33->tx_buf)
  VAR_41 = VAR_32->len;


 FUNC_18(VAR_33, VAR_5, FUNC_0(VAR_32->len));
 FUNC_18(VAR_33, VAR_28, FUNC_4(VAR_41));
 FUNC_18(VAR_33, VAR_6,
   FUNC_1(VAR_41));


 FUNC_16(VAR_33, VAR_33->fifo_depth);


 FUNC_18(VAR_33, VAR_15, VAR_17);
 FUNC_15(VAR_33, VAR_17 |
      VAR_16);
 if (VAR_41 > VAR_33->fifo_depth)
  FUNC_15(VAR_33, VAR_18);


 VAR_43 = FUNC_17(VAR_33, VAR_26);
 FUNC_18(VAR_33, VAR_26, VAR_43 | VAR_27);

 VAR_39 = FUNC_11(VAR_32->len * 8 * 2 / (VAR_32->speed_hz / 1000), 100U);
 VAR_37 = VAR_29;
 VAR_36 = FUNC_19(&VAR_33->done,
           FUNC_12(VAR_39));
 VAR_38 = VAR_29;
 if (!VAR_36) {
  FUNC_8(&VAR_30->dev,
    "%s: timeout transferring %u bytes@%iHz for %i(%i)ms",
    FUNC_7(&VAR_31->dev), VAR_32->len, VAR_32->speed_hz,
    FUNC_10(VAR_38 - VAR_37), VAR_39);
  VAR_42 = -VAR_1;
  goto out;
 }

out:
 FUNC_18(VAR_33, VAR_15, 0);

 return VAR_42;
}

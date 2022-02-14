
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_transfer {int bits_per_word; unsigned int tx_nbits; unsigned int rx_nbits; scalar_t__ tx_buf; scalar_t__ rx_buf; } ;
struct spi_master {int dummy; } ;
struct spi_device {int dev; } ;
struct a3700_spi {int buf_len; int xmit_data; scalar_t__ tx_buf; scalar_t__ rx_buf; } ;


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
 int FUNC_0 (struct a3700_spi*) ;
 int FUNC_1 (struct a3700_spi*,int) ;
 int FUNC_2 (struct a3700_spi*) ;
 int FUNC_3 (struct a3700_spi*,unsigned int) ;
 int FUNC_4 (struct a3700_spi*) ;
 int FUNC_5 (struct a3700_spi*) ;
 int FUNC_6 (struct a3700_spi*,unsigned int,int) ;
 int FUNC_7 (struct a3700_spi*) ;
 int FUNC_8 (struct spi_device*,int ) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (struct spi_master*) ;
 struct a3700_spi* FUNC_11 (struct spi_master*) ;
 int FUNC_12 (struct a3700_spi*,int ) ;
 int FUNC_13 (struct a3700_spi*,int ,int) ;
 int FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct spi_master *VAR_12,
      struct spi_device *VAR_13,
      struct spi_transfer *VAR_14)
{
 struct a3700_spi *VAR_15 = FUNC_11(VAR_12);
 int VAR_16 = 0, VAR_17 = VAR_5;
 unsigned int VAR_18 = 0, VAR_19;
 u32 VAR_20;


 FUNC_1(VAR_15, 1);


 VAR_19 = VAR_14->bits_per_word >> 3;
 FUNC_3(VAR_15, VAR_19);

 if (VAR_14->tx_buf)
  VAR_18 = VAR_14->tx_nbits;
 else if (VAR_14->rx_buf)
  VAR_18 = VAR_14->rx_nbits;

 FUNC_6(VAR_15, VAR_18, VAR_14->rx_buf ? 1 : 0);


 FUNC_0(VAR_15);


 FUNC_5(VAR_15);

 if (VAR_14->rx_buf) {



  FUNC_13(VAR_15, VAR_0, 0);


  FUNC_13(VAR_15, VAR_2,
        VAR_15->buf_len);

  VAR_20 = FUNC_12(VAR_15, VAR_1);
  VAR_20 &= ~VAR_4;
  VAR_20 |= VAR_9;
  FUNC_13(VAR_15, VAR_1, VAR_20);
 } else if (VAR_14->tx_buf) {

  VAR_20 = FUNC_12(VAR_15, VAR_1);
  VAR_20 |= (VAR_9 | VAR_4);
  FUNC_13(VAR_15, VAR_1, VAR_20);







  VAR_15->xmit_data = (VAR_15->buf_len != 0);
 }

 while (VAR_15->buf_len) {
  if (VAR_15->tx_buf) {

   if (!FUNC_8(VAR_13,
           VAR_7)) {
    FUNC_9(&VAR_13->dev,
     "wait wfifo ready timed out\n");
    VAR_16 = -VAR_11;
    goto error;
   }

   VAR_16 = FUNC_4(VAR_15);
   if (VAR_16)
    goto error;
  } else if (VAR_15->rx_buf) {

   if (!FUNC_8(VAR_13,
           VAR_3)) {
    FUNC_9(&VAR_13->dev,
     "wait rfifo ready timed out\n");
    VAR_16 = -VAR_11;
    goto error;
   }

   VAR_16 = FUNC_2(VAR_15);
   if (VAR_16)
    goto error;
  }
 }
 if (VAR_15->tx_buf) {
  if (VAR_15->xmit_data) {





   if (!FUNC_8(VAR_13,
           VAR_6)) {
    FUNC_9(&VAR_13->dev, "wait wfifo empty timed out\n");
    return -VAR_11;
   }
  }

  if (!FUNC_8(VAR_13, VAR_8)) {
   FUNC_9(&VAR_13->dev, "wait xfer ready timed out\n");
   return -VAR_11;
  }

  VAR_20 = FUNC_12(VAR_15, VAR_1);
  VAR_20 |= VAR_10;
  FUNC_13(VAR_15, VAR_1, VAR_20);
 }

 while (--VAR_17) {
  VAR_20 = FUNC_12(VAR_15, VAR_1);
  if (!(VAR_20 & VAR_9))
   break;
  FUNC_14(1);
 }

 if (VAR_17 == 0) {
  FUNC_9(&VAR_13->dev, "wait transfer start clear timed out\n");
  VAR_16 = -VAR_11;
  goto error;
 }

 VAR_20 &= ~VAR_10;
 FUNC_13(VAR_15, VAR_1, VAR_20);
 goto out;

error:
 FUNC_7(VAR_15);
out:
 FUNC_10(VAR_12);

 return VAR_16;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int fragmens_len; int width; } ;
struct sprd_spi {int len; int trans_len; int trans_mode; int write_bufs; scalar_t__ base; TYPE_1__ dma; int read_bufs; int hw_mode; scalar_t__ rx_buf; scalar_t__ tx_buf; } ;
struct spi_transfer {int bits_per_word; int len; scalar_t__ rx_buf; scalar_t__ tx_buf; int speed_hz; } ;
struct spi_device {int mode; int controller; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int) ;
 struct sprd_spi* FUNC_2 (int ) ;
 int FUNC_3 (struct sprd_spi*,struct spi_transfer*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct sprd_spi*,int ) ;
 int FUNC_5 (struct sprd_spi*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct spi_device *VAR_16,
       struct spi_transfer *VAR_17)
{
 struct sprd_spi *VAR_18 = FUNC_2(VAR_16->controller);
 u8 VAR_19 = VAR_17->bits_per_word;
 u32 VAR_20, VAR_21 = 0;

 VAR_18->len = VAR_17->len;
 VAR_18->tx_buf = VAR_17->tx_buf;
 VAR_18->rx_buf = VAR_17->rx_buf;

 VAR_18->hw_mode = VAR_16->mode;
 FUNC_3(VAR_18, VAR_17);


 FUNC_4(VAR_18, VAR_17->speed_hz);
 FUNC_5(VAR_18, VAR_19);

 if (VAR_19 > 16)
  VAR_19 = FUNC_1(VAR_19, 16);
 else
  VAR_19 = FUNC_1(VAR_19, 8);

 switch (VAR_19) {
 case 8:
  VAR_18->trans_len = VAR_17->len;
  VAR_18->read_bufs = VAR_11;
  VAR_18->write_bufs = VAR_14;
  VAR_18->dma.width = VAR_0;
  VAR_18->dma.fragmens_len = VAR_5;
  break;
 case 16:
  VAR_18->trans_len = VAR_17->len >> 1;
  VAR_18->read_bufs = VAR_9;
  VAR_18->write_bufs = VAR_12;
  VAR_18->dma.width = VAR_1;
  VAR_18->dma.fragmens_len = VAR_5 << 1;
  break;
 case 32:
  VAR_18->trans_len = VAR_17->len >> 2;
  VAR_18->read_bufs = VAR_10;
  VAR_18->write_bufs = VAR_13;
  VAR_18->dma.width = VAR_2;
  VAR_18->dma.fragmens_len = VAR_5 << 2;
  break;
 default:
  return -VAR_3;
 }


 VAR_20 = FUNC_0(VAR_18->base + VAR_4);
 VAR_20 &= ~VAR_6;
 if (VAR_17->tx_buf)
  VAR_21 |= VAR_8;
 if (VAR_17->rx_buf)
  VAR_21 |= VAR_7;

 FUNC_6(VAR_20 | VAR_21, VAR_18->base + VAR_4);

 VAR_18->trans_mode = VAR_21;





 if (VAR_18->trans_mode == VAR_7)
  VAR_18->write_bufs = VAR_15;

 return 0;
}

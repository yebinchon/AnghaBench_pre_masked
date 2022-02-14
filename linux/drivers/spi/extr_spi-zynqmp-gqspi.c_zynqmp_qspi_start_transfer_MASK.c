
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct zynqmp_qspi {int genfifocs; int genfifobus; scalar_t__ mode; int dma_rx_bytes; int genfifoentry; int * rxbuf; int * txbuf; } ;
struct spi_transfer {int len; int * rx_buf; int * tx_buf; } ;
struct spi_master {int dummy; } ;
struct spi_device {int dummy; } ;


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
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct zynqmp_qspi* FUNC_0 (struct spi_master*) ;
 int FUNC_1 (struct zynqmp_qspi*,int ) ;
 int FUNC_2 (struct zynqmp_qspi*,int ,int) ;
 int FUNC_3 (struct spi_device*,struct spi_transfer*) ;
 int FUNC_4 (struct zynqmp_qspi*,struct spi_transfer*,int*) ;

__attribute__((used)) static int FUNC_5(struct spi_master *VAR_16,
          struct spi_device *VAR_17,
          struct spi_transfer *VAR_18)
{
 struct zynqmp_qspi *VAR_19 = FUNC_0(VAR_16);
 u32 VAR_20 = 0x0, VAR_21;

 VAR_19->txbuf = VAR_18->tx_buf;
 VAR_19->rxbuf = VAR_18->rx_buf;

 FUNC_3(VAR_17, VAR_18);

 VAR_20 |= VAR_19->genfifocs;
 VAR_20 |= VAR_19->genfifobus;

 FUNC_4(VAR_19, VAR_18, &VAR_20);

 if (VAR_19->mode == VAR_12)
  VAR_21 = VAR_19->dma_rx_bytes;
 else
  VAR_21 = VAR_18->len;

 VAR_19->genfifoentry = VAR_20;
 if ((VAR_21) < VAR_4) {
  VAR_20 &= ~VAR_4;
  VAR_20 |= VAR_21;
  FUNC_2(VAR_19, VAR_5, VAR_20);
 } else {
  int VAR_22 = VAR_21;
  u32 VAR_23 = 8;
  u8 VAR_24 = VAR_22 & 0xFF;

  VAR_22 &= ~(VAR_22 & 0xFF);

  if (VAR_22 != 0) {

   VAR_20 |= VAR_2;
   while (VAR_22 != 0) {
    if (VAR_22 & VAR_3) {
     VAR_20 &=
         ~VAR_4;
     VAR_20 |= VAR_23;
     FUNC_2(VAR_19,
          VAR_5,
          VAR_20);
    }
    VAR_22 = VAR_22 >> 1;
    VAR_23++;
   }
  }
  if (VAR_24 != 0) {
   VAR_20 &= ~VAR_2;
   VAR_20 &= ~VAR_4;
   VAR_20 |= (u8) (VAR_24 & 0xFF);
   FUNC_2(VAR_19,
        VAR_5, VAR_20);
  }
 }

 if ((VAR_19->mode == VAR_13) &&
   (VAR_19->rxbuf != ((void*)0))) {

  FUNC_2(VAR_19, VAR_5, 0x0);
 }


 FUNC_2(VAR_19, VAR_1,
      FUNC_1(VAR_19, VAR_1) |
      VAR_0);

 if (VAR_19->txbuf != ((void*)0))

  FUNC_2(VAR_19, VAR_7,
       VAR_10 |
     VAR_6 |
     VAR_11);

 if (VAR_19->rxbuf != ((void*)0)) {

  if (VAR_19->mode == VAR_12) {

   FUNC_2(VAR_19,
     VAR_15,
     VAR_14);
  } else {
   FUNC_2(VAR_19, VAR_7,
     VAR_6 |
     VAR_9 |
     VAR_8);
  }
 }

 return VAR_18->len;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int tx_dma; int len; void* rx_buf; int rx_dma; scalar_t__ tx_buf; } ;
struct spi_device {int dummy; } ;
struct spi_controller {int dummy; } ;
struct mtk_spi_slave {scalar_t__ base; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* FUNC_0 (struct device*,void*,int,int ) ;
 scalar_t__ FUNC_1 (struct device*,int) ;
 int FUNC_2 (struct device*,int,int,int ) ;
 int FUNC_3 (struct mtk_spi_slave*) ;
 int FUNC_4 (struct mtk_spi_slave*) ;
 int FUNC_5 (struct mtk_spi_slave*) ;
 int FUNC_6 (scalar_t__) ;
 struct mtk_spi_slave* FUNC_7 (struct spi_controller*) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct spi_controller *VAR_16,
          struct spi_device *VAR_17,
          struct spi_transfer *VAR_18)
{
 struct mtk_spi_slave *VAR_19 = FUNC_7(VAR_16);
 struct device *VAR_20 = VAR_19->dev;
 int VAR_21, VAR_22;

 FUNC_8(VAR_9, VAR_19->base + VAR_10);

 if (VAR_18->tx_buf) {



  void *VAR_23 = (void *)VAR_18->tx_buf;

  VAR_18->tx_dma = FUNC_0(VAR_20, VAR_23,
           VAR_18->len, VAR_1);
  if (FUNC_1(VAR_20, VAR_18->tx_dma)) {
   VAR_22 = -VAR_2;
   goto disable_transfer;
  }
 }

 if (VAR_18->rx_buf) {
  VAR_18->rx_dma = FUNC_0(VAR_20, VAR_18->rx_buf,
           VAR_18->len, VAR_0);
  if (FUNC_1(VAR_20, VAR_18->rx_dma)) {
   VAR_22 = -VAR_2;
   goto unmap_txdma;
  }
 }

 FUNC_8(VAR_18->tx_dma, VAR_19->base + VAR_12);
 FUNC_8(VAR_18->rx_dma, VAR_19->base + VAR_7);

 FUNC_8(VAR_5, VAR_19->base + VAR_10);


 VAR_21 = FUNC_6(VAR_19->base + VAR_4);
 if (VAR_18->tx_buf)
  VAR_21 |= VAR_11;
 if (VAR_18->rx_buf)
  VAR_21 |= VAR_8;
 FUNC_8(VAR_21, VAR_19->base + VAR_4);


 VAR_21 = 0;
 VAR_21 |= (VAR_18->len - 1) & VAR_14;
 FUNC_8(VAR_21, VAR_19->base + VAR_6);

 VAR_21 = FUNC_6(VAR_19->base + VAR_6);
 if (VAR_18->tx_buf)
  VAR_21 |= VAR_13;
 if (VAR_18->rx_buf)
  VAR_21 |= VAR_3;
 VAR_21 |= VAR_15;
 FUNC_8(VAR_21, VAR_19->base + VAR_6);

 VAR_22 = FUNC_5(VAR_19);
 if (VAR_22)
  goto unmap_rxdma;

 return 0;

unmap_rxdma:
 if (VAR_18->rx_buf)
  FUNC_2(VAR_20, VAR_18->rx_dma,
     VAR_18->len, VAR_0);

unmap_txdma:
 if (VAR_18->tx_buf)
  FUNC_2(VAR_20, VAR_18->tx_dma,
     VAR_18->len, VAR_1);

disable_transfer:
 FUNC_3(VAR_19);
 FUNC_4(VAR_19);
 FUNC_8(VAR_9, VAR_19->base + VAR_10);

 return VAR_22;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_transfer {int len; scalar_t__ rx_buf; int rx_dma; int tx_dma; scalar_t__ tx_buf; } ;
struct spi_controller {int dev; } ;
struct mtk_spi_slave {int xfer_done; struct spi_transfer* cur_transfer; scalar_t__ base; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;
 int FUNC_4 (scalar_t__,int*,int) ;
 int FUNC_5 (struct mtk_spi_slave*) ;
 int FUNC_6 (struct mtk_spi_slave*) ;
 int FUNC_7 (scalar_t__) ;
 struct mtk_spi_slave* FUNC_8 (struct spi_controller*) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_13, void *VAR_14)
{
 struct spi_controller *VAR_15 = VAR_14;
 struct mtk_spi_slave *VAR_16 = FUNC_8(VAR_15);
 struct spi_transfer *VAR_17 = VAR_16->cur_transfer;
 u32 VAR_18, VAR_19, VAR_20, VAR_21;

 VAR_18 = FUNC_7(VAR_16->base + VAR_9);
 FUNC_9(VAR_18, VAR_16->base + VAR_8);

 if (!VAR_17)
  return VAR_6;

 if ((VAR_18 & VAR_2) &&
     ((VAR_18 & VAR_1) ||
     (VAR_18 & VAR_7))) {
  FUNC_9(VAR_11, VAR_16->base + VAR_12);

  if (VAR_17->tx_buf)
   FUNC_2(VAR_16->dev, VAR_17->tx_dma,
      VAR_17->len, VAR_4);
  if (VAR_17->rx_buf)
   FUNC_2(VAR_16->dev, VAR_17->rx_dma,
      VAR_17->len, VAR_3);

  FUNC_5(VAR_16);
  FUNC_6(VAR_16);
 }

 if ((!(VAR_18 & VAR_2)) &&
     ((VAR_18 & VAR_1) ||
     (VAR_18 & VAR_7))) {
  VAR_20 = VAR_17->len / 4;
  if (VAR_17->rx_buf)
   FUNC_3(VAR_16->base + VAR_10,
         VAR_17->rx_buf, VAR_20);
  VAR_21 = VAR_17->len % 4;
  if (VAR_17->rx_buf && VAR_21 > 0) {
   VAR_19 = FUNC_7(VAR_16->base + VAR_10);
   FUNC_4(VAR_17->rx_buf + (VAR_20 * 4),
          &VAR_19, VAR_21);
  }

  FUNC_6(VAR_16);
 }

 if (VAR_18 & VAR_0) {
  FUNC_1(&VAR_15->dev, "cmd invalid\n");
  return VAR_6;
 }

 VAR_16->cur_transfer = ((void*)0);
 FUNC_0(&VAR_16->xfer_done);

 return VAR_5;
}

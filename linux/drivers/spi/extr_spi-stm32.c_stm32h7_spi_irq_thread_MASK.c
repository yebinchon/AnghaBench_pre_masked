
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_spi {scalar_t__ rx_len; scalar_t__ tx_len; int lock; scalar_t__ base; scalar_t__ rx_buf; scalar_t__ cur_usedma; scalar_t__ tx_buf; int dev; } ;
struct spi_master {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct spi_master*) ;
 struct stm32_spi* FUNC_4 (struct spi_master*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct stm32_spi*) ;
 int FUNC_8 (struct stm32_spi*,int) ;
 int FUNC_9 (struct stm32_spi*) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_11, void *VAR_12)
{
 struct spi_master *VAR_13 = VAR_12;
 struct stm32_spi *VAR_14 = FUNC_4(VAR_13);
 u32 VAR_15, VAR_16, VAR_17;
 unsigned long VAR_18;
 bool VAR_19 = 0;

 FUNC_5(&VAR_14->lock, VAR_18);

 VAR_15 = FUNC_2(VAR_14->base + VAR_4);
 VAR_16 = FUNC_2(VAR_14->base + VAR_2);

 VAR_17 = VAR_16;

 VAR_17 |= VAR_9;





 if (VAR_14->rx_buf && !VAR_14->cur_usedma)
  VAR_17 |= VAR_8;

 if (!(VAR_15 & VAR_17)) {
  FUNC_0(VAR_14->dev, "spurious IT (sr=0x%08x, ier=0x%08x)\n",
   VAR_15, VAR_16);
  FUNC_6(&VAR_14->lock, VAR_18);
  return VAR_1;
 }

 if (VAR_15 & VAR_9) {
  FUNC_1(VAR_14->dev, "Communication suspended\n");
  if (!VAR_14->cur_usedma && (VAR_14->rx_buf && (VAR_14->rx_len > 0)))
   FUNC_8(VAR_14, 0);




  if (VAR_14->cur_usedma)
   VAR_19 = 1;
 }

 if (VAR_15 & VAR_6) {
  FUNC_1(VAR_14->dev, "Mode fault: transfer aborted\n");
  VAR_19 = 1;
 }

 if (VAR_15 & VAR_7) {
  FUNC_1(VAR_14->dev, "Overrun: received value discarded\n");
  if (!VAR_14->cur_usedma && (VAR_14->rx_buf && (VAR_14->rx_len > 0)))
   FUNC_8(VAR_14, 0);




  if (VAR_14->cur_usedma)
   VAR_19 = 1;
 }

 if (VAR_15 & VAR_5) {
  if (!VAR_14->cur_usedma && (VAR_14->rx_buf && (VAR_14->rx_len > 0)))
   FUNC_8(VAR_14, 1);
  VAR_19 = 1;
 }

 if (VAR_15 & VAR_10)
  if (!VAR_14->cur_usedma && (VAR_14->tx_buf && (VAR_14->tx_len > 0)))
   FUNC_9(VAR_14);

 if (VAR_15 & VAR_8)
  if (!VAR_14->cur_usedma && (VAR_14->rx_buf && (VAR_14->rx_len > 0)))
   FUNC_8(VAR_14, 0);

 FUNC_10(VAR_17, VAR_14->base + VAR_3);

 FUNC_6(&VAR_14->lock, VAR_18);

 if (VAR_19) {
  FUNC_3(VAR_13);
  FUNC_7(VAR_14);
 }

 return VAR_0;
}

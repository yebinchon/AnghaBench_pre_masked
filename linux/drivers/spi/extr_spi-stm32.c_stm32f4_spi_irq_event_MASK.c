
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_spi {scalar_t__ cur_comm; scalar_t__ tx_len; scalar_t__ rx_len; int lock; scalar_t__ tx_buf; scalar_t__ base; int dev; int cur_usedma; } ;
struct spi_master {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 struct stm32_spi* FUNC_3 (struct spi_master*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct stm32_spi*,int ,int) ;
 int FUNC_7 (struct stm32_spi*) ;
 int FUNC_8 (struct stm32_spi*) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_16, void *VAR_17)
{
 struct spi_master *VAR_18 = VAR_17;
 struct stm32_spi *VAR_19 = FUNC_3(VAR_18);
 u32 VAR_20, VAR_21 = 0;
 unsigned long VAR_22;
 bool VAR_23 = 0;

 FUNC_4(&VAR_19->lock, VAR_22);

 VAR_20 = FUNC_2(VAR_19->base + VAR_11);




 VAR_20 &= ~VAR_12;

 if (!VAR_19->cur_usedma && (VAR_19->cur_comm == VAR_5 ||
     VAR_19->cur_comm == VAR_3)) {

  VAR_20 &= ~VAR_13 | VAR_14;
  VAR_21 |= VAR_15;
 }

 if (!VAR_19->cur_usedma && VAR_19->cur_comm == VAR_4) {

  VAR_20 &= ~VAR_15;
  VAR_21 |= VAR_14 | VAR_13;
 }

 if (!(VAR_20 & VAR_21)) {
  FUNC_0(VAR_19->dev, "spurious IT (sr=0x%08x)\n", VAR_20);
  FUNC_5(&VAR_19->lock, VAR_22);
  return VAR_1;
 }

 if (VAR_20 & VAR_13) {
  FUNC_1(VAR_19->dev, "Overrun: received value discarded\n");


  FUNC_2(VAR_19->base + VAR_10);
  FUNC_2(VAR_19->base + VAR_11);






  VAR_23 = 1;
  goto end_irq;
 }

 if (VAR_20 & VAR_15) {
  if (VAR_19->tx_buf)
   FUNC_8(VAR_19);
  if (VAR_19->tx_len == 0)
   VAR_23 = 1;
 }

 if (VAR_20 & VAR_14) {
  FUNC_7(VAR_19);
  if (VAR_19->rx_len == 0)
   VAR_23 = 1;
  else
   FUNC_8(VAR_19);
 }

end_irq:
 if (VAR_23) {

  FUNC_6(VAR_19, VAR_6,
     VAR_9 |
     VAR_8 |
     VAR_7);
  FUNC_5(&VAR_19->lock, VAR_22);
  return VAR_2;
 }

 FUNC_5(&VAR_19->lock, VAR_22);
 return VAR_0;
}

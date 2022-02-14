
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_spi {scalar_t__ rx_len; int lock; scalar_t__ base; scalar_t__ dma_rx; scalar_t__ cur_usedma; scalar_t__ dma_tx; scalar_t__ rx_buf; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int,int,int,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct stm32_spi*,scalar_t__,int) ;
 int FUNC_8 (struct stm32_spi*,int) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct stm32_spi *VAR_13)
{
 unsigned long VAR_14;
 u32 VAR_15, VAR_16;

 FUNC_0(VAR_13->dev, "disable controller\n");

 FUNC_5(&VAR_13->lock, VAR_14);

 VAR_15 = FUNC_3(VAR_13->base + VAR_3);

 if (!(VAR_15 & VAR_6)) {
  FUNC_6(&VAR_13->lock, VAR_14);
  return;
 }


 if (FUNC_4(VAR_13->base + VAR_10,
           VAR_16, !(VAR_16 & VAR_11),
           10, 100000) < 0) {
  if (VAR_15 & VAR_4) {
   FUNC_9(VAR_15 | VAR_5,
           VAR_13->base + VAR_3);
   if (FUNC_4(
      VAR_13->base + VAR_10,
      VAR_16, !(VAR_16 & VAR_12),
      10, 100000) < 0)
    FUNC_1(VAR_13->dev,
      "Suspend request timeout\n");
  }
 }

 if (!VAR_13->cur_usedma && VAR_13->rx_buf && (VAR_13->rx_len > 0))
  FUNC_8(VAR_13, 1);

 if (VAR_13->cur_usedma && VAR_13->dma_tx)
  FUNC_2(VAR_13->dma_tx);
 if (VAR_13->cur_usedma && VAR_13->dma_rx)
  FUNC_2(VAR_13->dma_rx);

 FUNC_7(VAR_13, VAR_3, VAR_6);

 FUNC_7(VAR_13, VAR_0, VAR_2 |
      VAR_1);


 FUNC_9(0, VAR_13->base + VAR_7);
 FUNC_9(VAR_9, VAR_13->base + VAR_8);

 FUNC_6(&VAR_13->lock, VAR_14);
}

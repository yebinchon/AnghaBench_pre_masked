
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_spi {int lock; scalar_t__ base; scalar_t__ dma_rx; scalar_t__ cur_usedma; scalar_t__ dma_tx; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int,int,int,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct stm32_spi*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_8(struct stm32_spi *VAR_11)
{
 unsigned long VAR_12;
 u32 VAR_13;

 FUNC_0(VAR_11->dev, "disable controller\n");

 FUNC_5(&VAR_11->lock, VAR_12);

 if (!(FUNC_3(VAR_11->base + VAR_0) &
       VAR_1)) {
  FUNC_6(&VAR_11->lock, VAR_12);
  return;
 }


 FUNC_7(VAR_11, VAR_2, VAR_7 |
       VAR_5 |
       VAR_3);


 if (FUNC_4(VAR_11->base + VAR_9,
           VAR_13, !(VAR_13 & VAR_10),
           10, 100000) < 0) {
  FUNC_1(VAR_11->dev, "disabling condition timeout\n");
 }

 if (VAR_11->cur_usedma && VAR_11->dma_tx)
  FUNC_2(VAR_11->dma_tx);
 if (VAR_11->cur_usedma && VAR_11->dma_rx)
  FUNC_2(VAR_11->dma_rx);

 FUNC_7(VAR_11, VAR_0, VAR_1);

 FUNC_7(VAR_11, VAR_2, VAR_6 |
       VAR_4);


 FUNC_3(VAR_11->base + VAR_8);
 FUNC_3(VAR_11->base + VAR_9);

 FUNC_6(&VAR_11->lock, VAR_12);
}

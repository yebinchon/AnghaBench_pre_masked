
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct moxart_host {int is_removed; int lock; int * mrq; int mmc; scalar_t__ base; int dma_chan_rx; int dma_chan_tx; scalar_t__ have_dma; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct moxart_host*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_9, void *VAR_10)
{
 struct moxart_host *VAR_11 = (struct moxart_host *)VAR_10;
 u32 VAR_12;
 unsigned long VAR_13;

 FUNC_4(&VAR_11->lock, VAR_13);

 VAR_12 = FUNC_3(VAR_11->base + VAR_8);
 if (VAR_12 & VAR_0) {
  VAR_11->is_removed = VAR_12 & VAR_1;
  if (VAR_11->is_removed && VAR_11->have_dma) {
   FUNC_0(VAR_11->dma_chan_tx);
   FUNC_0(VAR_11->dma_chan_rx);
  }
  VAR_11->mrq = ((void*)0);
  FUNC_6(VAR_5, VAR_11->base + VAR_6);
  FUNC_6(VAR_0, VAR_11->base + VAR_7);
  FUNC_1(VAR_11->mmc, 0);
 }
 if (VAR_12 & (VAR_2 | VAR_3) && VAR_11->mrq)
  FUNC_2(VAR_11);

 FUNC_5(&VAR_11->lock, VAR_13);

 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct moxart_host {int data_len; int fifo_width; int rate; scalar_t__ base; scalar_t__ have_dma; TYPE_2__* mrq; } ;
struct mmc_data {int blocks; int blksz; int flags; } ;
struct TYPE_4__ {TYPE_1__* cmd; } ;
struct TYPE_3__ {struct mmc_data* data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct moxart_host*,struct mmc_data*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct moxart_host *VAR_13)
{
 struct mmc_data *VAR_14 = VAR_13->mrq->cmd->data;
 u32 VAR_15;
 int VAR_16;

 if (!VAR_14)
  return;

 VAR_13->data_len = VAR_14->blocks * VAR_14->blksz;
 VAR_16 = FUNC_1(VAR_14->blksz) - 1;
 FUNC_0(1 << VAR_16 != VAR_14->blksz);

 FUNC_2(VAR_13, VAR_14);

 VAR_15 = VAR_1 | (VAR_16 & VAR_0);

 if (VAR_14->flags & VAR_8)
  VAR_15 |= VAR_3;

 if ((VAR_13->data_len > VAR_13->fifo_width) && VAR_13->have_dma)
  VAR_15 |= VAR_4;

 FUNC_3(VAR_2, VAR_13->base + VAR_10);
 FUNC_3(VAR_7 | VAR_6 | VAR_5, VAR_13->base + VAR_9);
 FUNC_3(VAR_13->rate, VAR_13->base + VAR_12);
 FUNC_3(VAR_13->data_len, VAR_13->base + VAR_11);
 FUNC_3(VAR_15, VAR_13->base + VAR_10);
}

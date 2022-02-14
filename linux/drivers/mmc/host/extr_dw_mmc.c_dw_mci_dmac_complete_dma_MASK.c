
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmc_data {int flags; int sg_len; int sg; } ;
struct dw_mci {scalar_t__ use_dma; int tasklet; int pending_events; TYPE_2__* dma_ops; TYPE_1__* slot; int dev; struct mmc_data* data; } ;
struct TYPE_4__ {int (* cleanup ) (struct dw_mci*) ;} ;
struct TYPE_3__ {int mmc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct dw_mci*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_4)
{
 struct dw_mci *VAR_5 = VAR_4;
 struct mmc_data *VAR_6 = VAR_5->data;

 FUNC_0(VAR_5->dev, "DMA complete\n");

 if ((VAR_5->use_dma == VAR_3) &&
     VAR_6 && (VAR_6->flags & VAR_2))

  FUNC_1(FUNC_2(VAR_5->slot->mmc),
        VAR_6->sg,
        VAR_6->sg_len,
        VAR_0);

 VAR_5->dma_ops->cleanup(VAR_5);





 if (VAR_6) {
  FUNC_3(VAR_1, &VAR_5->pending_events);
  FUNC_5(&VAR_5->tasklet);
 }
}

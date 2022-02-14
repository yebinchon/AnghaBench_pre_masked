
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct mmc_request {TYPE_3__* cmd; TYPE_3__* sbc; TYPE_4__* data; TYPE_2__* stop; } ;
struct mmc_host {int dummy; } ;
struct device {int dummy; } ;
struct bcm2835_host {int use_sbc; int mutex; int use_busy; scalar_t__ dma_desc; scalar_t__ data; struct mmc_request* mrq; scalar_t__ use_dma; scalar_t__ ioaddr; TYPE_1__* pdev; } ;
struct TYPE_8__ {scalar_t__ blocks; int flags; int blksz; scalar_t__ error; } ;
struct TYPE_7__ {scalar_t__ error; } ;
struct TYPE_6__ {scalar_t__ error; } ;
struct TYPE_5__ {struct device dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct mmc_request*) ;
 int FUNC_1 (struct bcm2835_host*) ;
 int FUNC_2 (struct bcm2835_host*) ;
 int FUNC_3 (struct bcm2835_host*) ;
 int FUNC_4 (struct bcm2835_host*,TYPE_4__*) ;
 scalar_t__ FUNC_5 (struct bcm2835_host*,TYPE_3__*) ;
 int FUNC_6 (struct bcm2835_host*) ;
 int FUNC_7 (struct device*,char*,int,...) ;
 int FUNC_8 (int ) ;
 struct bcm2835_host* FUNC_9 (struct mmc_host*) ;
 int FUNC_10 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (scalar_t__) ;

__attribute__((used)) static void FUNC_14(struct mmc_host *VAR_10, struct mmc_request *VAR_11)
{
 struct bcm2835_host *VAR_12 = FUNC_9(VAR_10);
 struct device *VAR_13 = &VAR_12->pdev->dev;
 u32 VAR_14, VAR_15;


 if (VAR_11->sbc)
  VAR_11->sbc->error = 0;
 if (VAR_11->cmd)
  VAR_11->cmd->error = 0;
 if (VAR_11->data)
  VAR_11->data->error = 0;
 if (VAR_11->stop)
  VAR_11->stop->error = 0;

 if (VAR_11->data && !FUNC_8(VAR_11->data->blksz)) {
  FUNC_7(VAR_13, "unsupported block size (%d bytes)\n",
   VAR_11->data->blksz);

  if (VAR_11->cmd)
   VAR_11->cmd->error = -VAR_1;

  FUNC_10(VAR_10, VAR_11);
  return;
 }

 FUNC_11(&VAR_12->mutex);

 FUNC_0(VAR_12->mrq);
 VAR_12->mrq = VAR_11;

 VAR_14 = FUNC_13(VAR_12->ioaddr + VAR_6);
 VAR_15 = VAR_14 & VAR_9;

 if ((VAR_15 != VAR_8) &&
     (VAR_15 != VAR_7)) {
  FUNC_7(VAR_13, "previous command (%d) not complete (EDM %08x)\n",
   FUNC_13(VAR_12->ioaddr + VAR_4) & VAR_5,
   VAR_14);
  FUNC_1(VAR_12);

  if (VAR_11->cmd)
   VAR_11->cmd->error = -VAR_0;

  FUNC_3(VAR_12);
  FUNC_12(&VAR_12->mutex);
  return;
 }

 if (VAR_12->use_dma && VAR_11->data && (VAR_11->data->blocks > VAR_3))
  FUNC_4(VAR_12, VAR_11->data);

 VAR_12->use_sbc = !!VAR_11->sbc && VAR_12->mrq->data &&
   (VAR_12->mrq->data->flags & VAR_2);
 if (VAR_12->use_sbc) {
  if (FUNC_5(VAR_12, VAR_11->sbc)) {
   if (!VAR_12->use_busy)
    FUNC_2(VAR_12);
  }
 } else if (VAR_11->cmd && FUNC_5(VAR_12, VAR_11->cmd)) {
  if (VAR_12->data && VAR_12->dma_desc) {

   FUNC_6(VAR_12);
  }

  if (!VAR_12->use_busy)
   FUNC_2(VAR_12);
 }

 FUNC_12(&VAR_12->mutex);
}

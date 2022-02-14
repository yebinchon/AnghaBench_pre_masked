
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tmio_mmc_host {int done; TYPE_1__* pdev; TYPE_2__* mrq; scalar_t__ dma_on; struct mmc_data* data; } ;
struct mmc_data {int bytes_xfered; int blocks; int blksz; int flags; int error; struct mmc_command* stop; } ;
struct mmc_command {scalar_t__ opcode; int * resp; scalar_t__ arg; } ;
struct TYPE_4__ {int sbc; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*,TYPE_2__*) ;
 int FUNC_1 (int *,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tmio_mmc_host*,int ) ;
 int FUNC_6 (struct tmio_mmc_host*,int ,int ) ;
 int FUNC_7 (struct tmio_mmc_host*) ;

void FUNC_8(struct tmio_mmc_host *VAR_4)
{
 struct mmc_data *VAR_5 = VAR_4->data;
 struct mmc_command *VAR_6;

 VAR_4->data = ((void*)0);

 if (!VAR_5) {
  FUNC_2(&VAR_4->pdev->dev, "Spurious data end IRQ\n");
  return;
 }
 VAR_6 = VAR_5->stop;


 if (!VAR_5->error)
  VAR_5->bytes_xfered = VAR_5->blocks * VAR_5->blksz;
 else
  VAR_5->bytes_xfered = 0;

 FUNC_3("Completed data request\n");
 if (VAR_5->flags & VAR_2) {
  if (VAR_4->dma_on)
   FUNC_7(VAR_4);
  FUNC_0(&VAR_4->pdev->dev, "Complete Rx request %p\n",
   VAR_4->mrq);
 } else {
  FUNC_0(&VAR_4->pdev->dev, "Complete Tx request %p\n",
   VAR_4->mrq);
 }

 if (VAR_6 && !VAR_4->mrq->sbc) {
  if (VAR_6->opcode != VAR_3 || VAR_6->arg)
   FUNC_1(&VAR_4->pdev->dev, "unsupported stop: CMD%u,0x%x. We did CMD12,0\n",
    VAR_6->opcode, VAR_6->arg);


  VAR_6->resp[0] = FUNC_5(VAR_4, VAR_0);

  FUNC_6(VAR_4, VAR_1, 0);
 }

 FUNC_4(&VAR_4->done);
}

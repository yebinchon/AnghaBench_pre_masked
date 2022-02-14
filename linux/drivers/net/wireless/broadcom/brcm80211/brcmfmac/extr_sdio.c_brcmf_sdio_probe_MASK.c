
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct workqueue_struct {int dummy; } ;
struct brcmf_sdio_dev {int dev; TYPE_1__* func1; TYPE_2__* func2; struct brcmf_sdio* bus; } ;
struct brcmf_sdio {int dpc_triggered; int dpc_running; int rxflow; int sr_enabled; int idleclock; int idletime; int clkstate; struct brcmf_sdio_dev* sdiodev; int blocksize; int roundup; scalar_t__ tx_hdrlen; int * watchdog_tsk; int watchdog_wait; int timer; int dcmd_resp_wait; int ctrl_wait; int txq_lock; int rxctl_lock; struct workqueue_struct* brcmf_wq; int datawork; scalar_t__ tx_seq; int txminmax; int rxbound; int txbound; int glom; } ;
struct brcmf_fw_request {int dummy; } ;
struct TYPE_5__ {int cur_blksize; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct workqueue_struct* FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,struct brcmf_fw_request*,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 struct brcmf_fw_request* FUNC_6 (struct brcmf_sdio*) ;
 int FUNC_7 (struct brcmf_sdio*) ;
 int FUNC_8 (struct brcmf_sdio*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_9 (struct brcmf_sdio_dev*) ;
 int FUNC_10 (struct brcmf_sdio_dev*,int ,int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct brcmf_fw_request*) ;
 int * FUNC_15 (int ,struct brcmf_sdio*,char*,int ) ;
 struct brcmf_sdio* FUNC_16 (int,int ) ;
 int VAR_19 ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *,int ,int ) ;

struct brcmf_sdio *FUNC_25(struct brcmf_sdio_dev *VAR_20)
{
 int VAR_21;
 struct brcmf_sdio *VAR_22;
 struct workqueue_struct *VAR_23;
 struct brcmf_fw_request *VAR_24;

 FUNC_3(VAR_13, "Enter\n");


 VAR_22 = FUNC_16(sizeof(struct brcmf_sdio), VAR_7);
 if (!VAR_22)
  goto fail;

 VAR_22->sdiodev = VAR_20;
 VAR_20->bus = VAR_22;
 FUNC_22(&VAR_22->glom);
 VAR_22->txbound = VAR_3;
 VAR_22->rxbound = VAR_2;
 VAR_22->txminmax = VAR_4;
 VAR_22->tx_seq = VAR_11 - 1;


 VAR_23 = FUNC_2("brcmf_wq/%s", VAR_14,
         FUNC_11(&VAR_20->func1->dev));
 if (!VAR_23) {
  FUNC_4("insufficient memory to create txworkqueue\n");
  goto fail;
 }
 FUNC_9(VAR_20);
 FUNC_0(&VAR_22->datawork, VAR_15);
 VAR_22->brcmf_wq = VAR_23;


 if (!(FUNC_7(VAR_22))) {
  FUNC_4("brcmf_sdio_probe_attach failed\n");
  goto fail;
 }

 FUNC_23(&VAR_22->rxctl_lock);
 FUNC_23(&VAR_22->txq_lock);
 FUNC_13(&VAR_22->ctrl_wait);
 FUNC_13(&VAR_22->dcmd_resp_wait);


 FUNC_24(&VAR_22->timer, VAR_17, 0);

 FUNC_12(&VAR_22->watchdog_wait);
 VAR_22->watchdog_tsk = FUNC_15(VAR_18,
     VAR_22, "brcmf_wdog/%s",
     FUNC_11(&VAR_20->func1->dev));
 if (FUNC_1(VAR_22->watchdog_tsk)) {
  FUNC_18("brcmf_watchdog thread failed to start\n");
  VAR_22->watchdog_tsk = ((void*)0);
 }

 VAR_22->dpc_triggered = 0;
 VAR_22->dpc_running = 0;


 VAR_22->tx_hdrlen = VAR_10 + VAR_12;


 VAR_22->blocksize = VAR_22->sdiodev->func2->cur_blksize;
 VAR_22->roundup = FUNC_17(VAR_19, VAR_22->blocksize);

 FUNC_19(VAR_22->sdiodev->func1);


 FUNC_20(VAR_22->sdiodev->func2);

 VAR_22->rxflow = 0;


 FUNC_10(VAR_22->sdiodev, VAR_9, 0, ((void*)0));

 FUNC_21(VAR_22->sdiodev->func1);


 VAR_22->clkstate = VAR_5;
 VAR_22->idletime = VAR_1;
 VAR_22->idleclock = VAR_0;


 VAR_22->sr_enabled = 0;

 FUNC_3(VAR_8, "completed!!\n");

 VAR_24 = FUNC_6(VAR_22);
 if (!VAR_24) {
  VAR_21 = -VAR_6;
  goto fail;
 }

 VAR_21 = FUNC_5(VAR_20->dev, VAR_24,
         VAR_16);
 if (VAR_21 != 0) {
  FUNC_4("async firmware request failed: %d\n", VAR_21);
  FUNC_14(VAR_24);
  goto fail;
 }

 return VAR_22;

fail:
 FUNC_8(VAR_22);
 return ((void*)0);
}

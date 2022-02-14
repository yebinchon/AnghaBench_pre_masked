
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_sdio {struct brcmf_sdio* hdrbuf; struct brcmf_sdio* rxbuf; TYPE_1__* sdiodev; scalar_t__ ci; scalar_t__ brcmf_wq; int datawork; int * watchdog_tsk; } ;
struct TYPE_2__ {scalar_t__ state; scalar_t__ settings; int func1; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct brcmf_sdio*,int ,int) ;
 int FUNC_6 (struct brcmf_sdio*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct brcmf_sdio*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int *,int) ;

void FUNC_16(struct brcmf_sdio *VAR_5)
{
 FUNC_2(VAR_4, "Enter\n");

 if (VAR_5) {

  if (VAR_5->watchdog_tsk) {
   FUNC_15(VAR_3, VAR_5->watchdog_tsk, 1);
   FUNC_11(VAR_5->watchdog_tsk);
   VAR_5->watchdog_tsk = ((void*)0);
  }


  FUNC_7(VAR_5->sdiodev);

  FUNC_3(VAR_5->sdiodev->dev);

  FUNC_8(&VAR_5->datawork);
  if (VAR_5->brcmf_wq)
   FUNC_9(VAR_5->brcmf_wq);

  if (VAR_5->ci) {
   if (VAR_5->sdiodev->state != VAR_0) {
    FUNC_13(VAR_5->sdiodev->func1);
    FUNC_6(VAR_5, 0);
    FUNC_5(VAR_5, VAR_1, 0);




    FUNC_12(20);
    FUNC_1(VAR_5->ci);
    FUNC_5(VAR_5, VAR_2, 0);
    FUNC_14(VAR_5->sdiodev->func1);
   }
   FUNC_0(VAR_5->ci);
  }
  if (VAR_5->sdiodev->settings)
   FUNC_4(VAR_5->sdiodev->settings);

  FUNC_10(VAR_5->rxbuf);
  FUNC_10(VAR_5->hdrbuf);
  FUNC_10(VAR_5);
 }

 FUNC_2(VAR_4, "Disconnected\n");
}

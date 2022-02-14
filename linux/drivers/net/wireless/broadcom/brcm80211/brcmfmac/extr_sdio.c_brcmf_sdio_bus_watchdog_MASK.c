
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {scalar_t__ count; } ;
struct TYPE_4__ {scalar_t__ intrcount; scalar_t__ lastintrs; int pollcnt; } ;
struct brcmf_sdio {scalar_t__ polltick; scalar_t__ pollrate; int dpc_triggered; scalar_t__ console_interval; scalar_t__ idletime; scalar_t__ clkstate; scalar_t__ idlecount; TYPE_3__* sdiodev; int dpc_running; TYPE_2__ console; TYPE_1__ sdcnt; int datawork; int brcmf_wq; int ipend; int intr; scalar_t__ poll; int sr_enabled; } ;
struct TYPE_6__ {scalar_t__ state; int func1; } ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct brcmf_sdio*,int,int) ;
 scalar_t__ FUNC_4 (struct brcmf_sdio*) ;
 int FUNC_5 (struct brcmf_sdio*,int) ;
 int FUNC_6 (TYPE_3__*,int ,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct brcmf_sdio *VAR_8)
{
 FUNC_2(VAR_7, "Enter\n");


 if (!VAR_8->sr_enabled &&
     VAR_8->poll && (++VAR_8->polltick >= VAR_8->pollrate)) {
  u32 VAR_9 = 0;


  VAR_8->polltick = 0;


  if (!VAR_8->intr ||
      (VAR_8->sdcnt.intrcount == VAR_8->sdcnt.lastintrs)) {

   if (!VAR_8->dpc_triggered) {
    u8 VAR_10;

    FUNC_10(VAR_8->sdiodev->func1);
    VAR_10 = FUNC_6(VAR_8->sdiodev,
        VAR_6, ((void*)0));
    FUNC_11(VAR_8->sdiodev->func1);
    VAR_9 = VAR_10 & (VAR_3 |
             VAR_4);
   }



   if (VAR_9) {
    VAR_8->sdcnt.pollcnt++;
    FUNC_1(&VAR_8->ipend, 1);

    VAR_8->dpc_triggered = 1;
    FUNC_8(VAR_8->brcmf_wq, &VAR_8->datawork);
   }
  }


  VAR_8->sdcnt.lastintrs = VAR_8->sdcnt.intrcount;
 }
 if (!VAR_8->dpc_triggered) {
  FUNC_9();
  if ((!VAR_8->dpc_running) && (VAR_8->idletime > 0) &&
      (VAR_8->clkstate == VAR_2)) {
   VAR_8->idlecount++;
   if (VAR_8->idlecount > VAR_8->idletime) {
    FUNC_2(VAR_5, "idle\n");
    FUNC_10(VAR_8->sdiodev->func1);
    FUNC_5(VAR_8, 0);
    VAR_8->idlecount = 0;
    FUNC_3(VAR_8, 1, 0);
    FUNC_11(VAR_8->sdiodev->func1);
   }
  } else {
   VAR_8->idlecount = 0;
  }
 } else {
  VAR_8->idlecount = 0;
 }
}

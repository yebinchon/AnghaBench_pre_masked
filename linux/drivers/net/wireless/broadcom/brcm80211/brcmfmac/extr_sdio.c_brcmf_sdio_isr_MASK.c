
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int intrcount; } ;
struct brcmf_sdio {int dpc_triggered; int datawork; int brcmf_wq; int intr; int ipend; TYPE_1__ sdcnt; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct brcmf_sdio*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct brcmf_sdio *VAR_1)
{
 FUNC_1(VAR_0, "Enter\n");

 if (!VAR_1) {
  FUNC_2("bus is null pointer, exiting\n");
  return;
 }


 VAR_1->sdcnt.intrcount++;
 if (FUNC_4())
  FUNC_0(&VAR_1->ipend, 1);
 else
  if (FUNC_3(VAR_1)) {
   FUNC_2("failed backplane access\n");
  }


 if (!VAR_1->intr)
  FUNC_2("isr w/o interrupt configured!\n");

 VAR_1->dpc_triggered = 1;
 FUNC_5(VAR_1->brcmf_wq, &VAR_1->datawork);
}

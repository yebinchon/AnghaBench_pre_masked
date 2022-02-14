
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_sdio {int dpc_triggered; int datawork; int brcmf_wq; } ;


 int FUNC_0 (int ,int *) ;

void FUNC_1(struct brcmf_sdio *VAR_0)
{
 if (!VAR_0->dpc_triggered) {
  VAR_0->dpc_triggered = 1;
  FUNC_0(VAR_0->brcmf_wq, &VAR_0->datawork);
 }
}

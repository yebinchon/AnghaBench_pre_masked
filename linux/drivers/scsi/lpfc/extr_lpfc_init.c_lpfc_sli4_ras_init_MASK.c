
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ras_hwsupport; int ras_enabled; } ;
struct lpfc_hba {TYPE_2__ ras_fwlog; int cfg_ras_fwlog_buffsize; TYPE_1__* pcidev; int cfg_ras_fwlog_func; } ;
struct TYPE_3__ {int device; int devfn; } ;




 int FUNC_0 (int ) ;

void
FUNC_1(struct lpfc_hba *VAR_0)
{
 switch (VAR_0->pcidev->device) {
 case 129:
 case 128:
  VAR_0->ras_fwlog.ras_hwsupport = 1;
  if (VAR_0->cfg_ras_fwlog_func == FUNC_0(VAR_0->pcidev->devfn) &&
      VAR_0->cfg_ras_fwlog_buffsize)
   VAR_0->ras_fwlog.ras_enabled = 1;
  else
   VAR_0->ras_fwlog.ras_enabled = 0;
  break;
 default:
  VAR_0->ras_fwlog.ras_hwsupport = 0;
 }
}

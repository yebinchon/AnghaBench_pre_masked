
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_hba {int hba_flag; TYPE_1__* pcidev; } ;
struct TYPE_2__ {scalar_t__ device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct lpfc_hba *VAR_2)
{

 if (VAR_2->pcidev->device == VAR_1)
  VAR_2->hba_flag |= VAR_0;
 else
  VAR_2->hba_flag &= ~VAR_0;
}

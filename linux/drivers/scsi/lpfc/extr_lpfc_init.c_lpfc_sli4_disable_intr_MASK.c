
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ sli_intr; } ;
struct TYPE_8__ {TYPE_2__ slistat; } ;
struct TYPE_6__ {struct lpfc_hba* hba_eq_hdl; } ;
struct lpfc_hba {scalar_t__ intr_type; int cfg_irq_chann; TYPE_3__ sli; TYPE_4__* pcidev; TYPE_1__ sli4_hba; } ;
struct TYPE_9__ {int irq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct lpfc_hba*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int) ;

__attribute__((used)) static void
FUNC_4(struct lpfc_hba *VAR_2)
{

 if (VAR_2->intr_type == VAR_0) {
  int VAR_3;


  for (VAR_3 = 0; VAR_3 < VAR_2->cfg_irq_chann; VAR_3++) {
   FUNC_1(
    FUNC_3(VAR_2->pcidev, VAR_3),
    ((void*)0));
   FUNC_0(FUNC_3(VAR_2->pcidev, VAR_3),
     &VAR_2->sli4_hba.hba_eq_hdl[VAR_3]);
  }
 } else {
  FUNC_0(VAR_2->pcidev->irq, VAR_2);
 }

 FUNC_2(VAR_2->pcidev);


 VAR_2->intr_type = VAR_1;
 VAR_2->sli.slistat.sli_intr = 0;
}

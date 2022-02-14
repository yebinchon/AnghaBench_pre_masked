
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_hba_eq_hdl {int idx; struct lpfc_hba* phba; } ;
struct TYPE_4__ {struct lpfc_hba_eq_hdl* hba_eq_hdl; } ;
struct lpfc_hba {scalar_t__ intr_type; int cfg_irq_chann; TYPE_2__ sli4_hba; TYPE_1__* pcidev; } ;
struct TYPE_3__ {int irq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int ,int ,struct lpfc_hba*) ;

__attribute__((used)) static uint32_t
FUNC_3(struct lpfc_hba *VAR_8, uint32_t VAR_9)
{
 uint32_t VAR_10 = VAR_3;
 int VAR_11, VAR_12;

 if (VAR_9 == 2) {

  VAR_11 = 0;
  if (!VAR_11) {

   VAR_11 = FUNC_1(VAR_8);
   if (!VAR_11) {

    VAR_8->intr_type = VAR_5;
    VAR_10 = 2;
   }
  }
 }


 if (VAR_9 >= 1 && VAR_8->intr_type == VAR_6) {
  VAR_11 = FUNC_0(VAR_8);
  if (!VAR_11) {

   VAR_8->intr_type = VAR_4;
   VAR_10 = 1;
  }
 }


 if (VAR_8->intr_type == VAR_6) {
  VAR_11 = FUNC_2(VAR_8->pcidev->irq, VAR_7,
         VAR_1, VAR_2, VAR_8);
  if (!VAR_11) {
   struct lpfc_hba_eq_hdl *VAR_13;


   VAR_8->intr_type = VAR_0;
   VAR_10 = 0;

   for (VAR_12 = 0; VAR_12 < VAR_8->cfg_irq_chann; VAR_12++) {
    VAR_13 = &VAR_8->sli4_hba.hba_eq_hdl[VAR_12];
    VAR_13->idx = VAR_12;
    VAR_13->phba = VAR_8;
   }
  }
 }
 return VAR_10;
}

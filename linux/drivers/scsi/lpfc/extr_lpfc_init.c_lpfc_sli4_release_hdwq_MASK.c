
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct lpfc_sli4_hdw_queue {struct lpfc_queue* io_wq; struct lpfc_queue* io_cq; } ;
struct lpfc_queue {int dummy; } ;
struct TYPE_4__ {TYPE_1__* hba_eq_hdl; struct lpfc_sli4_hdw_queue* hdwq; } ;
struct lpfc_hba {size_t cfg_hdw_queue; size_t cfg_irq_chann; TYPE_2__ sli4_hba; int nvmet_support; scalar_t__ cfg_xpsgl; } ;
struct TYPE_3__ {struct lpfc_queue* eq; } ;


 int FUNC_0 (struct lpfc_hba*,struct lpfc_sli4_hdw_queue*) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_sli4_hdw_queue*) ;
 int FUNC_2 (struct lpfc_queue*) ;

__attribute__((used)) static inline void
FUNC_3(struct lpfc_hba *VAR_0)
{
 struct lpfc_sli4_hdw_queue *VAR_1;
 struct lpfc_queue *VAR_2;
 uint32_t VAR_3;

 VAR_1 = VAR_0->sli4_hba.hdwq;


 for (VAR_3 = 0; VAR_3 < VAR_0->cfg_hdw_queue; VAR_3++) {

  FUNC_2(VAR_1[VAR_3].io_cq);
  FUNC_2(VAR_1[VAR_3].io_wq);
  VAR_1[VAR_3].io_cq = ((void*)0);
  VAR_1[VAR_3].io_wq = ((void*)0);
  if (VAR_0->cfg_xpsgl && !VAR_0->nvmet_support)
   FUNC_1(VAR_0, &VAR_1[VAR_3]);
  FUNC_0(VAR_0, &VAR_1[VAR_3]);
 }

 for (VAR_3 = 0; VAR_3 < VAR_0->cfg_irq_chann; VAR_3++) {

  VAR_2 = VAR_0->sli4_hba.hba_eq_hdl[VAR_3].eq;
  FUNC_2(VAR_2);
  VAR_0->sli4_hba.hba_eq_hdl[VAR_3].eq = ((void*)0);
 }
}

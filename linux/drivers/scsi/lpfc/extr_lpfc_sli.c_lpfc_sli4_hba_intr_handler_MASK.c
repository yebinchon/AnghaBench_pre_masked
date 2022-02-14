
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct lpfc_queue {scalar_t__ q_mode; int EQ_no_entry; int last_cpu; } ;
struct lpfc_hba_eq_hdl {int idx; struct lpfc_hba* phba; } ;
struct TYPE_6__ {int sli_flag; } ;
struct TYPE_5__ {struct lpfc_eq_intr_info* eq_info; TYPE_1__* hba_eq_hdl; int hdwq; } ;
struct lpfc_hba {scalar_t__ link_state; int cfg_irq_chann; scalar_t__ intr_type; TYPE_3__ sli; scalar_t__ cfg_auto_imax; TYPE_2__ sli4_hba; int hbalock; } ;
struct lpfc_eq_intr_info {int icnt; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {struct lpfc_queue* eq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_queue*) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_queue*,scalar_t__) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_queue*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;

irqreturn_t
FUNC_10(int VAR_9, void *VAR_10)
{
 struct lpfc_hba *VAR_11;
 struct lpfc_hba_eq_hdl *VAR_12;
 struct lpfc_queue *VAR_13;
 unsigned long VAR_14;
 int VAR_15 = 0;
 int VAR_16;
 struct lpfc_eq_intr_info *VAR_17;
 uint32_t VAR_18;


 VAR_12 = (struct lpfc_hba_eq_hdl *)VAR_10;
 VAR_11 = VAR_12->phba;
 VAR_16 = VAR_12->idx;

 if (FUNC_9(!VAR_11))
  return VAR_1;
 if (FUNC_9(!VAR_11->sli4_hba.hdwq))
  return VAR_1;


 VAR_13 = VAR_11->sli4_hba.hba_eq_hdl[VAR_16].eq;
 if (FUNC_9(!VAR_13))
  return VAR_1;


 if (FUNC_9(FUNC_0(VAR_11))) {

  FUNC_6(&VAR_11->hbalock, VAR_14);
  if (VAR_11->link_state < VAR_5)

   FUNC_2(VAR_11, VAR_13);
  FUNC_7(&VAR_11->hbalock, VAR_14);
  return VAR_1;
 }

 VAR_17 = VAR_11->sli4_hba.eq_info;
 VAR_18 = FUNC_8(VAR_17->icnt);
 VAR_13->last_cpu = FUNC_5();

 if (VAR_18 > VAR_4 &&
     VAR_11->cfg_irq_chann == 1 &&
     VAR_11->cfg_auto_imax &&
     VAR_13->q_mode != VAR_6 &&
     VAR_11->sli.sli_flag & VAR_7)
  FUNC_3(VAR_11, VAR_13, VAR_6);


 VAR_15 = FUNC_4(VAR_11, VAR_13);

 if (FUNC_9(VAR_15 == 0)) {
  VAR_13->EQ_no_entry++;
  if (VAR_11->intr_type == VAR_8)

   FUNC_1(VAR_11, VAR_2, VAR_3,
     "0358 MSI-X interrupt with no EQE\n");
  else

   return VAR_1;
 }

 return VAR_0;
}

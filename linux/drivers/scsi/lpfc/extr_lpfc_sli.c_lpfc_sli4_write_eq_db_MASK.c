
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_register {scalar_t__ word0; } ;
struct lpfc_queue {int queue_id; TYPE_2__* phba; } ;
struct lpfc_hba {int dummy; } ;
struct TYPE_3__ {int EQDBregaddr; } ;
struct TYPE_4__ {scalar_t__ intr_type; TYPE_1__ sli4_hba; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct lpfc_register*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int ) ;

void
FUNC_4(struct lpfc_hba *VAR_10, struct lpfc_queue *VAR_11,
       uint32_t VAR_12, bool VAR_13)
{
 struct lpfc_register VAR_14;


 if (FUNC_2(!VAR_11 || (VAR_12 == 0 && !VAR_13)))
  return;


 VAR_14.word0 = 0;
 if (VAR_13) {
  FUNC_0(VAR_4, &VAR_14, 1);
  FUNC_0(VAR_5, &VAR_14, 1);
 }
 FUNC_0(VAR_8, &VAR_14, VAR_12);
 FUNC_0(VAR_9, &VAR_14, VAR_3);
 FUNC_0(VAR_6, &VAR_14,
   (VAR_11->queue_id >> VAR_1));
 FUNC_0(VAR_7, &VAR_14, VAR_11->queue_id);
 FUNC_3(VAR_14.word0, VAR_11->phba->sli4_hba.EQDBregaddr);

 if ((VAR_11->phba->intr_type == VAR_0) && (VAR_13 == VAR_2))
  FUNC_1(VAR_11->phba->sli4_hba.EQDBregaddr);
}

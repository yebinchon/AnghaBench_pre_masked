
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
 int FUNC_0 (int ,struct lpfc_register*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int ) ;

void
FUNC_4(struct lpfc_hba *VAR_5, struct lpfc_queue *VAR_6,
     uint32_t VAR_7, bool VAR_8)
{
 struct lpfc_register VAR_9;


 if (FUNC_2(!VAR_6 || (VAR_7 == 0 && !VAR_8)))
  return;


 VAR_9.word0 = 0;
 if (VAR_8)
  FUNC_0(VAR_2, &VAR_9, 1);
 FUNC_0(VAR_4, &VAR_9, VAR_7);
 FUNC_0(VAR_3, &VAR_9, VAR_6->queue_id);
 FUNC_3(VAR_9.word0, VAR_6->phba->sli4_hba.EQDBregaddr);

 if ((VAR_6->phba->intr_type == VAR_0) && (VAR_8 == VAR_1))
  FUNC_1(VAR_6->phba->sli4_hba.EQDBregaddr);
}


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
struct TYPE_3__ {int CQDBregaddr; } ;
struct TYPE_4__ {TYPE_1__ sli4_hba; } ;


 int FUNC_0 (int ,struct lpfc_register*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int ) ;

void
FUNC_3(struct lpfc_hba *VAR_3, struct lpfc_queue *VAR_4,
    uint32_t VAR_5, bool VAR_6)
{
 struct lpfc_register VAR_7;


 if (FUNC_1(!VAR_4 || (VAR_5 == 0 && !VAR_6)))
  return;


 VAR_7.word0 = 0;
 if (VAR_6)
  FUNC_0(VAR_0, &VAR_7, 1);
 FUNC_0(VAR_2, &VAR_7, VAR_5);
 FUNC_0(VAR_1, &VAR_7, VAR_4->queue_id);
 FUNC_2(VAR_7.word0, VAR_4->phba->sli4_hba.CQDBregaddr);
}

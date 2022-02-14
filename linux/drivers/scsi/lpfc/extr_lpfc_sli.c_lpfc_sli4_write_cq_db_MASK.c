
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


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct lpfc_register*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int ) ;

void
FUNC_3(struct lpfc_hba *VAR_7, struct lpfc_queue *VAR_8,
       uint32_t VAR_9, bool VAR_10)
{
 struct lpfc_register VAR_11;


 if (FUNC_1(!VAR_8 || (VAR_9 == 0 && !VAR_10)))
  return;


 VAR_11.word0 = 0;
 if (VAR_10)
  FUNC_0(VAR_2, &VAR_11, 1);
 FUNC_0(VAR_5, &VAR_11, VAR_9);
 FUNC_0(VAR_6, &VAR_11, VAR_1);
 FUNC_0(VAR_3, &VAR_11,
   (VAR_8->queue_id >> VAR_0));
 FUNC_0(VAR_4, &VAR_11, VAR_8->queue_id);
 FUNC_2(VAR_11.word0, VAR_8->phba->sli4_hba.CQDBregaddr);
}

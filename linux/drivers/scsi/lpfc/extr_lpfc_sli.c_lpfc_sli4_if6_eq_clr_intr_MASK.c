
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_register {scalar_t__ word0; } ;
struct lpfc_queue {TYPE_2__* phba; int queue_id; } ;
struct TYPE_3__ {int EQDBregaddr; } ;
struct TYPE_4__ {TYPE_1__ sli4_hba; } ;


 int FUNC_0 (int ,struct lpfc_register*,int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int ) ;

void
FUNC_2(struct lpfc_queue *VAR_1)
{
 struct lpfc_register VAR_2;

 VAR_2.word0 = 0;
 FUNC_0(VAR_0, &VAR_2, VAR_1->queue_id);
 FUNC_1(VAR_2.word0, VAR_1->phba->sli4_hba.EQDBregaddr);
}

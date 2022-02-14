
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_register {scalar_t__ word0; } ;
struct lpfc_queue {int host_index; int entry_count; int hba_index; int queue_id; TYPE_2__* phba; int entry_size; } ;
struct lpfc_mqe {int dummy; } ;
struct TYPE_3__ {int MQDBregaddr; } ;
struct TYPE_4__ {TYPE_1__ sli4_hba; int * mbox; } ;
typedef int MAILBOX_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct lpfc_register*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct lpfc_mqe*,struct lpfc_mqe*,int ) ;
 struct lpfc_mqe* FUNC_2 (struct lpfc_queue*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static uint32_t
FUNC_5(struct lpfc_queue *VAR_3, struct lpfc_mqe *VAR_4)
{
 struct lpfc_mqe *VAR_5;
 struct lpfc_register VAR_6;


 if (FUNC_3(!VAR_3))
  return -VAR_0;
 VAR_5 = FUNC_2(VAR_3, VAR_3->host_index);


 if (((VAR_3->host_index + 1) % VAR_3->entry_count) == VAR_3->hba_index)
  return -VAR_0;
 FUNC_1(VAR_4, VAR_5, VAR_3->entry_size);

 VAR_3->phba->mbox = (MAILBOX_t *)VAR_5;


 VAR_3->host_index = ((VAR_3->host_index + 1) % VAR_3->entry_count);


 VAR_6.word0 = 0;
 FUNC_0(VAR_2, &VAR_6, 1);
 FUNC_0(VAR_1, &VAR_6, VAR_3->queue_id);
 FUNC_4(VAR_6.word0, VAR_3->phba->sli4_hba.MQDBregaddr);
 return 0;
}

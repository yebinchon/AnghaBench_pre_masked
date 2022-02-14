
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_hba {int hbq_in_use; int hbq_count; int mbox_mem_pool; int link_state; TYPE_2__* hbqs; } ;
struct TYPE_14__ {int entry_count; } ;
struct TYPE_12__ {int mbxStatus; int mbxCommand; } ;
struct TYPE_10__ {TYPE_3__ mb; } ;
struct TYPE_13__ {TYPE_1__ u; } ;
struct TYPE_11__ {int entry_count; scalar_t__ local_hbqGetIdx; scalar_t__ hbqPutIdx; scalar_t__ next_hbqPutIdx; } ;
typedef TYPE_3__ MAILBOX_t ;
typedef TYPE_4__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct lpfc_hba*,int,TYPE_7__*,int,TYPE_4__*) ;
 TYPE_7__** VAR_10 ;
 int FUNC_1 (struct lpfc_hba*,int ,int,char*,int ,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct lpfc_hba*,int) ;
 scalar_t__ FUNC_4 (struct lpfc_hba*,TYPE_4__*,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_4__*,int ) ;

__attribute__((used)) static int
FUNC_7(struct lpfc_hba *VAR_11)
{
 int VAR_12 = FUNC_2();
 LPFC_MBOXQ_t *VAR_13;
 MAILBOX_t *VAR_14;
 uint32_t VAR_15;
 uint32_t VAR_16;




 VAR_13 = (LPFC_MBOXQ_t *) FUNC_5(VAR_11->mbox_mem_pool, VAR_2);

 if (!VAR_13)
  return -VAR_0;

 VAR_14 = &VAR_13->u.mb;


 VAR_11->link_state = VAR_7;
 VAR_11->hbq_in_use = 1;

 VAR_16 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_12; ++VAR_15) {
  VAR_11->hbqs[VAR_15].next_hbqPutIdx = 0;
  VAR_11->hbqs[VAR_15].hbqPutIdx = 0;
  VAR_11->hbqs[VAR_15].local_hbqGetIdx = 0;
  VAR_11->hbqs[VAR_15].entry_count =
   VAR_10[VAR_15]->entry_count;
  FUNC_0(VAR_11, VAR_15, VAR_10[VAR_15],
   VAR_16, VAR_13);
  VAR_16 += VAR_11->hbqs[VAR_15].entry_count;

  if (FUNC_4(VAR_11, VAR_13, VAR_8) != VAR_9) {



   FUNC_1(VAR_11, VAR_3,
     VAR_4 | VAR_5,
     "1805 Adapter failed to init. "
     "Data: x%x x%x x%x\n",
     VAR_14->mbxCommand,
     VAR_14->mbxStatus, VAR_15);

   VAR_11->link_state = VAR_6;
   FUNC_6(VAR_13, VAR_11->mbox_mem_pool);
   return -VAR_1;
  }
 }
 VAR_11->hbq_count = VAR_12;

 FUNC_6(VAR_13, VAR_11->mbox_mem_pool);


 for (VAR_15 = 0; VAR_15 < VAR_12; ++VAR_15)
  FUNC_3(VAR_11, VAR_15);
 return 0;
}
